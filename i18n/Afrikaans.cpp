/*
* Copyright (c) 2021-2025, The PurpleI2P Project
*
* This file is part of Purple i2pd project and licensed under BSD3
*
* See full license text in LICENSE file at top of project tree
*/

#include <map>
#include <vector>
#include <string>
#include <memory>
#include "I18N.h"
#include "LocaleStringsSorted.h"

// Afrikaans localization file

namespace i2p
{
namespace i18n
{
namespace afrikaans // language namespace
{
	// language name in lowercase
	static std::string language = "afrikaans";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return n != 1 ? 1 : 0;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"failed", "Het misluk"},
		StringViewPair{"unknown", "onbekend"},
		StringViewPair{"Tunnels", "Tonnels"},
		StringViewPair{"I2P tunnels", "I2P tonnels"},
		StringViewPair{"SAM sessions", "SAM sessies"},
		StringViewPair{"OK", "LEKKER"},
		StringViewPair{"Testing", "Besig om te toets"},
		StringViewPair{"Firewalled", "Vuurmuur'd"},
		StringViewPair{"Unknown", "Onbekend"},
		StringViewPair{"Error", "Fout"},
		StringViewPair{"Offline", "Aflyn"},
		StringViewPair{"Uptime", "Optyd"},
		StringViewPair{"Network status", "Netwerk status"},
		StringViewPair{"Network status v6", "Netwerk status v6"},
		StringViewPair{"Family", "Familie"},
		StringViewPair{"Received", "Ontvang"},
		StringViewPair{"Sent", "Gestuur"},
		StringViewPair{"Hidden content. Press on text to see.", "Hidden content. Druk om te sien."},
		StringViewPair{"Router Ident", "Router Ident"},
		StringViewPair{"Router Family", "Router Familie"},
		StringViewPair{"Enabled", "Geaktiveer"},
		StringViewPair{"Disabled", "Gedeaktiveer"},
		StringViewPair{"Change", "Verander"},
		StringViewPair{"Change language", "Verander taal"},
		StringViewPair{"Description", "Beskrywing"},
		StringViewPair{"Submit", "Stuur"},
		StringViewPair{"Proxy error", "Proxy-fout"},
		StringViewPair{"Host", "Gasheer"},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d dag", "%d dae"}},
		{"%d hours", {"%d uur", "%d ure"}},
		{"%d minutes", {"%d minuut", "%d minute"}},
		{"%d seconds", {"%d seconde", "%d sekondes"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
