/*
* Copyright (c) 2023-2025, The PurpleI2P Project
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

// Swedish localization file

namespace i2p
{
namespace i18n
{
namespace swedish // language namespace
{
	// language name in lowercase
	static std::string language = "swedish";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return n != 1 ? 1 : 0;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f KiB"},
		StringViewPair{"%.2f MiB", "%.2f MiB"},
		StringViewPair{"%.2f GiB", "%.2f GiB"},
		StringViewPair{"building", "bygger"},
		StringViewPair{"failed", "misslyckad"},
		StringViewPair{"expiring", "utgår"},
		StringViewPair{"established", "upprättad"},
		StringViewPair{"unknown", "okänt"},
		StringViewPair{"exploratory", "utforskande"},
		StringViewPair{"Purple I2P Webconsole", "Purple I2P Webbkonsoll"},
		StringViewPair{"<b>i2pd</b> webconsole", "<b>i2pd</b>-Webbkonsoll"},
		StringViewPair{"Main page", "Huvudsida"},
		StringViewPair{"Router commands", "Routerkommandon"},
		StringViewPair{"Local Destinations", "Lokala Platser"},
		StringViewPair{"LeaseSets", "Hyresuppsättningar"},
		StringViewPair{"Tunnels", "Tunnlar"},
		StringViewPair{"Transit Tunnels", "Förmedlande Tunnlar"},
		StringViewPair{"Transports", "Transporter"},
		StringViewPair{"I2P tunnels", "I2P-tunnlar"},
		StringViewPair{"SAM sessions", "SAM-perioder"},
		StringViewPair{"ERROR", "FEL"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Prövar"},
		StringViewPair{"Firewalled", "Bakom Brandvägg"},
		StringViewPair{"Unknown", "Okänt"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Mesh", "Mesh"},
		StringViewPair{"Clock skew", "Tidsförskjutning"},
		StringViewPair{"Offline", "Nedkopplad"},
		StringViewPair{"Symmetric NAT", "Symmetrisk NAT"},
		StringViewPair{"Full cone NAT", "Full kon NAT"},
		StringViewPair{"No Descriptors", "Inga Beskrivningar"},
		StringViewPair{"Uptime", "Upptid"},
		StringViewPair{"Network status", "Nätverkstillstånd"},
		StringViewPair{"Network status v6", "Nätverkstillstånd v6"},
		StringViewPair{"Stopping in", "Avstängd om"},
		StringViewPair{"Family", "Familj"},
		StringViewPair{"Tunnel creation success rate", "Andel framgångsrika tunnlar"},
		StringViewPair{"Received", "Mottaget"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Skickat"},
		StringViewPair{"Transit", "Förmedlat"},
		StringViewPair{"Data path", "Sökväg"},
		StringViewPair{"Hidden content. Press on text to see.", "Dolt innehåll. Tryck för att visa."},
		StringViewPair{"Router Ident", "Routeridentitet"},
		StringViewPair{"Router Family", "Routerfamilj"},
		StringViewPair{"Router Caps", "Routerbegränsningar"},
		StringViewPair{"Version", "Version"},
		StringViewPair{"Our external address", "Vår externa adress"},
		StringViewPair{"supported", "stöds"},
		StringViewPair{"Routers", "Routrar"},
		StringViewPair{"Floodfills", "Översvämningsfyllare"},
		StringViewPair{"Client Tunnels", "Klienttunnlar"},
		StringViewPair{"Services", "Tjänster"},
		StringViewPair{"Enabled", "Påslaget"},
		StringViewPair{"Disabled", "Avslaget"},
		StringViewPair{"Encrypted B33 address", "Krypterad B33-Adress"},
		StringViewPair{"Address registration line", "Adressregistreringsrad"},
		StringViewPair{"Domain", "Domän"},
		StringViewPair{"Generate", "Skapa"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Uppmärksamma:</b> den resulterande strängen kan enbart användas för att registrera 2LD-domäner (exempel.i2p). För att registrera underdomäner, vänligen använd i2pd-tools."},
		StringViewPair{"Address", "Adress"},
		StringViewPair{"Type", "Typ"},
		StringViewPair{"EncType", "EncTyp"},
		StringViewPair{"Inbound tunnels", "Ingående Tunnlar"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Utgående Tunnlar"},
		StringViewPair{"Tags", "Taggar"},
		StringViewPair{"Incoming", "Ingående"},
		StringViewPair{"Outgoing", "Utgående"},
		StringViewPair{"Destination", "Plats"},
		StringViewPair{"Amount", "Mängd"},
		StringViewPair{"Incoming Tags", "Ingående Taggar"},
		StringViewPair{"Tags sessions", "Tagg-perioder"},
		StringViewPair{"Status", "Tillstånd"},
		StringViewPair{"Local Destination", "Lokal Plats"},
		StringViewPair{"Streams", "Strömmar"},
		StringViewPair{"Close stream", "Stäng strömmen"},
		StringViewPair{"Such destination is not found", "En sådan plats hittas ej"},
		StringViewPair{"I2CP session not found", "I2CP-period hittades inte"},
		StringViewPair{"I2CP is not enabled", "I2CP är inte påslaget"},
		StringViewPair{"Invalid", "Ogiltig"},
		StringViewPair{"Store type", "Lagringstyp"},
		StringViewPair{"Expires", "Utgångsdatum"},
		StringViewPair{"Non Expired Leases", "Ickeutgångna Hyresuppsättningar"},
		StringViewPair{"Gateway", "Gateway"},
		StringViewPair{"TunnelID", "TunnelID"},
		StringViewPair{"EndDate", "EndDate"},
		StringViewPair{"floodfill mode is disabled", "Floodfill läget är inaktiverat"},
		StringViewPair{"Queue size", "Köstorlek"},
		StringViewPair{"Run peer test", "Utför utsiktstest"},
		StringViewPair{"Reload tunnels configuration", "Ladda om tunnelkonfiguration"},
		StringViewPair{"Decline transit tunnels", "Avvisa förmedlande tunnlar"},
		StringViewPair{"Accept transit tunnels", "Tillåt förmedlande tunnlar"},
		StringViewPair{"Cancel graceful shutdown", "Avbryt välvillig avstängning"},
		StringViewPair{"Start graceful shutdown", "Påbörja välvillig avstängning"},
		StringViewPair{"Force shutdown", "Tvingad avstängning"},
		StringViewPair{"Reload external CSS styles", "Ladda om externa CSS-stilar"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Uppmärksamma:</b> inga ändringar här är beständiga eller påverkar dina inställningsfiler."},
		StringViewPair{"Logging level", "Protokollförningsnivå"},
		StringViewPair{"Transit tunnels limit", "Begränsa förmedlande tunnlar"},
		StringViewPair{"Change", "Ändra"},
		StringViewPair{"Change language", "Ändra språk"},
		StringViewPair{"no transit tunnels currently built", "inga förmedlande tunnlar har byggts"},
		StringViewPair{"SAM disabled", "SAM avslaget"},
		StringViewPair{"no sessions currently running", "inga perioder igång"},
		StringViewPair{"SAM session not found", "SAM-perioder hittades ej"},
		StringViewPair{"SAM Session", "SAM-period"},
		StringViewPair{"Server Tunnels", "Värdtunnlar"},
		StringViewPair{"Client Forwards", "Klientförpassningar"},
		StringViewPair{"Server Forwards", "Värdförpassningar"},
		StringViewPair{"Unknown page", "Okänd sida"},
		StringViewPair{"Invalid token", "Ogiltig polett"},
		StringViewPair{"SUCCESS", "FRAMGÅNG"},
		StringViewPair{"Stream closed", "Ström stängd"},
		StringViewPair{"Stream not found or already was closed", "Strömmen hittades inte eller var redan avslutad"},
		StringViewPair{"Destination not found", "Plats hittades ej"},
		StringViewPair{"StreamID can't be null", "Ström-ID kan inte vara null"},
		StringViewPair{"Return to destination page", "Återvänd till platssidan"},
		StringViewPair{"You will be redirected in %d seconds", "Du omdirigeras inom %d sekunder"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Förmedlande tunnlar får inte överstiga %d"},
		StringViewPair{"Back to commands list", "Tillbaka till kommandolistan"},
		StringViewPair{"Register at reg.i2p", "Registrera vid reg.i2p"},
		StringViewPair{"Description", "Beskrivning"},
		StringViewPair{"A bit information about service on domain", "Ett stycke information om domänens tjänst"},
		StringViewPair{"Submit", "Skicka"},
		StringViewPair{"Domain can't end with .b32.i2p", "Domänen får inte sluta med .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "Domänen måste sluta med .i2p"},
		StringViewPair{"Unknown command", "Okänt kommando"},
		StringViewPair{"Command accepted", "Kommando accepterades"},
		StringViewPair{"Proxy error", "Proxyfel"},
		StringViewPair{"Proxy info", "Proxyinfo"},
		StringViewPair{"Proxy error: Host not found", "Proxyfel: Värden hittades ej"},
		StringViewPair{"Remote host not found in router's addressbook", "Främmande värd hittades inte i routerns adressbok"},
		StringViewPair{"You may try to find this host on jump services below", "Du kan försöka att hitta värden genom hopptjänsterna nedan"},
		StringViewPair{"Invalid request", "Ogiltig förfrågan"},
		StringViewPair{"Proxy unable to parse your request", "Proxyt kan inte behandla din förfrågan"},
		StringViewPair{"Addresshelper is not supported", "Adresshjälparen stöds ej"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Värd %s är <font color=red>redan i routerns adressbok</font>. <b>Var försiktig: källan till denna URL kan vara skadlig!</b> Klicka här för att uppdatera registreringen: <a href=\"%s%s%s&update=true\">Fortsätt</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Tvingad uppdatering av adresshjälparen nekad"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "För att lägga till värd <b>%s</b> i routerns adressbok, klicka här: <a href=\"%s%s%s\">Fortsätt</a>."},
		StringViewPair{"Addresshelper request", "Adresshjälpare förfrågan"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "Värd %s tillagd i routerns adressbok från hjälparen. Klicka här för att fortsätta: <a href=\"%s\">Fortsätt</a>."},
		StringViewPair{"Addresshelper adding", "Adresshjälpare tilläggning"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Värd %s är <font color=red>redan i routerns adressbok</font>. Klicka här för att uppdatera registreringen: <a href=\"%s%s%s&update=true\">Fortsätt</a>."},
		StringViewPair{"Addresshelper update", "Adresshjälpare uppdatering"},
		StringViewPair{"Invalid request URI", "Ogiltig förfrågnings-URI"},
		StringViewPair{"Can't detect destination host from request", "Kan inte upptäcka platsvärden från förfrågan"},
		StringViewPair{"Outproxy failure", "Utproxyfel"},
		StringViewPair{"Bad outproxy settings", "Ogiltig utproxyinställning"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Värd %s är inte inom I2P-näverket, men utproxy är inte påslaget"},
		StringViewPair{"Unknown outproxy URL", "okänt Utproxy-URL"},
		StringViewPair{"Cannot resolve upstream proxy", "Hittar inte uppströmsproxyt"},
		StringViewPair{"Hostname is too long", "Värdnamnet är för långt"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Kan inte ansluta till uppström SOCKS-proxy"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Kan inte förhandla med SOCKSproxyt"},
		StringViewPair{"CONNECT error", "CONNECT-fel"},
		StringViewPair{"Failed to connect", "Anslutningen misslyckades"},
		StringViewPair{"SOCKS proxy error", "SOCKSproxyfel"},
		StringViewPair{"Failed to send request to upstream", "Förfrågan uppströms kunde ej skickas"},
		StringViewPair{"No reply from SOCKS proxy", "Fick inget svar från SOCKSproxyt"},
		StringViewPair{"Cannot connect", "Kan inte ansluta"},
		StringViewPair{"HTTP out proxy not implemented", "HTTP-Utproxy ej implementerat"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Kan inte ansluta till uppströms HTTP-proxy"},
		StringViewPair{"Host is down", "Värden är nere"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Kan inte ansluta till värden, den kan vara nere. Vänligen försök senare."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d dag", "%d dagar"}},
		{"%d hours", {"%d timme", "%d timmar"}},
		{"%d minutes", {"%d minut", "%d minuter"}},
		{"%d seconds", {"%d sekund", "%d sekunder"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p

