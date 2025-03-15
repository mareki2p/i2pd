/*
* Copyright (c) 2021-2025, The PurpleI2P Project
*
* This file is part of Purple i2pd project and licensed under BSD3
*
* See full license text in LICENSE file at top of project tree
*/

#ifndef __I18N_H__
#define __I18N_H__

#include <algorithm>
#include <functional>
#include <map>
#include <string>
#include <string_view>
#include <utility>

#include "LocaleStringsSorted.h"

namespace i2p
{
namespace i18n
{
	class Locale
	{
		public:
			Locale (
				const std::string& language,
				const Strings& strings,
				const std::map<std::string, std::vector<std::string>>& plurals,
				std::function<int(int)> formula
			);
			// Get activated language name for webconsole
			std::string GetLanguage() const;
			std::string_view GetString (std::string_view arg) const;
			std::string GetPlural (const std::string& arg, const std::string& arg2, const int& n) const;
		private:
			const std::string m_Language;
			const Strings m_Strings;
			const std::map<std::string, std::vector<std::string>> m_Plurals;
			std::function<int(int)> m_Formula;
	};

	void SetLanguage(const std::string &lang);
	std::string_view translate (std::string_view arg);
	std::string translate (const std::string& arg, const std::string& arg2, const int& n);
} // i18n
} // i2p

/**
 * @brief Get translation of string
 * @param arg String with message
 */
template<typename TValue>
std::string_view tr (TValue&& arg)
{
	return i2p::i18n::translate(std::forward<TValue>(arg));
}

/**
 * @brief Get translation of string and format it
 * @param arg String with message
 * @param args Array of arguments for string formatting
*/
template<typename TValue, typename... TArgs>
std::string tr (TValue&& arg, TArgs&&... args)
{
	std::string tr_str = std::string (i2p::i18n::translate(std::forward<TValue>(arg))); // TODO:

	size_t size = std::snprintf(NULL, 0, tr_str.c_str(), std::forward<TArgs>(args)...);
	std::string str(size, 0);
	std::snprintf(&str.front(), size + 1, tr_str.c_str(), std::forward<TArgs>(args)...);

	return str;
}

/**
 * @brief Get translation of string with plural forms
 * @param arg String with message in singular form
 * @param arg2 String with message in plural form
 * @param n Integer, used for selection of form
 */
template<typename TValue, typename TValue2>
std::string ntr (TValue&& arg, TValue2&& arg2, int& n)
{
	return i2p::i18n::translate(std::forward<TValue>(arg), std::forward<TValue2>(arg2), std::forward<int>(n));
}

/**
 * @brief Get translation of string with plural forms and format it
 * @param arg String with message in singular form
 * @param arg2 String with message in plural form
 * @param n Integer, used for selection of form
 * @param args Array of arguments for string formatting
 */
template<typename TValue, typename TValue2, typename... TArgs>
std::string ntr (TValue&& arg, TValue2&& arg2, int& n, TArgs&&... args)
{
	std::string tr_str = i2p::i18n::translate(std::forward<TValue>(arg), std::forward<TValue2>(arg2), std::forward<int>(n));

	size_t size = std::snprintf(NULL, 0, tr_str.c_str(), std::forward<TArgs>(args)...);
	std::string str(size, 0);
	std::snprintf(&str.front(), size + 1, tr_str.c_str(), std::forward<TArgs>(args)...);

	return str;
}

#endif // __I18N_H__
