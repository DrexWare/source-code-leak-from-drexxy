#pragma once

#include <sstream>

#include <iostream>
#include <Windows.h>


std::string logo = R"(
 ________   ___        ________   ___  ___   ________     
|\   ____\ |\  \      |\   __  \ |\  \|\  \ |\   ___ \    
\ \  \___| \ \  \     \ \  \|\  \\ \  \\\  \\ \  \_|\ \   
 \ \  \     \ \  \     \ \  \\\  \\ \  \\\  \\ \  \ \\ \  
  \ \  \____ \ \  \____ \ \  \\\  \\ \  \\\  \\ \  \_\\ \ 
   \ \_______\\ \_______\\ \_______\\ \_______\\ \_______\
    \|_______| \|_______| \|_______| \|_______| \|_______|
                                     
)";

class c_console {
private:
#if bShouldResolve

	// function ptrs
	using tGetConsoleCursorInfo = BOOL(WINAPI*)(HANDLE, PCONSOLE_CURSOR_INFO);
	using tSetConsoleCursorInfo = BOOL(WINAPI*)(HANDLE, const CONSOLE_CURSOR_INFO*);
	using tGetConsoleWindow = HWND(WINAPI*)();
	using tGetWindowRect = BOOL(WINAPI*)(HWND, LPRECT);
	using tGetStdHandle = HANDLE(WINAPI*)(DWORD);
	using tGetConsoleScreenBufferInfo = BOOL(WINAPI*)(HANDLE, PCONSOLE_SCREEN_BUFFER_INFO);
	using tSetWindowLongA = LONG(WINAPI*)(HWND, int, LONG);
	using tGetWindowLongA = LONG(WINAPI*)(HWND, int);
	using tSetLayeredWindowAttributes = BOOL(WINAPI*)(HWND, COLORREF, BYTE, DWORD);
	using tSetConsoleScreenBufferSize = BOOL(WINAPI*)(HANDLE, COORD);
	using tSetWindowPos = BOOL(WINAPI*)(HWND, HWND, int, int, int, int, UINT);
	using tSetConsoleTextAttribute = BOOL(WINAPI*)(HANDLE, WORD);
	using tSetConsoleTitleA = BOOL(WINAPI*)(LPCSTR);

	// set ptrs to null
	tGetConsoleCursorInfo pGetConsoleCursorInfo = nullptr;
	tSetConsoleCursorInfo pSetConsoleCursorInfo = nullptr;
	tGetConsoleWindow pGetConsoleWindow = nullptr;
	tGetWindowRect pGetWindowRect = nullptr;
	tGetStdHandle pGetStdHandle = nullptr;
	tGetConsoleScreenBufferInfo pGetConsoleScreenBufferInfo = nullptr;
	tSetWindowLongA pSetWindowLongA = nullptr;
	tGetWindowLongA pGetWindowLongA = nullptr;
	tSetLayeredWindowAttributes pSetLayeredWindowAttributes = nullptr;
	tSetConsoleScreenBufferSize pSetConsoleScreenBufferSize = nullptr;
	tSetWindowPos pSetWindowPos = nullptr;
	tSetConsoleTextAttribute pSetConsoleTextAttribute = nullptr;
	tSetConsoleTitleA pSetConsoleTitleA = nullptr;

	// resolve all funcs
	void resolve_functions() {
		pGetConsoleCursorInfo = c_resolve::get_func<BOOL, HANDLE, PCONSOLE_CURSOR_INFO>("kernel32.dll", "GetConsoleCursorInfo");
		pSetConsoleCursorInfo = c_resolve::get_func<BOOL, HANDLE, const CONSOLE_CURSOR_INFO*>("kernel32.dll", "SetConsoleCursorInfo");
		pGetConsoleWindow = c_resolve::get_func<HWND>("kernel32.dll", "GetConsoleWindow");
		pGetWindowRect = c_resolve::get_func<BOOL, HWND, LPRECT>("user32.dll", "GetWindowRect");
		pGetStdHandle = c_resolve::get_func<HANDLE, DWORD>("kernel32.dll", "GetStdHandle");
		pGetConsoleScreenBufferInfo = c_resolve::get_func<BOOL, HANDLE, PCONSOLE_SCREEN_BUFFER_INFO>("kernel32.dll", "GetConsoleScreenBufferInfo");
		pSetWindowLongA = c_resolve::get_func<LONG, HWND, int, LONG>("user32.dll", "SetWindowLongA");
		pGetWindowLongA = c_resolve::get_func<LONG, HWND, int>("user32.dll", "GetWindowLongA");
		pSetLayeredWindowAttributes = c_resolve::get_func<BOOL, HWND, COLORREF, BYTE, DWORD>("user32.dll", "SetLayeredWindowAttributes");
		pSetConsoleScreenBufferSize = c_resolve::get_func<BOOL, HANDLE, COORD>("kernel32.dll", "SetConsoleScreenBufferSize");
		pSetWindowPos = c_resolve::get_func<BOOL, HWND, HWND, int, int, int, int, UINT>("user32.dll", "SetWindowPos");
		pSetConsoleTextAttribute = c_resolve::get_func<BOOL, HANDLE, WORD>("kernel32.dll", "SetConsoleTextAttribute");
		pSetConsoleTitleA = c_resolve::get_func<BOOL, LPCSTR>("kernel32.dll", "SetConsoleTitleA");
	}
#else
	// Use normal API directly
#endif

	__forceinline int clamp(int value, int min, int max) {
		if (value < min) return min;
		if (value > max) return max;
		return value;
	}

	__forceinline std::string greenblue(const std::string& text) {
		std::stringstream faded;
		int blue = 255;  // Start with the lightest blue.
		std::istringstream lines(text);
		std::string line;

		while (std::getline(lines, line)) {
			faded << "\033[38;2;0;0;" << blue << ("m") << line << ("\033[0m\n"); // god im sorry for whoever is reading this :fire:
			blue -= 15;
			if (blue < 0) {
				blue = 0;
			}
		}

		return faded.str();
	}
	__forceinline void fade(const std::string& text) {
		std::cout << greenblue(text);
		std::cout << "\033[0m" << std::endl;
	}
	HANDLE hConsole;
public:
	__forceinline void init() {

#if _WINDLL  //todo: only alloc when theres not already a console open
		// alloc console work
		//if (!GetConsoleWindow()) { // ?
			AllocConsole();
			FILE* fp;
			if (freopen_s(&fp, "CONOUT$", "w", stdout) == 0) {
				setvbuf(stdout, nullptr, _IONBF, 0); // no buffering :3
			}

			// Redirect STDIN
			if (freopen_s(&fp, "CONIN$", "r", stdin) == 0) {
				setvbuf(stdin, nullptr, _IONBF, 0);
			}

			// Redirect STDERR
			if (freopen_s(&fp, "CONOUT$", "w", stderr) == 0) {
				setvbuf(stderr, nullptr, _IONBF, 0);
			}
		// }
#endif
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // used in legit modules so no need to spoof (probably?)

#if bShouldResolve
		resolve_functions();
#endif
		CONSOLE_SCREEN_BUFFER_INFO scrBufferInfo;
		GetConsoleScreenBufferInfo(hConsole, &scrBufferInfo);

		short winWidth = scrBufferInfo.srWindow.Right - scrBufferInfo.srWindow.Left + 1;
		short winHeight = scrBufferInfo.srWindow.Bottom - scrBufferInfo.srWindow.Top + 1;

		// store current buffer size
		short scrBufferWidth = scrBufferInfo.dwSize.X;
		short scrBufferHeight = scrBufferInfo.dwSize.Y;

		// set the new screen buffer size to match the current width and visible height
		COORD newSize;
		newSize.X = scrBufferWidth;
		newSize.Y = winHeight;

		int Status = SetConsoleScreenBufferSize(hConsole, newSize);
		// enable ansi
		DWORD dwMode = 0;

#if bShouldResolve

		HWND consoleWindow = pGetConsoleWindow();
		pSetWindowLongA(consoleWindow, GWL_STYLE,
			pGetWindowLongA(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX & ~WS_MINIMIZEBOX); // rem the maximize, resize, and minimize options in the console window

		bool success = false;
		if (pGetConsoleScreenBufferInfo) {
			success = pGetConsoleScreenBufferInfo(hConsole, nullptr); // just test
		}

		if (!success) {
			GetConsoleMode(hConsole, &dwMode);
		}
#else
		HWND consoleWindow = GetConsoleWindow();
		SetWindowLongA(consoleWindow, GWL_STYLE,
			GetWindowLongA(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX & ~WS_MINIMIZEBOX);
		GetConsoleMode(hConsole, &dwMode);
#endif
		dwMode |= 0x0004; // enable ANSI escape codes

#if bShouldResolve
		// no resolve for SetConsoleMode
		SetConsoleMode(hConsole, dwMode);
#endif
		SetConsoleMode(hConsole, dwMode); // :/ didnt work cause aids


#if !_WINDLL
		set_highest_priority(); // bad for internals but this is very useful externally 
		// i went from like 40ish fps in an external to 2000+ with this
#endif
		set_transparency(220);

	}

	__forceinline void set_title(std::string title) {
#if bShouldResolve
		if (pSetConsoleTitleA) {
			pSetConsoleTitleA(title.c_str());
		}
		else {
			SetConsoleTitleA(title.c_str()); // fallback to original func due to some processes not fully resolving :/
		}
#else
		SetConsoleTitleA(title.c_str());
#endif
	}

	__forceinline void set_transparency(int opacity) {
		HWND consoleWindow = GetConsoleWindow();
		SetLayeredWindowAttributes(consoleWindow, 0, opacity, LWA_ALPHA);
	}
	__forceinline void clear() {

		std::cout << "\033[2J\033[H" << std::flush; // ascii clear screen
		fade(logo);
	}

	__forceinline void print(const std::string& txt, int err = 0) {
		CONSOLE_SCREEN_BUFFER_INFO csbi;

#if bShouldResolve
		if (pGetConsoleScreenBufferInfo) {
			pGetConsoleScreenBufferInfo(hConsole, &csbi);
		}
		else {
			GetConsoleScreenBufferInfo(hConsole, &csbi); // fallback to original func 
		}
#else
		GetConsoleScreenBufferInfo(hConsole, &csbi);
#endif

		WORD defaultAttributes = csbi.wAttributes;
		int color = defaultAttributes;
		std::string symbol;

		switch (err) {
		case 0: // success 
			color = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
			symbol = "[+] ";
			break;
		case 1: // error / warning
			color = FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY;
			symbol = "[!] ";
			break;
		case 2: // debug
			color = FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
			symbol = "[?] ";
		}

#if bShouldResolve
		if (pSetConsoleTextAttribute) {
			pSetConsoleTextAttribute(hConsole, color);
		}
		else {
			SetConsoleTextAttribute(hConsole, color); // fallback to original func 
		}
#else
		SetConsoleTextAttribute(hConsole, color);
#endif

		std::cout << symbol;

#if bShouldResolve
		if (pSetConsoleTextAttribute) {
			pSetConsoleTextAttribute(hConsole, defaultAttributes);
		}
		else {
			SetConsoleTextAttribute(hConsole, defaultAttributes); // fallback to original func 
		}
#else
		SetConsoleTextAttribute(hConsole, defaultAttributes);
#endif

		std::cout << txt << std::endl;
	}

	__forceinline bool set_highest_priority() {
		BOOL result = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);
		if (result == 0) {
			return false;
		}

		return true;
	}
};
