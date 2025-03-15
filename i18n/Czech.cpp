/*
* Copyright (c) 2022-2025, The PurpleI2P Project
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

// Czech localization file

namespace i2p
{
namespace i18n
{
namespace czech // language namespace
{
	// language name in lowercase
	static std::string language = "czech";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return (n == 1) ? 0 : (n >= 2 && n <= 4) ? 1 : 2;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f KiB"},
		StringViewPair{"%.2f MiB", "%.2f MiB"},
		StringViewPair{"%.2f GiB", "%.2f GiB"},
		StringViewPair{"building", "vytváří se"},
		StringViewPair{"failed", "selhalo"},
		StringViewPair{"expiring", "vyprší platnost"},
		StringViewPair{"established", "vytvořeno"},
		StringViewPair{"unknown", "neznámý"},
		StringViewPair{"exploratory", "průzkumné"},
		StringViewPair{"Purple I2P Webconsole", "Purple I2P webová konzole"},
		StringViewPair{"<b>i2pd</b> webconsole", "<b>i2pd</b> webová konzole"},
		StringViewPair{"Main page", "Hlavní stránka"},
		StringViewPair{"Router commands", "Router příkazy"},
		StringViewPair{"Local Destinations", "Místní cíle"},
		StringViewPair{"LeaseSets", "Sety pronájmu"},
		StringViewPair{"Tunnels", "Tunely"},
		StringViewPair{"Transit Tunnels", "Tranzitní tunely"},
		StringViewPair{"Transports", "Transporty"},
		StringViewPair{"I2P tunnels", "I2P tunely"},
		StringViewPair{"SAM sessions", "SAM relace"},
		StringViewPair{"ERROR", "CHYBA"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Testuji"},
		StringViewPair{"Firewalled", "Za Firewallem"},
		StringViewPair{"Unknown", "Neznámý"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Mesh", "Síť"},
		StringViewPair{"Clock skew", "Časová nesrovnalost"},
		StringViewPair{"Offline", "Offline"},
		StringViewPair{"Symmetric NAT", "Symetrický NAT"},
		StringViewPair{"Full cone NAT", "Full cone NAT"},
		StringViewPair{"No Descriptors", "Žádné popisovače"},
		StringViewPair{"Uptime", "Doba provozu"},
		StringViewPair{"Network status", "Stav sítě"},
		StringViewPair{"Network status v6", "Stav sítě v6"},
		StringViewPair{"Stopping in", "Zastavuji za"},
		StringViewPair{"Family", "Rodina"},
		StringViewPair{"Tunnel creation success rate", "Úspěšnost vytváření tunelů"},
		StringViewPair{"Total tunnel creation success rate", "Celková míra úspěšnosti vytváření tunelů"},
		StringViewPair{"Received", "Přijato"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Odesláno"},
		StringViewPair{"Transit", "Tranzit"},
		StringViewPair{"Data path", "Cesta k datovým souborům"},
		StringViewPair{"Hidden content. Press on text to see.", "Skrytý obsah. Pro zobrazení klikněte sem."},
		StringViewPair{"Router Ident", "Routerová Identita"},
		StringViewPair{"Router Family", "Rodina routerů"},
		StringViewPair{"Router Caps", "Omezení Routerů"},
		StringViewPair{"Version", "Verze"},
		StringViewPair{"Our external address", "Naše externí adresa"},
		StringViewPair{"supported", "podporováno"},
		StringViewPair{"Routers", "Routery"},
		StringViewPair{"Floodfills", "Floodfilly"},
		StringViewPair{"Client Tunnels", "Klientské tunely"},
		StringViewPair{"Services", "Služby"},
		StringViewPair{"Enabled", "Zapnuto"},
		StringViewPair{"Disabled", "Vypnuto"},
		StringViewPair{"Encrypted B33 address", "Šifrovaná adresa B33"},
		StringViewPair{"Address registration line", "Registrační řádek adresy"},
		StringViewPair{"Domain", "Doména"},
		StringViewPair{"Generate", "Vygenerovat"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Poznámka:</b> výsledný řetězec může být použit pouze pro registraci 2LD domén (example.i2p). Pro registraci subdomén použijte prosím i2pd-tools."},
		StringViewPair{"Address", "Adresa"},
		StringViewPair{"Type", "Typ"},
		StringViewPair{"EncType", "EncType"},
		StringViewPair{"Expire LeaseSet", "Zrušit platnost setu pronájmu"},
		StringViewPair{"Inbound tunnels", "Příchozí tunely"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Odchozí tunely"},
		StringViewPair{"Tags", "Štítky"},
		StringViewPair{"Incoming", "Příchozí"},
		StringViewPair{"Outgoing", "Odchozí"},
		StringViewPair{"Destination", "Destinace"},
		StringViewPair{"Amount", "Množství"},
		StringViewPair{"Incoming Tags", "Příchozí štítky"},
		StringViewPair{"Tags sessions", "Relace štítků"},
		StringViewPair{"Status", "Stav"},
		StringViewPair{"Local Destination", "Místní cíl"},
		StringViewPair{"Streams", "Toky"},
		StringViewPair{"Close stream", "Uzavřít tok"},
		StringViewPair{"Such destination is not found", "Takováto destinace nebyla nalezena"},
		StringViewPair{"I2CP session not found", "I2CP relace nenalezena"},
		StringViewPair{"I2CP is not enabled", "I2CP není zapnuto"},
		StringViewPair{"Invalid", "Neplatný"},
		StringViewPair{"Store type", "Druh uložení"},
		StringViewPair{"Expires", "Vyprší"},
		StringViewPair{"Non Expired Leases", "Pronájmy, kterým nevypršela platnost"},
		StringViewPair{"Gateway", "Brána"},
		StringViewPair{"TunnelID", "ID tunelu"},
		StringViewPair{"EndDate", "Datum ukončení"},
		StringViewPair{"floodfill mode is disabled", "režim floodfill je vypnut"},
		StringViewPair{"Queue size", "Velikost fronty"},
		StringViewPair{"Run peer test", "Spustit peer test"},
		StringViewPair{"Reload tunnels configuration", "Znovu načíst nastavení tunelů"},
		StringViewPair{"Decline transit tunnels", "Odmítnout tranzitní tunely"},
		StringViewPair{"Accept transit tunnels", "Přijmout tranzitní tunely"},
		StringViewPair{"Cancel graceful shutdown", "Zrušit hladké vypnutí"},
		StringViewPair{"Start graceful shutdown", "Zahájit hladké vypnutí"},
		StringViewPair{"Force shutdown", "Vynutit vypnutí"},
		StringViewPair{"Reload external CSS styles", "Znovu načíst externí CSS"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Poznámka:</b> žádná vykonaná akce zde není trvalá a nemění konfigurační soubory."},
		StringViewPair{"Logging level", "Úroveň logování"},
		StringViewPair{"Transit tunnels limit", "Limit tranzitních tunelů"},
		StringViewPair{"Change", "Změnit"},
		StringViewPair{"Change language", "Změnit jazyk"},
		StringViewPair{"no transit tunnels currently built", "Žádný tranzitní tunel není momentálně vytvořen"},
		StringViewPair{"SAM disabled", "SAM vypnutý"},
		StringViewPair{"no sessions currently running", "Momentálně nejsou spuštěné žádné relace"},
		StringViewPair{"SAM session not found", "SAM relace nenalezena"},
		StringViewPair{"SAM Session", "SAM Relace"},
		StringViewPair{"Server Tunnels", "Server Tunely"},
		StringViewPair{"Client Forwards", "Přesměrování Klienta"},
		StringViewPair{"Server Forwards", "Přesměrování Serveru"},
		StringViewPair{"Unknown page", "Neznámá stránka"},
		StringViewPair{"Invalid token", "Neplatný token"},
		StringViewPair{"SUCCESS", "ÚSPĚCH"},
		StringViewPair{"Stream closed", "Tok uzavřen"},
		StringViewPair{"Stream not found or already was closed", "Tok nenalezen nebo byl již uzavřen"},
		StringViewPair{"Destination not found", "Destinace nenalezena"},
		StringViewPair{"StreamID can't be null", "StreamID nemůže být null"},
		StringViewPair{"Return to destination page", "Zpět na stránku destinací"},
		StringViewPair{"You will be redirected in %d seconds", "Budete přesměrováni za %d sekund"},
		StringViewPair{"LeaseSet expiration time updated", "Aktualizován čas vypršení platnosti setu pronájmu"},
		StringViewPair{"LeaseSet is not found or already expired", "Set pronájmu není k nalezení nebo již vypršela jeho platnost"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Počet tranzitních tunelů nesmí překročit %d"},
		StringViewPair{"Back to commands list", "Zpět na seznam příkazů"},
		StringViewPair{"Register at reg.i2p", "Zaregistrovat na reg.i2p"},
		StringViewPair{"Description", "Popis"},
		StringViewPair{"A bit information about service on domain", "Trochu informací o službě na doméně"},
		StringViewPair{"Submit", "Odeslat"},
		StringViewPair{"Domain can't end with .b32.i2p", "Doména nesmí končit na .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "Doména musí končit s .i2p"},
		StringViewPair{"Unknown command", "Neznámý příkaz"},
		StringViewPair{"Command accepted", "Příkaz přijat"},
		StringViewPair{"Proxy error", "Chyba proxy serveru"},
		StringViewPair{"Proxy info", "Proxy informace"},
		StringViewPair{"Proxy error: Host not found", "Chyba proxy serveru: Hostitel nenalezen"},
		StringViewPair{"Remote host not found in router's addressbook", "Vzdálený hostitel nebyl nalezen v adresáři routeru"},
		StringViewPair{"You may try to find this host on jump services below", "Můžete se pokusit najít tohoto hostitele na startovacích službách níže"},
		StringViewPair{"Invalid request", "Neplatný požadavek"},
		StringViewPair{"Proxy unable to parse your request", "Proxy server nemohl zpracovat váš požadavek"},
		StringViewPair{"Addresshelper is not supported", "Addresshelper není podporován"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Hostitel %s je <font color=red>již v adresáři routeru</font>. <b>Buďte opatrní: zdroj této URL může být škodlivý!</b> Klikněte zde pro aktualizaci záznamu: <a href=\"%s%s%s&update=true\">Pokračovat</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Addresshelperem vynucená aktualizace zamítnuta"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Pro přidání hostitele <b>%s</b> do adresáře routeru, klikněte zde: <a href=\"%s%s%s\">Pokračovat</a>."},
		StringViewPair{"Addresshelper request", "Požadavek Addresshelperu"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "Hostitel %s přidán do adresáře routeru od pomocníka. Klikněte zde pro pokračování: <a href=\"%s\">Pokračovat</a>."},
		StringViewPair{"Addresshelper adding", "Addresshelper přidávání"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Hostitel %s je <font color=red>již v adresáři routeru</font>. Klikněte zde pro aktualizaci záznamu: <a href=\"%s%s%s&update=true\">Pokračovat</a>."},
		StringViewPair{"Addresshelper update", "Addresshelper aktualizace"},
		StringViewPair{"Invalid request URI", "Neplatný URI požadavek"},
		StringViewPair{"Can't detect destination host from request", "Nelze zjistit cílového hostitele z požadavku"},
		StringViewPair{"Outproxy failure", "Outproxy selhání"},
		StringViewPair{"Bad outproxy settings", "Špatné outproxy nastavení"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Hostitel %s není uvnitř I2P sítě a outproxy není nastavena"},
		StringViewPair{"Unknown outproxy URL", "Neznámá outproxy URL"},
		StringViewPair{"Cannot resolve upstream proxy", "Nelze rozluštit upstream proxy server"},
		StringViewPair{"Hostname is too long", "Název hostitele je příliš dlouhý"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Nelze se připojit k upstream SOCKS proxy serveru"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Nelze vyjednávat se SOCKS proxy serverem"},
		StringViewPair{"CONNECT error", "Chyba PŘIPOJENÍ"},
		StringViewPair{"Failed to connect", "Připojení se nezdařilo"},
		StringViewPair{"SOCKS proxy error", "Chyba SOCKS proxy serveru"},
		StringViewPair{"Failed to send request to upstream", "Odeslání žádosti upstream serveru se nezdařilo"},
		StringViewPair{"No reply from SOCKS proxy", "Žádná odpověď od SOCKS proxy serveru"},
		StringViewPair{"Cannot connect", "Nelze se připojit"},
		StringViewPair{"HTTP out proxy not implemented", "HTTP out proxy není implementován"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Nelze se připojit k upstream HTTP proxy serveru"},
		StringViewPair{"Host is down", "Hostitel je nedostupný"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Připojení k požadovanému hostiteli nelze vytvořit, může být nedostupný. Zkuste to, prosím, znovu později."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d den", "%d dny", "%d dní", "%d dní"}},
		{"%d hours", {"%d hodina", "%d hodiny", "%d hodin", "%d hodin"}},
		{"%d minutes", {"%d minuta", "%d minuty", "%d minut", "%d minut"}},
		{"%d seconds", {"%d vteřina", "%d vteřiny", "%d vteřin", "%d vteřin"}},
		{"", {"", "", "", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
