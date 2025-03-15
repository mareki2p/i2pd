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

// German localization file

namespace i2p
{
namespace i18n
{
namespace german // language namespace
{
	// language name in lowercase
	static std::string language = "german";

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
		StringViewPair{"building", "In Bau"},
		StringViewPair{"failed", "fehlgeschlagen"},
		StringViewPair{"expiring", "läuft ab"},
		StringViewPair{"established", "hergestellt"},
		StringViewPair{"unknown", "Unbekannt"},
		StringViewPair{"exploratory", "erforschend"},
		StringViewPair{"Purple I2P Webconsole", "Purple I2P-Webkonsole"},
		StringViewPair{"<b>i2pd</b> webconsole", "<b>i2pd</b>-Webkonsole"},
		StringViewPair{"Main page", "Startseite"},
		StringViewPair{"Router commands", "Routerbefehle"},
		StringViewPair{"Local Destinations", "Lokale Ziele"},
		StringViewPair{"LeaseSets", "LeaseSets"},
		StringViewPair{"Tunnels", "Tunnel"},
		StringViewPair{"Transit Tunnels", "Transittunnel"},
		StringViewPair{"Transports", "Transporte"},
		StringViewPair{"I2P tunnels", "I2P Tunnel"},
		StringViewPair{"SAM sessions", "SAM Sitzungen"},
		StringViewPair{"ERROR", "FEHLER"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Testen"},
		StringViewPair{"Firewalled", "Hinter einer Firewall"},
		StringViewPair{"Unknown", "Unbekannt"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Mesh", "Mesh"},
		StringViewPair{"Clock skew", "Zeitabweichung"},
		StringViewPair{"Offline", "Offline"},
		StringViewPair{"Symmetric NAT", "Symmetrisches NAT"},
		StringViewPair{"No Descriptors", "Keine Beschreibungen"},
		StringViewPair{"Uptime", "Laufzeit"},
		StringViewPair{"Network status", "Netzwerkstatus"},
		StringViewPair{"Network status v6", "Netzwerkstatus v6"},
		StringViewPair{"Stopping in", "Stoppt in"},
		StringViewPair{"Family", "Familie"},
		StringViewPair{"Tunnel creation success rate", "Erfolgsrate der Tunnelerstellung"},
		StringViewPair{"Received", "Eingegangen"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Gesendet"},
		StringViewPair{"Transit", "Transit"},
		StringViewPair{"Data path", "Datenpfad"},
		StringViewPair{"Hidden content. Press on text to see.", "Versteckter Inhalt. Klicke hier, um ihn zu sehen."},
		StringViewPair{"Router Ident", "Routeridentität"},
		StringViewPair{"Router Family", "Routerfamilie"},
		StringViewPair{"Router Caps", "Routerattribute"},
		StringViewPair{"Version", "Version"},
		StringViewPair{"Our external address", "Unsere externe Adresse"},
		StringViewPair{"supported", "unterstützt"},
		StringViewPair{"Routers", "Router"},
		StringViewPair{"Floodfills", "Floodfills"},
		StringViewPair{"Client Tunnels", "Clienttunnel"},
		StringViewPair{"Services", "Services"},
		StringViewPair{"Enabled", "Aktiviert"},
		StringViewPair{"Disabled", "Deaktiviert"},
		StringViewPair{"Encrypted B33 address", "Verschlüsselte B33-Adresse"},
		StringViewPair{"Address registration line", "Adressregistrierungszeile"},
		StringViewPair{"Domain", "Domain"},
		StringViewPair{"Generate", "Generieren"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Hinweis:</b> Der resultierende String kann nur für die Registrierung einer 2LD-Domain (beispiel.i2p) benutzt werden. Für die Registrierung von Subdomains kann i2pd-tools verwendet werden."},
		StringViewPair{"Address", "Adresse"},
		StringViewPair{"Type", "Typ"},
		StringViewPair{"EncType", "Verschlüsselungstyp"},
		StringViewPair{"Inbound tunnels", "Eingehende Tunnel"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Ausgehende Tunnel"},
		StringViewPair{"Tags", "Tags"},
		StringViewPair{"Incoming", "Eingehend"},
		StringViewPair{"Outgoing", "Ausgehend"},
		StringViewPair{"Destination", "Ziel"},
		StringViewPair{"Amount", "Anzahl"},
		StringViewPair{"Incoming Tags", "Eingehende Tags"},
		StringViewPair{"Tags sessions", "Tags-Sitzungen"},
		StringViewPair{"Status", "Status"},
		StringViewPair{"Local Destination", "Lokales Ziel"},
		StringViewPair{"Streams", "Streams"},
		StringViewPair{"Close stream", "Stream schließen"},
		StringViewPair{"I2CP session not found", "I2CP-Sitzung nicht gefunden"},
		StringViewPair{"I2CP is not enabled", "I2CP ist nicht aktiviert"},
		StringViewPair{"Invalid", "Ungültig"},
		StringViewPair{"Store type", "Speichertyp"},
		StringViewPair{"Expires", "Ablaufdatum"},
		StringViewPair{"Non Expired Leases", "Nicht abgelaufene Leases"},
		StringViewPair{"Gateway", "Gateway"},
		StringViewPair{"TunnelID", "TunnelID"},
		StringViewPair{"EndDate", "Enddatum"},
		StringViewPair{"floodfill mode is disabled", "Floodfill Modus ist deaktiviert"},
		StringViewPair{"Queue size", "Größe der Warteschlange"},
		StringViewPair{"Run peer test", "Peer-Test durchführen"},
		StringViewPair{"Reload tunnels configuration", "Tunnel Konfiguration neu laden"},
		StringViewPair{"Decline transit tunnels", "Transittunnel ablehnen"},
		StringViewPair{"Accept transit tunnels", "Transittunnel akzeptieren"},
		StringViewPair{"Cancel graceful shutdown", "Beende das kontrollierte Herunterfahren"},
		StringViewPair{"Start graceful shutdown", "Starte das kontrollierte Herunterfahren"},
		StringViewPair{"Force shutdown", "Herunterfahren erzwingen"},
		StringViewPair{"Reload external CSS styles", "Lade externe CSS-Stile neu"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Hinweis:</b> Alle hier durchgeführten Aktionen sind nicht dauerhaft und ändern die Konfigurationsdateien nicht."},
		StringViewPair{"Logging level", "Protokollierungslevel"},
		StringViewPair{"Transit tunnels limit", "Limit für Transittunnel"},
		StringViewPair{"Change", "Ändern"},
		StringViewPair{"Change language", "Sprache ändern"},
		StringViewPair{"no transit tunnels currently built", "derzeit keine Transittunnel aufgebaut"},
		StringViewPair{"SAM disabled", "SAM deaktiviert"},
		StringViewPair{"no sessions currently running", "Derzeit keine laufenden Sitzungen"},
		StringViewPair{"SAM session not found", "SAM-Sitzung nicht gefunden"},
		StringViewPair{"SAM Session", "SAM-Sitzung"},
		StringViewPair{"Server Tunnels", "Servertunnel"},
		StringViewPair{"Client Forwards", "Client-Weiterleitungen"},
		StringViewPair{"Server Forwards", "Server-Weiterleitungen"},
		StringViewPair{"Unknown page", "Unbekannte Seite"},
		StringViewPair{"Invalid token", "Ungültiger Token"},
		StringViewPair{"SUCCESS", "ERFOLGREICH"},
		StringViewPair{"Stream closed", "Stream geschlossen"},
		StringViewPair{"Stream not found or already was closed", "Stream nicht gefunden oder bereits geschlossen"},
		StringViewPair{"Destination not found", "Ziel nicht gefunden"},
		StringViewPair{"StreamID can't be null", "StreamID kann nicht null sein"},
		StringViewPair{"Return to destination page", "Zurück zur Ziel-Seite"},
		StringViewPair{"You will be redirected in %d seconds", "Du wirst umgeleitet in %d Sekunden"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Die Anzahl der Transittunnel darf nicht über %d gehen"},
		StringViewPair{"Back to commands list", "Zurück zur Befehlsliste"},
		StringViewPair{"Register at reg.i2p", "Auf reg.i2p registrieren"},
		StringViewPair{"Description", "Beschreibung"},
		StringViewPair{"A bit information about service on domain", "Ein paar Informationen über den Service auf der Domain"},
		StringViewPair{"Submit", "Absenden"},
		StringViewPair{"Domain can't end with .b32.i2p", "Domain kann nicht auf .b32.i2p enden"},
		StringViewPair{"Domain must end with .i2p", "Domain muss auf .i2p enden"},
		StringViewPair{"Such destination is not found", "Ein solches Ziel konnte nicht gefunden werden"},
		StringViewPair{"Unknown command", "Unbekannter Befehl"},
		StringViewPair{"Command accepted", "Befehl akzeptiert"},
		StringViewPair{"Proxy error", "Proxy-Fehler"},
		StringViewPair{"Proxy info", "Proxy-Info"},
		StringViewPair{"Proxy error: Host not found", "Proxy-Fehler: Host nicht gefunden"},
		StringViewPair{"Remote host not found in router's addressbook", "Remote-Host nicht im Router-Adressbuch gefunden"},
		StringViewPair{"You may try to find this host on jump services below", "Vielleicht kannst du diesen Host auf einem der nachfolgenden Jump-Services finden"},
		StringViewPair{"Invalid request", "Ungültige Anfrage"},
		StringViewPair{"Proxy unable to parse your request", "Proxy konnte die Anfrage nicht verarbeiten"},
		StringViewPair{"Addresshelper is not supported", "Adresshelfer wird nicht unterstützt"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Host %s ist <font color=red>bereits im Adressbuch des Routers</font>. <b>Vorsicht: Die Quelle dieser URL kann schädlich sein!</b> Klicken Sie hier, um den Datensatz zu aktualisieren: <a href=\"%s%s%s&update=true\">Weiter</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Adresshelfer gezwungene Aktualisierung abgelehnt"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Um den Host <b>%s</b> im Adressbuch des Routers hinzuzufügen, klicken Sie hier: <a href=\"%s%s%s\">Weiter</a>."},
		StringViewPair{"Addresshelper request", "Adresshelfer gefunden"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "Host %s wurde vom Helfer zum Adressbuch des Routers hinzugefügt. Klicken Sie hier, um fortzufahren: <a href=\"%s\">Weiter</a>."},
		StringViewPair{"Addresshelper adding", "Adresshelfer hinzufügen"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Host %s ist <font color=red>bereits im Adressbuch des Routers</font>. Klicken Sie hier, um den Eintrag zu aktualisieren: <a href=\"%s%s%s&update=true\">Weiter</a>."},
		StringViewPair{"Addresshelper update", "Adresshelfer aktualisieren"},
		StringViewPair{"Invalid request URI", "Ungültige Anfrage-URI"},
		StringViewPair{"Can't detect destination host from request", "Kann den Ziel-Host von der Anfrage nicht erkennen"},
		StringViewPair{"Outproxy failure", "Outproxy-Fehler"},
		StringViewPair{"Bad outproxy settings", "Ungültige Outproxy-Einstellungen"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Host %s außerhalb des I2P-Netzwerks, aber Outproxy ist nicht aktiviert"},
		StringViewPair{"Unknown outproxy URL", "Unbekannte Outproxy-URL"},
		StringViewPair{"Cannot resolve upstream proxy", "Kann den Upstream-Proxy nicht auflösen"},
		StringViewPair{"Hostname is too long", "Hostname zu lang"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Kann keine Verbindung zum Upstream-SOCKS-Proxy herstellen"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Kann nicht mit SOCKS-Proxy verhandeln"},
		StringViewPair{"CONNECT error", "CONNECT-Fehler"},
		StringViewPair{"Failed to connect", "Verbindung konnte nicht hergestellt werden"},
		StringViewPair{"SOCKS proxy error", "SOCKS-Proxy-Fehler"},
		StringViewPair{"Failed to send request to upstream", "Anfrage an den Upstream zu senden ist gescheitert"},
		StringViewPair{"No reply from SOCKS proxy", "Keine Antwort vom SOCKS-Proxy"},
		StringViewPair{"Cannot connect", "Kann nicht verbinden"},
		StringViewPair{"HTTP out proxy not implemented", "HTTP-Outproxy nicht implementiert"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Kann nicht zu Upstream-HTTP-Proxy verbinden"},
		StringViewPair{"Host is down", "Host ist offline"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Konnte keine Verbindung zum angefragten Host aufbauen, vielleicht ist er offline. Versuche es später noch mal."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d Tag", "%d Tage"}},
		{"%d hours", {"%d Stunde", "%d Stunden"}},
		{"%d minutes", {"%d Minute", "%d Minuten"}},
		{"%d seconds", {"%d Sekunde", "%d Sekunden"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
