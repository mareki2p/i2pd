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

// Polish localization file

namespace i2p
{
namespace i18n
{
namespace polish // language namespace
{
	// language name in lowercase
	static std::string language = "polish";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return (n == 1 ? 0 : n % 10 >= 2 && n % 10 <= 4 && (n % 100 < 10 || n % 100 >= 20) ? 1 : 2);
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f KiB"},
		StringViewPair{"%.2f MiB", "%.2f MiB"},
		StringViewPair{"%.2f GiB", "%.2f GiB"},
		StringViewPair{"building", "Kompilowanie"},
		StringViewPair{"failed", "nieudane"},
		StringViewPair{"expiring", "wygasający"},
		StringViewPair{"established", "ustanowiony"},
		StringViewPair{"unknown", "nieznany"},
		StringViewPair{"exploratory", "eksploracyjny"},
		StringViewPair{"Purple I2P Webconsole", "Konsola webowa Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "<b>i2pd</b> konsola webowa"},
		StringViewPair{"Main page", "Strona główna"},
		StringViewPair{"Router commands", "Komendy routera"},
		StringViewPair{"Local Destinations", "Lokalne miejsca docelowe"},
		StringViewPair{"LeaseSets", "ZestawyNajmu"},
		StringViewPair{"Tunnels", "Tunele"},
		StringViewPair{"Transit Tunnels", "Tunele Tranzytu"},
		StringViewPair{"Transports", "Transportery"},
		StringViewPair{"I2P tunnels", "Tunele I2P"},
		StringViewPair{"SAM sessions", "Sesje SAM"},
		StringViewPair{"ERROR", "BŁĄD"},
		StringViewPair{"OK", "Ok"},
		StringViewPair{"Testing", "Testowanie"},
		StringViewPair{"Firewalled", "Za zaporą sieciową"},
		StringViewPair{"Unknown", "Nieznany"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Mesh", "Sieć"},
		StringViewPair{"Clock skew", "Przesunięcie czasu"},
		StringViewPair{"Offline", "Offline"},
		StringViewPair{"Symmetric NAT", "Symetryczny NAT"},
		StringViewPair{"Full cone NAT", "Pełny stożek NAT"},
		StringViewPair{"No Descriptors", "Brak deskryptorów"},
		StringViewPair{"Uptime", "Czas pracy"},
		StringViewPair{"Network status", "Stan sieci"},
		StringViewPair{"Network status v6", "Stan sieci v6"},
		StringViewPair{"Stopping in", "Zatrzymywanie za"},
		StringViewPair{"Family", "Rodzina"},
		StringViewPair{"Tunnel creation success rate", "Wskaźnik sukcesu tworzenia tunelu"},
		StringViewPair{"Total tunnel creation success rate", "Całkowity wskaźnik sukcesu tworzenia tunelu"},
		StringViewPair{"Received", "Odebrano"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Wysłane"},
		StringViewPair{"Transit", "Tranzyt"},
		StringViewPair{"Data path", "Ścieżka do danych"},
		StringViewPair{"Hidden content. Press on text to see.", "Ukryta zawartość. Naciśnij tekst, aby zobaczyć."},
		StringViewPair{"Router Ident", "Identyfikator routera"},
		StringViewPair{"Router Family", "Rodzina routera"},
		StringViewPair{"Router Caps", "Możliwości routera"},
		StringViewPair{"Version", "Wersja"},
		StringViewPair{"Our external address", "Nasz zewnętrzny adres"},
		StringViewPair{"supported", "wspierane"},
		StringViewPair{"Routers", "Routery"},
		StringViewPair{"Floodfills", "Floodfille"},
		StringViewPair{"Client Tunnels", "Tunele Klienta"},
		StringViewPair{"Services", "Usługi"},
		StringViewPair{"Enabled", "Aktywny"},
		StringViewPair{"Disabled", "Wyłączony"},
		StringViewPair{"Encrypted B33 address", "Zaszyfrowany adres B33"},
		StringViewPair{"Address registration line", "Linia rejestracji adresu"},
		StringViewPair{"Domain", "Domena"},
		StringViewPair{"Generate", "Generuj"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Uwaga:</b> wynik string może być używany tylko do rejestracji domen 2LD (przykład.i2p). Do rejestracji subdomen należy użyć narzędzi i2pd."},
		StringViewPair{"Address", "Adres"},
		StringViewPair{"Type", "Typ"},
		StringViewPair{"EncType", "TypEnkrypcji"},
		StringViewPair{"Expire LeaseSet", "Wygaśnij LeaseSet"},
		StringViewPair{"Inbound tunnels", "Tunele przychodzące"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Tunele wychodzące"},
		StringViewPair{"Tags", "Tagi"},
		StringViewPair{"Incoming", "Przychodzące"},
		StringViewPair{"Outgoing", "Wychodzące"},
		StringViewPair{"Destination", "Miejsce docelowe"},
		StringViewPair{"Amount", "Ilość"},
		StringViewPair{"Incoming Tags", "Przychodzące tagi"},
		StringViewPair{"Tags sessions", "Sesje tagów"},
		StringViewPair{"Status", "Status"},
		StringViewPair{"Local Destination", "Lokalne miejsce docelowe"},
		StringViewPair{"Streams", "Strumienie"},
		StringViewPair{"Close stream", "Zamknij strumień"},
		StringViewPair{"Such destination is not found", "Nie znaleziono takiego miejsca docelowego"},
		StringViewPair{"I2CP session not found", "Sesja I2CP nie została znaleziona"},
		StringViewPair{"I2CP is not enabled", "I2CP nie jest włączone"},
		StringViewPair{"Invalid", "Niepoprawny"},
		StringViewPair{"Store type", "Rodzaj przechowywania"},
		StringViewPair{"Expires", "Wygasa za"},
		StringViewPair{"Non Expired Leases", "Leasingi niewygasłe"},
		StringViewPair{"Gateway", "Brama"},
		StringViewPair{"TunnelID", "IDTunelu"},
		StringViewPair{"EndDate", "DataZakończenia"},
		StringViewPair{"floodfill mode is disabled", "tryb floodfill jest wyłączony"},
		StringViewPair{"Queue size", "Wielkość kolejki"},
		StringViewPair{"Run peer test", "Wykonaj test peer"},
		StringViewPair{"Reload tunnels configuration", "Załaduj ponownie konfigurację tuneli"},
		StringViewPair{"Decline transit tunnels", "Odrzuć tunele tranzytowe"},
		StringViewPair{"Accept transit tunnels", "Akceptuj tunele tranzytowe"},
		StringViewPair{"Cancel graceful shutdown", "Anuluj łagodne wyłączenie"},
		StringViewPair{"Start graceful shutdown", "Rozpocznij łagodne wyłączenie"},
		StringViewPair{"Force shutdown", "Wymuś wyłączenie"},
		StringViewPair{"Reload external CSS styles", "Odśwież zewnętrzne style CSS"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Uwaga:</b> każda akcja wykonana tutaj nie jest trwała i nie zmienia Twoich plików konfiguracyjnych."},
		StringViewPair{"Logging level", "Poziom logowania"},
		StringViewPair{"Transit tunnels limit", "Limit tuneli tranzytowych"},
		StringViewPair{"Change", "Zmień"},
		StringViewPair{"Change language", "Zmień język"},
		StringViewPair{"no transit tunnels currently built", "brak obecnie zbudowanych tuneli tranzytowych"},
		StringViewPair{"SAM disabled", "SAM wyłączony"},
		StringViewPair{"no sessions currently running", "brak aktualnie uruchomionych sesji"},
		StringViewPair{"SAM session not found", "Sesja SAM nie została znaleziona"},
		StringViewPair{"SAM Session", "Sesja SAM"},
		StringViewPair{"Server Tunnels", "Tunele Serwera"},
		StringViewPair{"Client Forwards", "Przekierowania Klienta"},
		StringViewPair{"Server Forwards", "Przekierowania Serwera"},
		StringViewPair{"Unknown page", "Nieznana strona"},
		StringViewPair{"Invalid token", "Nieprawidłowy token"},
		StringViewPair{"SUCCESS", "SUKCES"},
		StringViewPair{"Stream closed", "Strumień zamknięty"},
		StringViewPair{"Stream not found or already was closed", "Strumień nie został znaleziony lub został już zamknięty"},
		StringViewPair{"Destination not found", "Nie znaleziono punktu docelowego"},
		StringViewPair{"StreamID can't be null", "StreamID nie może być null"},
		StringViewPair{"Return to destination page", "Wróć do strony miejsca docelowego"},
		StringViewPair{"You will be redirected in %d seconds", "Zostaniesz prekierowany za %d sekund"},
		StringViewPair{"LeaseSet expiration time updated", "Zaktualizowano czas wygaśnięcia LeaseSet"},
		StringViewPair{"LeaseSet is not found or already expired", "LeaseSet nie został znaleziony lub już wygasł"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Liczba tuneli tranzytowych nie może przekraczać %d"},
		StringViewPair{"Back to commands list", "Powrót do listy poleceń"},
		StringViewPair{"Register at reg.i2p", "Zarejestruj się na reg.i2p"},
		StringViewPair{"Description", "Opis"},
		StringViewPair{"A bit information about service on domain", "Trochę informacji o usłudze w domenie"},
		StringViewPair{"Submit", "Zatwierdź"},
		StringViewPair{"Domain can't end with .b32.i2p", "Domena nie może kończyć się na .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "Domena musi kończyć się na .i2p"},
		StringViewPair{"Unknown command", "Nieznana komenda"},
		StringViewPair{"Command accepted", "Polecenie zaakceptowane"},
		StringViewPair{"Proxy error", "Błąd serwera proxy"},
		StringViewPair{"Proxy info", "Informacje o proxy"},
		StringViewPair{"Proxy error: Host not found", "Błąd proxy: Nie znaleziono hosta"},
		StringViewPair{"Remote host not found in router's addressbook", "Nie znaleziono zdalnego hosta w książce adresowej routera"},
		StringViewPair{"You may try to find this host on jump services below", "Możesz znaleźć tego hosta na poniższych usługach skoku"},
		StringViewPair{"Invalid request", "Nieprawidłowe żądanie"},
		StringViewPair{"Proxy unable to parse your request", "Serwer proxy nie może przetworzyć Twojego żądania"},
		StringViewPair{"Addresshelper is not supported", "Adresshelper nie jest obsługiwany"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Host %s <font color=red>jest już w książce adresowej routera</font>. <b>Uważaj: źródło tego adresu URL może być szkodliwe!</b> Kliknij tutaj, aby zaktualizować rekord: <a href=\"%s%s%s&update=true\">Kontynuuj</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Wymuszona aktualizacja Addreshelper odrzucona"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Aby dodać host <b>%s</b> w książce adresowej routera, kliknij tutaj: <a href=\"%s%s%s\">Kontynuuj</a>."},
		StringViewPair{"Addresshelper request", "Prośba Addresshelper"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "Host %s dodany do książki adresowej routera od pomocnika. Kliknij tutaj, aby kontynuować: <a href=\"%s\">Kontynuuj</a>."},
		StringViewPair{"Addresshelper adding", "Dodawanie Addresshelper"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Host %s jest <font color=red>już w książce adresowej routera</font>. Kliknij tutaj, aby zaktualizować rekord: <a href=\"%s%s%s&update=true\">Kontynuuj</a>."},
		StringViewPair{"Addresshelper update", "Aktualizacja Adresshelper"},
		StringViewPair{"Invalid request URI", "Nieprawidłowe URI żądania"},
		StringViewPair{"Can't detect destination host from request", "Nie można wykryć hosta docelowego z żądania"},
		StringViewPair{"Outproxy failure", "Błąd proxy wyjściowego"},
		StringViewPair{"Bad outproxy settings", "Błędne ustawienia proxy wyjściowych"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Host %s nie jest wewnątrz sieci I2P, a proxy wyjściowe nie jest włączone"},
		StringViewPair{"Unknown outproxy URL", "Nieznany adres URL proxy wyjściowego"},
		StringViewPair{"Cannot resolve upstream proxy", "Nie można rozwiązać serwera proxy upstream"},
		StringViewPair{"Hostname is too long", "Nazwa hosta jest zbyt długa"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Nie można połączyć się z proxy SOCKS upstream"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Nie można negocjować z proxy SOCKS"},
		StringViewPair{"CONNECT error", "Błąd POŁĄCZENIE"},
		StringViewPair{"Failed to connect", "Nie udało się połączyć"},
		StringViewPair{"SOCKS proxy error", "Błąd proxy SOCKS"},
		StringViewPair{"Failed to send request to upstream", "Nie udało się wysłać żądania do upstream"},
		StringViewPair{"No reply from SOCKS proxy", "Brak odpowiedzi od serwera proxy SOCKS"},
		StringViewPair{"Cannot connect", "Nie można się połączyć"},
		StringViewPair{"HTTP out proxy not implemented", "Serwer wyjściowy proxy HTTP nie został zaimplementowany"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Nie można połączyć się z proxy HTTP upstream"},
		StringViewPair{"Host is down", "Host jest niedostępny"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Nie można utworzyć połączenia z żądanym hostem, może być wyłączony. Spróbuj ponownie później."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d dzień", "%d dni", "%d dni", "%d dni"}},
		{"%d hours", {"%d godzina", "%d godziny", "%d godzin", "%d godzin"}},
		{"%d minutes", {"%d minuta", "%d minuty", "%d minut", "%d minut"}},
		{"%d seconds", {"%d sekunda", "%d sekundy", "%d sekund", "%d sekund"}},
		{"", {"", "", "", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
