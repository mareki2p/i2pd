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

// Turkmen localization file

namespace i2p
{
namespace i18n
{
namespace turkmen // language namespace
{
	// language name in lowercase
	static std::string language = "turkmen";

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
		StringViewPair{"building", "bina"},
		StringViewPair{"failed", "şowsuz"},
		StringViewPair{"expiring", "möhleti gutarýar"},
		StringViewPair{"established", "işleýär"},
		StringViewPair{"unknown", "näbelli"},
		StringViewPair{"exploratory", "gözleg"},
		StringViewPair{"Purple I2P Webconsole", "Web konsoly Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "Web konsoly <b>i2pd</b>"},
		StringViewPair{"Main page", "Esasy sahypa"},
		StringViewPair{"Router commands", "Marşrutizator buýruklary"},
		StringViewPair{"Local Destinations", "Ýerli ýerler"},
		StringViewPair{"LeaseSets", "Lizset"},
		StringViewPair{"Tunnels", "Tuneller"},
		StringViewPair{"Transit Tunnels", "Tranzit Tunelleri"},
		StringViewPair{"Transports", "Daşamak"},
		StringViewPair{"I2P tunnels", "I2P tuneller"},
		StringViewPair{"SAM sessions", "SAM Sessiýasy"},
		StringViewPair{"ERROR", "Ýalňyşlyk"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Synag etmek"},
		StringViewPair{"Firewalled", "Daşynda petiklendi"},
		StringViewPair{"Unknown", "Näbelli"},
		StringViewPair{"Proxy", "Proksi"},
		StringViewPair{"Mesh", "MESH-tor"},
		StringViewPair{"Clock skew", "Takyk wagt däl"},
		StringViewPair{"Offline", "Awtonom"},
		StringViewPair{"Symmetric NAT", "Simmetriklik NAT"},
		StringViewPair{"Uptime", "Onlaýn onlaýn sözlügi"},
		StringViewPair{"Network status", "Tor ýagdaýy"},
		StringViewPair{"Network status v6", "Tor ýagdaýy v6"},
		StringViewPair{"Stopping in", "Soň duruň"},
		StringViewPair{"Family", "Maşgala"},
		StringViewPair{"Tunnel creation success rate", "Gurlan teneller üstünlikli gurlan teneller"},
		StringViewPair{"Received", "Alnan"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Ýerleşdirildi"},
		StringViewPair{"Transit", "Tranzit"},
		StringViewPair{"Data path", "Maglumat ýoly"},
		StringViewPair{"Hidden content. Press on text to see.", "Gizlin mazmun. Görkezmek üçin tekste basyň."},
		StringViewPair{"Router Ident", "Marşrutly kesgitleýji"},
		StringViewPair{"Router Family", "Marşrutler maşgalasy"},
		StringViewPair{"Router Caps", "Baýdaklar marşruteri"},
		StringViewPair{"Version", "Wersiýasy"},
		StringViewPair{"Our external address", "Daşarky salgymyz"},
		StringViewPair{"supported", "goldanýar"},
		StringViewPair{"Routers", "Marşrutizatorlar"},
		StringViewPair{"Floodfills", "Fludfillar"},
		StringViewPair{"Client Tunnels", "Müşderi tunelleri"},
		StringViewPair{"Services", "Hyzmatlar"},
		StringViewPair{"Enabled", "Goşuldy"},
		StringViewPair{"Disabled", "Öçürildi"},
		StringViewPair{"Encrypted B33 address", "Şifrlenen B33 salgylar"},
		StringViewPair{"Address registration line", "Hasaba alyş salgysy"},
		StringViewPair{"Domain", "Domen"},
		StringViewPair{"Generate", "Öndürmek"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Bellik:</b> Alnan setir diňe ikinji derejeli domenleri bellige almak üçin ulanylyp bilner (example.i2p). Subýutmalary hasaba almak üçin i2pd ulanyň-tools."},
		StringViewPair{"Address", "Salgysy"},
		StringViewPair{"Type", "Görnüş"},
		StringViewPair{"EncType", "Şifrlemek görnüşi"},
		StringViewPair{"Inbound tunnels", "Gelýän tuneller"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Çykýan tuneller"},
		StringViewPair{"Tags", "Bellikler"},
		StringViewPair{"Incoming", "Gelýän"},
		StringViewPair{"Outgoing", "Çykýan"},
		StringViewPair{"Destination", "Maksat"},
		StringViewPair{"Amount", "Sany"},
		StringViewPair{"Incoming Tags", "Gelýän bellikler"},
		StringViewPair{"Tags sessions", "Sapaklar bellikler"},
		StringViewPair{"Status", "Ýagdaýy"},
		StringViewPair{"Local Destination", "Ýerli maksat"},
		StringViewPair{"Streams", "Strimlary"},
		StringViewPair{"Close stream", "Yap strim"},
		StringViewPair{"I2CP session not found", "I2CP Sessiýa tapylmady"},
		StringViewPair{"I2CP is not enabled", "I2CP goşulmaýar"},
		StringViewPair{"Invalid", "Nädogry"},
		StringViewPair{"Store type", "Ammar görnüşi"},
		StringViewPair{"Expires", "Möhleti gutarýar"},
		StringViewPair{"Non Expired Leases", "Möhleti gutarmady Lizsetlary"},
		StringViewPair{"Gateway", "Derweze"},
		StringViewPair{"TunnelID", "Tuneliň ID"},
		StringViewPair{"EndDate", "Gutarýar"},
		StringViewPair{"Queue size", "Nobatyň ululygy"},
		StringViewPair{"Run peer test", "Synag başlaň"},
		StringViewPair{"Decline transit tunnels", "Tranzit tunellerini ret ediň"},
		StringViewPair{"Accept transit tunnels", "Tranzit tunellerini alyň"},
		StringViewPair{"Cancel graceful shutdown", "Tekiz durmagy ýatyryň"},
		StringViewPair{"Start graceful shutdown", "Tekiz durmak"},
		StringViewPair{"Force shutdown", "Mejbury duralga"},
		StringViewPair{"Reload external CSS styles", "Daşarky CSS stillerini täzeden ýükläň"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Bellik:</b> Bu ýerde öndürilen islendik çäre hemişelik däl we konfigurasiýa faýllaryňyzy üýtgetmeýär."},
		StringViewPair{"Logging level", "Giriş derejesi"},
		StringViewPair{"Transit tunnels limit", "Tranzit tunelleriniň çägi"},
		StringViewPair{"Change", "Üýtgetmek"},
		StringViewPair{"Change language", "Dil üýtgetmek"},
		StringViewPair{"no transit tunnels currently built", "gurlan tranzit tunelleri ýok"},
		StringViewPair{"SAM disabled", "SAM öçürilen"},
		StringViewPair{"no sessions currently running", "başlamagyň sessiýalary ýok"},
		StringViewPair{"SAM session not found", "SAM Sessiýa tapylmady"},
		StringViewPair{"SAM Session", "SAM Sessiýa"},
		StringViewPair{"Server Tunnels", "Serwer tunelleri"},
		StringViewPair{"Client Forwards", "Müşderi gönükdirýär"},
		StringViewPair{"Server Forwards", "Serweriň täzeden düzlüleri"},
		StringViewPair{"Unknown page", "Näbelli sahypa"},
		StringViewPair{"Invalid token", "Nädogry token"},
		StringViewPair{"SUCCESS", "Üstünlikli"},
		StringViewPair{"Stream closed", "Strim ýapyk"},
		StringViewPair{"Stream not found or already was closed", "Strim tapylmady ýa-da eýýäm ýapyldy"},
		StringViewPair{"Destination not found", "Niýetlenen ýeri tapylmady"},
		StringViewPair{"StreamID can't be null", "StreamID boş bolup bilmez"},
		StringViewPair{"Return to destination page", "Barmaly nokadynyň nokadyna gaýdyp geliň"},
		StringViewPair{"Back to commands list", "Topar sanawyna dolan"},
		StringViewPair{"Register at reg.i2p", "Reg.i2P-de hasaba duruň"},
		StringViewPair{"Description", "Beýany"},
		StringViewPair{"A bit information about service on domain", "Domendäki hyzmat barada käbir maglumatlar"},
		StringViewPair{"Submit", "Iber"},
		StringViewPair{"Domain can't end with .b32.i2p", "Domain .b32.i2p bilen gutaryp bilmez"},
		StringViewPair{"Domain must end with .i2p", "Domeni .i2p bilen gutarmaly"},
		StringViewPair{"Such destination is not found", "Bu barmaly ýer tapylmady"},
		StringViewPair{"Unknown command", "Näbelli topar"},
		StringViewPair{"Command accepted", "Topar kabul edilýär"},
		StringViewPair{"Proxy error", "Proksi ýalňyşlygy"},
		StringViewPair{"Proxy info", "Proksi maglumat"},
		StringViewPair{"Proxy error: Host not found", "Proksi ýalňyşlygy: Host tapylmady"},
		StringViewPair{"Remote host not found in router's addressbook", "Uzakdaky öý eýesi marşruteriň salgy kitabynda tapylmady"},
		StringViewPair{"You may try to find this host on jump services below", "Aşakdaky böküş hyzmatlarynda bu öý eýesini tapmaga synanyşyp bilersiňiz"},
		StringViewPair{"Invalid request", "Nädogry haýyş"},
		StringViewPair{"Proxy unable to parse your request", "Proksi haýyşyňyzy derňäp bilmeýär"},
		StringViewPair{"Invalid request URI", "Nädogry haýyş URI"},
		StringViewPair{"Can't detect destination host from request", "Haýyşdan barmaly ýerini tapyp bilemok"},
		StringViewPair{"Outproxy failure", "Daşarky proksi ýalňyşlyk"},
		StringViewPair{"Bad outproxy settings", "Daşarky Daşarky proksi sazlamalary nädogry"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Adres %s I2P torunda däl, ýöne daşarky proksi goşulmaýar"},
		StringViewPair{"Unknown outproxy URL", "Näbelli daşarky proksi URL"},
		StringViewPair{"Cannot resolve upstream proxy", "Has ýokary proksi kesgitläp bilmeýär"},
		StringViewPair{"Hostname is too long", "Hoster eýesi ady gaty uzyn"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Ýokary jorap SOCKS proksi bilen birigip bolmaýar"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Iň ýokary jorap SOCKS proksi bilen ylalaşyp bilmeýärler"},
		StringViewPair{"CONNECT error", "Bagyr haýyşy säwligi"},
		StringViewPair{"Failed to connect", "Birikdirip bilmedi"},
		StringViewPair{"SOCKS proxy error", "SOCKS proksi ýalňyşlygy"},
		StringViewPair{"Failed to send request to upstream", "Öý eýesi proksi üçin haýyş iberip bilmedi"},
		StringViewPair{"No reply from SOCKS proxy", "Jorap SOCKS proksi serwerinden hiç hili jogap ýok"},
		StringViewPair{"Cannot connect", "Birikdirip bilmedi"},
		StringViewPair{"HTTP out proxy not implemented", "Daşarky HTTP proksi serwerini goldamak amala aşyrylmaýar"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Ýokary jorap HTTP proksi bilen birigip bolmaýar"},
		StringViewPair{"Host is down", "Salgy elýeterli däl"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Talap edilýän salgyda birikmäni gurup bilmedim, onlaýn bolup bilmez. Soňra haýyşy soň gaýtalamaga synanyşyň."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days",    {"%d gün", "%d gün"}},
		{"%d hours",   {"%d sagat", "%d sagat"}},
		{"%d minutes", {"%d minut", "%d minut"}},
		{"%d seconds", {"%d sekunt", "%d sekunt"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
