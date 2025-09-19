#pragma once
#include <windows.h>
#include <winnt.h>
#include <TlHelp32.h>
#include <string>
#include <string_view>



class c_resolve {
public:
	static HMODULE get_module_base(std::string_view module_name) {
		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, GetCurrentProcessId());
		if (snapshot == INVALID_HANDLE_VALUE)
			return nullptr;

		MODULEENTRY32 modEntry{};
		modEntry.dwSize = sizeof(MODULEENTRY32);

		if (Module32First(snapshot, &modEntry)) {
			do {
				if (_stricmp((const char*)modEntry.szModule, std::string(module_name).c_str()) == 0) {
					CloseHandle(snapshot);
					return modEntry.hModule;
				}
			} while (Module32Next(snapshot, &modEntry));
		}
		CloseHandle(snapshot);
		return nullptr;
	}
	static void* get_export(HMODULE base, const char* name) {
		if (!base)
			return nullptr;

		auto* dosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(base);
		if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE)
			return nullptr;

		auto* ntHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>((uintptr_t)base + dosHeader->e_lfanew);
		if (ntHeaders->Signature != IMAGE_NT_SIGNATURE)
			return nullptr;

		DWORD exportDirRVA = ntHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;
		if (!exportDirRVA)
			return nullptr;

		PIMAGE_EXPORT_DIRECTORY exportDir = reinterpret_cast<PIMAGE_EXPORT_DIRECTORY>((uintptr_t)base + exportDirRVA);

		uint32_t* nameArray = reinterpret_cast<uint32_t*>((uintptr_t)base + exportDir->AddressOfNames);
		uint32_t* funcArray = reinterpret_cast<uint32_t*>((uintptr_t)base + exportDir->AddressOfFunctions);
		uint16_t* ordinalArray = reinterpret_cast<uint16_t*>((uintptr_t)base + exportDir->AddressOfNameOrdinals);

		for (DWORD i = 0; i < exportDir->NumberOfNames; i++) {
			const char* currName = reinterpret_cast<const char*>((uintptr_t)base + nameArray[i]);
			if (!_stricmp(currName, name)) {
				uint16_t ordinal = ordinalArray[i];
				uint32_t funcRVA = funcArray[ordinal];
				return (void*)((uintptr_t)base + funcRVA);
			}
		}

		return nullptr;
	}

	template<typename ret, typename... args>
	static ret(*get_func(const char* module_name, const char* export_name))(args...) {
		HMODULE base = get_module_base(module_name);
		if (!base)
			return nullptr;

		void* fn = get_export(base, export_name);
		if (!fn)
			return nullptr;

		return reinterpret_cast<ret(*)(args...)>(fn);
	}

	template<typename ret, typename... args>
	static ret call_func(ret(*fn)(args...), args... a) {
		return SPOOF_CALL(fn)(a...);
	}
	template<typename ret, typename... args>
	static ret resolve_and_call(const char* module_name, const char* export_name, args... a) {
		auto fn = get_func<ret, args...>(module_name, export_name);
		if (!fn)
			return static_cast<ret>(0);
		return call_func(fn, a...);
	}
};
