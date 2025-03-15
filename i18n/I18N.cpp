/*
* Copyright (c) 2021-2025, The PurpleI2P Project
*
* This file is part of Purple i2pd project and licensed under BSD3
*
* See full license text in LICENSE file at top of project tree
*/

#include <clocale>
#include "ClientContext.h"
#include "I18N_langs.h"
#include "I18N.h"

namespace i2p
{
namespace i18n
{
	Locale::Locale (
		const std::string& language,
		const Strings& strings,
		const std::map<std::string, std::vector<std::string>>& plurals,
		std::function<int(int)> formula
	): m_Language (language), m_Strings (strings), m_Plurals (plurals), m_Formula (formula) { };

	std::string Locale::GetLanguage() const
	{
		return m_Language;
	}

	std::string_view Locale::GetString (std::string_view arg) const
	{
		auto const begin = m_Strings.m_begin;
		auto const end = m_Strings.m_begin + m_Strings.m_count;
		auto const it = std::lower_bound(begin, end, arg, [](auto const& val, auto const& arg){ return val.m_string_view_pair.first < arg; });
		if(it != end && it->m_string_view_pair.first == arg)
		{
			return it->m_string_view_pair.second;
		}
		else
		{
			return arg;
		}
	}

	std::string Locale::GetPlural (const std::string& arg, const std::string& arg2, const int& n) const
	{
		const auto it = m_Plurals.find(arg2);
		if (it == m_Plurals.end()) // not found, fallback to english
		{
			return n == 1 ? arg : arg2;
		}
		else
		{
			int form = m_Formula(n);
			return it->second[form];
		}
	}


	void SetLanguage(const std::string &lang)
	{
		const auto it = i2p::i18n::languages.find(lang);
		if (it == i2p::i18n::languages.end()) // fallback
		{
			i2p::client::context.SetLanguage (i2p::i18n::english::GetLocale());
			setlocale(LC_NUMERIC, "english");
		}
		else
		{
			i2p::client::context.SetLanguage (it->second.LocaleFunc());
			setlocale(LC_NUMERIC, lang.c_str()); // set decimal point based on language
		}
	}

	std::string_view translate (std::string_view arg)
	{
		return i2p::client::context.GetLanguage ()->GetString (arg);
	}

	std::string translate (const std::string& arg, const std::string& arg2, const int& n)
	{
		return i2p::client::context.GetLanguage ()->GetPlural (arg, arg2, n);
	}
} // i18n
} // i2p
