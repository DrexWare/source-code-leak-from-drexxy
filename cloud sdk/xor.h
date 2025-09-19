﻿#pragma once
#include <type_traits>
#include <string>

// original based off of skCrypt 
// modified by Cloud

namespace encrypt
{
	template<typename T>
	using clean_type = std::remove_const_t<std::remove_reference_t<T>>;

	template <std::size_t Size, char Key1, char Key2, typename T>
	class cloud_encrypt
	{
	public:
		constexpr explicit cloud_encrypt(const T* data)
		{
			crypt(data);
		}

		T* get() noexcept
		{
			return _storage;
		}

		constexpr std::size_t size() const noexcept
		{
			return Size;
		}

		constexpr char key() const noexcept
		{
			return Key1;
		}

		T* encrypt()
		{
			if (!isEncrypted())
				crypt(_storage);

			return _storage;
		}

		T* decrypt()
		{
			if (isEncrypted())
				crypt(_storage);

			return _storage;
		}

		bool isEncrypted() const noexcept
		{
			return _storage[Size - 1] != 0;
		}

		void clear() noexcept
		{
			for (std::size_t i = 0; i < Size; ++i)
			{
				_storage[i] = 0;
			}
		}

		// allow implicit conversion to T*
		operator T* ()
		{
			return decrypt();
		}

	private:
		constexpr void crypt(const T* data)
		{
			for (std::size_t i = 0; i < Size; ++i)
			{
				_storage[i] = data[i] ^ (Key1 + i % (1 + Key2));
			}
		}

		T _storage[Size]{};
	};
}

// macros :3
#define RANDOM_KEY1 (( (__TIME__[4] - '0') * 10 + (__TIME__[5] - '0') ) % 256)
#define RANDOM_KEY2 (( (__TIME__[7] - '0') * 10 + (__TIME__[8] - '0') ) % 256)

#define encrypt(str) encrypt_key(str, RANDOM_KEY1, RANDOM_KEY2)
#define encrypt_key(str, key1, key2) []() { \
    constexpr static auto crypted = encrypt::cloud_encrypt< \
        sizeof(str) / sizeof(str[0]), key1, key2, encrypt::clean_type<decltype(str[0])>>(str); \
    return crypted; \
}()

#define _W(str) ([]() -> std::wstring {           \
    static auto encrypted = encrypt(str);         \
    return std::wstring(encrypted.decrypt());     \
}())

#define _A(str) ([]() -> LPCSTR {                 \
    static auto encrypted = encrypt(str);         \
    return static_cast<LPCSTR>(encrypted.decrypt()); \
}())

#define _(str) ([] { return std::string(encrypt(str).decrypt()); })() 
#define _C(str) ([] { return encrypt(str).decrypt(); })() 
#define OBF(str) ([] { return std::string(encrypt(str).decrypt()); })() //used in prot
// we do it in a lambada to avoid having to call .decrypt a shit load and overal just makes src cleaner
