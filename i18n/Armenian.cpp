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

// Armenian localization file

namespace i2p
{
namespace i18n
{
namespace armenian // language namespace
{
	// language name in lowercase
	static std::string language = "armenian";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return n != 1 ? 1 : 0;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f ԿիԲ"},
		StringViewPair{"%.2f MiB", "%.2f ՄիԲ"},
		StringViewPair{"%.2f GiB", "%.2f ԳիԲ"},
		StringViewPair{"building", "կառուցվում է"},
		StringViewPair{"failed", "Անհաջող"},
		StringViewPair{"expiring", "Լրանում է"},
		StringViewPair{"established", "կարգավոյված է"},
		StringViewPair{"unknown", "անհայտ"},
		StringViewPair{"exploratory", "հետազոտոկան"},
		StringViewPair{"Purple I2P Webconsole", "Վեբ-կոնսոլ Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "Վեբ-կոնսոլ <b>i2pd</b>"},
		StringViewPair{"Main page", "Գլխավոր էջ"},
		StringViewPair{"Router commands", "Երթուղիչի հրահանգներ"},
		StringViewPair{"Local Destinations", "Տեղական վերջնակետերը"},
		StringViewPair{"LeaseSets", "ԼիզՍեթեր"},
		StringViewPair{"Tunnels", "Թունելներ"},
		StringViewPair{"Transit Tunnels", "Տարանցիկ թունելներ"},
		StringViewPair{"Transports", "Տրանսպորտ"},
		StringViewPair{"I2P tunnels", "I2P թունելներ"},
		StringViewPair{"SAM sessions", "SAM նստաշրջաններ"},
		StringViewPair{"ERROR", "ՍԽԱԼ"},
		StringViewPair{"OK", "ԼԱՎ"},
		StringViewPair{"Testing", "Փորձարկում"},
		StringViewPair{"Firewalled", "Արգելափակված է դրսից"},
		StringViewPair{"Unknown", "Անհայտ"},
		StringViewPair{"Proxy", "Պրոկսի"},
		StringViewPair{"Mesh", "MESH-ցանց"},
		StringViewPair{"Clock skew", "Ոչ ճշգրիտ ժամանակ"},
		StringViewPair{"Offline", "Օֆլայն"},
		StringViewPair{"Symmetric NAT", "Սիմետրիկ NAT"},
		StringViewPair{"Full cone NAT", "Full cone NAT"},
		StringViewPair{"Uptime", "Առկայություն"},
		StringViewPair{"Network status", "Ցանցի կարգավիճակ"},
		StringViewPair{"Network status v6", "Ցանցի կարգավիճակ v6"},
		StringViewPair{"Stopping in", "Դադարում"},
		StringViewPair{"Family", "Խմբատեսակ"},
		StringViewPair{"Tunnel creation success rate", "Հաջողությամբ կառուցված թունելներ"},
		StringViewPair{"Received", "Ստացվել է"},
		StringViewPair{"%.2f KiB/s", "%.2f ԿիԲ/վ"},
		StringViewPair{"Sent", "Ուղարկվել է"},
		StringViewPair{"Transit", "Տարանցում"},
		StringViewPair{"Data path", "Տվյալների ուղին"},
		StringViewPair{"Hidden content. Press on text to see.", "Թաքցված բովանդակություն: Տեսնելու համար սեղմեկ տեքստին:"},
		StringViewPair{"Router Ident", "Երթուղիչի նույնականացուցիչ"},
		StringViewPair{"Router Family", "Երթուղիչի խումբը"},
		StringViewPair{"Router Caps", "Երթուղիչի հատկություններ"},
		StringViewPair{"Version", "Տարբերակ"},
		StringViewPair{"Our external address", "Մեր արտաքին հասցեն"},
		StringViewPair{"supported", "համատեղելի է"},
		StringViewPair{"Routers", "Երթուղիչներ"},
		StringViewPair{"Floodfills", "Floodfills-ներ"},
		StringViewPair{"Client Tunnels", "Oգտատիրական թունելներ"},
		StringViewPair{"Services", "Ծառայություններ"},
		StringViewPair{"Enabled", "Միացված է"},
		StringViewPair{"Disabled", "Անջատված է"},
		StringViewPair{"Encrypted B33 address", "Գաղտնագրված B33 հասցեներ"},
		StringViewPair{"Address registration line", "Հասցեի գրանցման տող"},
		StringViewPair{"Domain", "Տիրույթ"},
		StringViewPair{"Generate", "Գեներացնել"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b> Նշում. </b> արդյունքի տողը կարող է օգտագործվել միայն 2LD տիրույթներ գրանցելու համար (example.i2p): Ենթատիրույթներ գրանցելու համար խնդրում ենք օգտագործել i2pd-tools գործիքակազմը:"},
		StringViewPair{"Address", "Հասցե"},
		StringViewPair{"Type", "Տեսակը"},
		StringViewPair{"EncType", "Գաղտնագրի տեսակը"},
		StringViewPair{"Inbound tunnels", "Մուտքային թունելներ"},
		StringViewPair{"%dms", "%dմլվ"},
		StringViewPair{"Outbound tunnels", "Ելքային թունելներ"},
		StringViewPair{"Tags", "Թեգեր"},
		StringViewPair{"Incoming", "Մուտքային"},
		StringViewPair{"Outgoing", "ելքային"},
		StringViewPair{"Destination", "Նշանակման վայր"},
		StringViewPair{"Amount", "Քանակ"},
		StringViewPair{"Incoming Tags", "Մուտքային պիտակներ"},
		StringViewPair{"Tags sessions", "Նստաշրջանի պիտակներ"},
		StringViewPair{"Status", "Կարգավիճակ"},
		StringViewPair{"Local Destination", "Տեղական նշանակման կետ"},
		StringViewPair{"Streams", "Հոսքեր"},
		StringViewPair{"Close stream", "Փակել հոսքը"},
		StringViewPair{"I2CP session not found", "I2CP նստաշրջանը գոյություն չունի"},
		StringViewPair{"I2CP is not enabled", "I2CP միացված է"},
		StringViewPair{"Invalid", "Անվավեր"},
		StringViewPair{"Store type", "Պահեստավորման տեսակը"},
		StringViewPair{"Expires", "Սպառվում է"},
		StringViewPair{"Non Expired Leases", "Չսպառված Lease-եր"},
		StringViewPair{"Gateway", "Դարպաս"},
		StringViewPair{"TunnelID", "Թունելի ID"},
		StringViewPair{"EndDate", "Ավարտ"},
		StringViewPair{"Queue size", "Հերթի չափսը"},
		StringViewPair{"Run peer test", "Գործարկել փորձարկումը"},
		StringViewPair{"Decline transit tunnels", "Մերժել տարանցիկ թունելներ"},
		StringViewPair{"Accept transit tunnels", "Ընդունել տարանցիկ թունելներ"},
		StringViewPair{"Cancel graceful shutdown", "Չեղարկել սահուն անջատումը"},
		StringViewPair{"Start graceful shutdown", "Սկսել սահուն անջատումը"},
		StringViewPair{"Force shutdown", "Հարկադիր անջատում"},
		StringViewPair{"Reload external CSS styles", "Վերաբեռնեք CSS ոճաթերթը"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b> Նշում․ </b> այստեղ կատարված ցանկացած գործողություն մշտական ​​չէ և չի փոխում ձեր կազմաձևման ֆայլերը։"},
		StringViewPair{"Logging level", "Գրառման աստիճանը"},
		StringViewPair{"Transit tunnels limit", "Տարանցիկ թունելների սահմանափակում"},
		StringViewPair{"Change", "Փոփոխել"},
		StringViewPair{"Change language", "Փոփոխել լեզուն"},
		StringViewPair{"no transit tunnels currently built", "ընթացիկ կառուցված տարանցիկ թունելներ գոյություն չունեն"},
		StringViewPair{"SAM disabled", "SAM-ն անջատված է"},
		StringViewPair{"no sessions currently running", "ներկայումս գործող նստաշրջաններ գոյություն չունեն"},
		StringViewPair{"SAM session not found", "SAM նստաշրջան գոյություն չունի"},
		StringViewPair{"SAM Session", "SAM նստաշրջան"},
		StringViewPair{"Server Tunnels", "Սերվերային թունելներ"},
		StringViewPair{"Client Forwards", "Օգտատիրական փոխանցումներ"},
		StringViewPair{"Server Forwards", "Սերվերային փոխանցումներ"},
		StringViewPair{"Unknown page", "Անհայտ էջ"},
		StringViewPair{"Invalid token", "Սխալ տոկեն"},
		StringViewPair{"SUCCESS", "ՀԱՋՈՂՎԱԾ"},
		StringViewPair{"Stream closed", "Հոսքն անջատված է"},
		StringViewPair{"Stream not found or already was closed", "Հոսքը գոյություն չունի կամ արդեն ավարտված է"},
		StringViewPair{"Destination not found", "Հասցեի վայրը չի գտնվել"},
		StringViewPair{"StreamID can't be null", "StreamID-ն չի կարող լինել դատարկ"},
		StringViewPair{"Return to destination page", "Վերադառնալ նախորդ էջի հասցե"},
		StringViewPair{"Back to commands list", "Վերադառնալ հրահանգների ցուցակ"},
		StringViewPair{"Description", "Նկարագրություն"},
		StringViewPair{"A bit information about service on domain", "Մի փոքր տեղեկատվություն տիրոիյթում գտնվող ծառայության մասին"},
		StringViewPair{"Submit", "Ուղարկվել"},
		StringViewPair{"Domain can't end with .b32.i2p", "Տիրույթը չպետք է վերջանա .b32.i2p-ով"},
		StringViewPair{"Domain must end with .i2p", "Տիրույթը պետք է վերջանա .i2p-ով"},
		StringViewPair{"Such destination is not found", "Այդիպսի հասցե գոյություն չունի"},
		StringViewPair{"Unknown command", "Անհայտ հրահանգ"},
		StringViewPair{"Command accepted", "Հրարահանգն ընդունված է"},
		StringViewPair{"Proxy error", "Պրոկսի սխալ"},
		StringViewPair{"Proxy info", "Պրոկսի տեղեկություն"},
		StringViewPair{"Proxy error: Host not found", "Պրոկսի սխալ՝ նման հոսթ գոյություն չունի"},
		StringViewPair{"Remote host not found in router's addressbook", "Դեպի հոսթ կատարված հարցումը գոյություն չունի երթուղիչի հասցեագրքում"},
		StringViewPair{"You may try to find this host on jump services below", "Ստորև Դուք կարող եք գտնել այս հոսթը jump ծառայությունների միջոցով"},
		StringViewPair{"Invalid request", "Սխալ հարցում"},
		StringViewPair{"Proxy unable to parse your request", "Պրոկսին չի կարող հասկանալ Ձեր հարցումը"},
		StringViewPair{"Invalid request URI", "Սխալ ձևավորված URI հարցում"},
		StringViewPair{"Can't detect destination host from request", "Չհաջողվեց հայնտաբերեկ վայրի հասցեն նշված հարցմամբ"},
		StringViewPair{"Outproxy failure", "Սխալ արտաքին պրոքսի"},
		StringViewPair{"Bad outproxy settings", "Սխալ արտաքին պրոկսի կարգավորումներ"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Հոսթ %s Հարցումը I2P ցանցից դուրս է, բայց արտաքին պրոքսին միացված չէ"},
		StringViewPair{"Unknown outproxy URL", "Արտաքին պրոքսիի անհայտ URL"},
		StringViewPair{"Cannot resolve upstream proxy", "Չհաջողվեց որոշել վերադաս պրոկսին"},
		StringViewPair{"Hostname is too long", "Հոսթի անունը չափազանց երկար է"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Չհաջողվեց միանալ վերադաս SOCKS պրոկսի սերվերին"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Չհաջողվեց պայմանավորվել վերադաս SOCKS պրոկսիի հետ"},
		StringViewPair{"CONNECT error", "Սխալ CONNECT հարցում"},
		StringViewPair{"Failed to connect", "Միանալ չhաջողվեց"},
		StringViewPair{"SOCKS proxy error", "Սխալ SOCKS պրոկսի"},
		StringViewPair{"Failed to send request to upstream", "Չհաջողվեց հարցումն ուղարկել վերադաս պրոկսիին"},
		StringViewPair{"No reply from SOCKS proxy", "Բացակայում է պատասխանը SOCKS պրոկսի սերվերի կողմից"},
		StringViewPair{"Cannot connect", "Հնարավոր չե միանալ"},
		StringViewPair{"HTTP out proxy not implemented", "Արտաքին HTTP պրոկսին դեռ իրականացված չէ"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Չհաջողվեց միանալ վերադաս HTTP պրոկսի սերվերին"},
		StringViewPair{"Host is down", "Հոսթն անհասանելի է"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Հոսթի հետ կապը հաստատել չհաջողվեց, հնարավոր է այն անջատված է, փորձեք միանալ քիչ ուշ:"},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days",    {"%d օր", "%d օր"}},
		{"%d hours",   {"%d ժամ", "%d ժամ"}},
		{"%d minutes", {"%d րոպե", "%d րոպե"}},
		{"%d seconds", {"%d վարկյան", "%d վարկյան"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
