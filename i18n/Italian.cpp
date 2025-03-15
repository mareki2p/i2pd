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

// Italian localization file

namespace i2p
{
namespace i18n
{
namespace italian // language namespace
{
	// language name in lowercase
	static std::string language = "italian";

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
		StringViewPair{"building", "in costruzione"},
		StringViewPair{"failed", "fallito"},
		StringViewPair{"expiring", "in scadenza"},
		StringViewPair{"established", "stabilita"},
		StringViewPair{"unknown", "sconosciuto"},
		StringViewPair{"exploratory", "esplorativo"},
		StringViewPair{"Purple I2P Webconsole", "Terminale web Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "Terminal web <b>i2pd</b>"},
		StringViewPair{"Main page", "Pagina principale"},
		StringViewPair{"Router commands", "Comandi router"},
		StringViewPair{"Local Destinations", "Destinazioni locali"},
		StringViewPair{"LeaseSets", "LeaseSets"},
		StringViewPair{"Tunnels", "Tunnel"},
		StringViewPair{"Transit Tunnels", "Tunnel di transito"},
		StringViewPair{"Transports", "Trasporti"},
		StringViewPair{"I2P tunnels", "Tunnel I2P"},
		StringViewPair{"SAM sessions", "Sessioni SAM"},
		StringViewPair{"ERROR", "ERRORE"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Testando"},
		StringViewPair{"Firewalled", "Protetto da firewall"},
		StringViewPair{"Unknown", "Sconosciuto"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Mesh", "Mesh"},
		StringViewPair{"Clock skew", "Orologio disallineato"},
		StringViewPair{"Offline", "Disconnesso"},
		StringViewPair{"Symmetric NAT", "NAT simmetrico"},
		StringViewPair{"Full cone NAT", "Cono completo NAT"},
		StringViewPair{"No Descriptors", "Nessun descrittore"},
		StringViewPair{"Uptime", "In funzione da"},
		StringViewPair{"Network status", "Stato della rete"},
		StringViewPair{"Network status v6", "Stato della rete v6"},
		StringViewPair{"Stopping in", "Arresto in"},
		StringViewPair{"Family", "Famiglia"},
		StringViewPair{"Tunnel creation success rate", "Percentuale di tunnel creati con successo"},
		StringViewPair{"Total tunnel creation success rate", "Percentuale di successo totale nella creazione del tunnel"},
		StringViewPair{"Received", "Ricevuti"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Inviati"},
		StringViewPair{"Transit", "Transitati"},
		StringViewPair{"Data path", "Percorso dati"},
		StringViewPair{"Hidden content. Press on text to see.", "Contenuto nascosto. Premi sul testo per vedere."},
		StringViewPair{"Router Ident", "Identificativo del router"},
		StringViewPair{"Router Family", "Famiglia del router"},
		StringViewPair{"Router Caps", "Limiti del router"},
		StringViewPair{"Version", "Versione"},
		StringViewPair{"Our external address", "Il nostro indirizzo esterno"},
		StringViewPair{"supported", "supportato"},
		StringViewPair{"Routers", "Router"},
		StringViewPair{"Floodfills", "Floodfill"},
		StringViewPair{"Client Tunnels", "Tunnel client"},
		StringViewPair{"Services", "Servizi"},
		StringViewPair{"Enabled", "Abilitato"},
		StringViewPair{"Disabled", "Disabilitato"},
		StringViewPair{"Encrypted B33 address", "Indirizzo criptato B33"},
		StringViewPair{"Address registration line", "Linea di registrazione indirizzo"},
		StringViewPair{"Domain", "Dominio"},
		StringViewPair{"Generate", "Genera"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Nota:</b> la stringa risultante può essere utilizzata solo per registrare domini 2LD (example.i2p). Per registrare i sottodomini, si prega di utilizzare i2pd-tools."},
		StringViewPair{"Address", "Indirizzo"},
		StringViewPair{"Type", "Tipologia"},
		StringViewPair{"EncType", "Tipo di crittografia"},
		StringViewPair{"Expire LeaseSet", "Scadenza LeaseSet"},
		StringViewPair{"Inbound tunnels", "Tunnel in entrata"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Tunnel in uscita"},
		StringViewPair{"Tags", "Tag"},
		StringViewPair{"Incoming", "In entrata"},
		StringViewPair{"Outgoing", "In uscita"},
		StringViewPair{"Destination", "Destinazione"},
		StringViewPair{"Amount", "Quantità"},
		StringViewPair{"Incoming Tags", "Tag in entrata"},
		StringViewPair{"Tags sessions", "Sessioni dei tag"},
		StringViewPair{"Status", "Stato"},
		StringViewPair{"Local Destination", "Destinazione locale"},
		StringViewPair{"Streams", "Flussi"},
		StringViewPair{"Close stream", "Interrompi il flusso"},
		StringViewPair{"Such destination is not found", "Questa destinazione non è stata trovata"},
		StringViewPair{"I2CP session not found", "Sessione I2CP non trovata"},
		StringViewPair{"I2CP is not enabled", "I2CP non è abilitato"},
		StringViewPair{"Invalid", "Invalido"},
		StringViewPair{"Store type", "Tipologia di archivio"},
		StringViewPair{"Expires", "Scade"},
		StringViewPair{"Non Expired Leases", "Lease non scaduti"},
		StringViewPair{"Gateway", "Gateway"},
		StringViewPair{"TunnelID", "TunnelID"},
		StringViewPair{"EndDate", "Data di fine"},
		StringViewPair{"floodfill mode is disabled", "la modalità floodfill è disabilitata"},
		StringViewPair{"Queue size", "Dimensione della coda"},
		StringViewPair{"Run peer test", "Esegui il test dei peer"},
		StringViewPair{"Reload tunnels configuration", "Ricarica la configurazione dei tunnel"},
		StringViewPair{"Decline transit tunnels", "Rifiuta tunnel di transito"},
		StringViewPair{"Accept transit tunnels", "Accetta tunnel di transito"},
		StringViewPair{"Cancel graceful shutdown", "Annulla l'interruzione controllata"},
		StringViewPair{"Start graceful shutdown", "Avvia l'interruzione controllata"},
		StringViewPair{"Force shutdown", "Forza l'arresto"},
		StringViewPair{"Reload external CSS styles", "Ricarica gli stili CSS esterni"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Nota:</b> qualsiasi azione effettuata qui non è persistente e non modifica i file di configurazione."},
		StringViewPair{"Logging level", "Livello di log"},
		StringViewPair{"Transit tunnels limit", "Limite di tunnel di transito"},
		StringViewPair{"Change", "Modifica"},
		StringViewPair{"Change language", "Modifica linguaggio"},
		StringViewPair{"no transit tunnels currently built", "Attualmente non ci sono tunnel di transito instaurati"},
		StringViewPair{"SAM disabled", "SAM disabilitato"},
		StringViewPair{"no sessions currently running", "Attualmente non ci sono sessioni attive"},
		StringViewPair{"SAM session not found", "Sessione SAM non trovata"},
		StringViewPair{"SAM Session", "Sessione SAM"},
		StringViewPair{"Server Tunnels", "Tunnel server"},
		StringViewPair{"Client Forwards", "Client di inoltro"},
		StringViewPair{"Server Forwards", "Server di inoltro"},
		StringViewPair{"Unknown page", "Pagina sconosciuta"},
		StringViewPair{"Invalid token", "Token non valido"},
		StringViewPair{"SUCCESS", "SUCCESSO"},
		StringViewPair{"Stream closed", "Flusso terminato"},
		StringViewPair{"Stream not found or already was closed", "Il flusso non è stato trovato oppure è già stato terminato"},
		StringViewPair{"Destination not found", "Destinazione non trovata"},
		StringViewPair{"StreamID can't be null", "Lo StreamID non può essere null"},
		StringViewPair{"Return to destination page", "Ritorna alla pagina di destinazione"},
		StringViewPair{"You will be redirected in %d seconds", "Sarai reindirizzato tra %d secondi"},
		StringViewPair{"LeaseSet expiration time updated", "Tempo di scadenza LeaseSet aggiornato"},
		StringViewPair{"LeaseSet is not found or already expired", "LeaseSet non trovato o già scaduto"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Il conteggio dei tunnel di transito non deve superare %d"},
		StringViewPair{"Back to commands list", "Ritorna alla lista dei comandi"},
		StringViewPair{"Register at reg.i2p", "Registra a reg.i2p"},
		StringViewPair{"Description", "Descrizione"},
		StringViewPair{"A bit information about service on domain", "Alcune informazioni riguardo il servizio sul dominio"},
		StringViewPair{"Submit", "Invia"},
		StringViewPair{"Domain can't end with .b32.i2p", "I domini non possono terminare con .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "I domini devono terminare con .i2p"},
		StringViewPair{"Unknown command", "Comando sconosciuto"},
		StringViewPair{"Command accepted", "Comando accettato"},
		StringViewPair{"Proxy error", "Errore del proxy"},
		StringViewPair{"Proxy info", "Informazioni del proxy"},
		StringViewPair{"Proxy error: Host not found", "Errore del proxy: Host non trovato"},
		StringViewPair{"Remote host not found in router's addressbook", "L'host remoto non è stato trovato nella rubrica del router"},
		StringViewPair{"You may try to find this host on jump services below", "Si può provare a trovare questo host sui servizi di salto qui sotto"},
		StringViewPair{"Invalid request", "Richiesta non valida"},
		StringViewPair{"Proxy unable to parse your request", "Il proxy non è in grado di elaborare la tua richiesta"},
		StringViewPair{"Addresshelper is not supported", "Addresshelper non è supportato"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "L'host %s è <font color=red>già nella rubrica del router</font>. <b>Attenzione: la fonte di questo URL potrebbe essere dannosa!</b> Fai clic qui per aggiornare il record: <a href=\"%s%s%s&update=true\">Continua</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Aggiornamento forzato dell'helper degli indirizzi rifiutato"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Per aggiungere host <b>%s</b> nella rubrica del router, clicca qui: <a href=\"%s%s%s\">Continua</a>."},
		StringViewPair{"Addresshelper request", "Richiesta di indirizzo helper"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "L'host %s viene aggiunto alla rubrica del router dall'helper. Fai clic qui per procedere: <a href=\"%s\">Continua</a>."},
		StringViewPair{"Addresshelper adding", "Aggiunta di Addresshelper"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "L'host %s è <font color=red>già nella rubrica del router</font>. Clicca qui per aggiornare il record: <a href=\"%s%s%s&update=true\">Continua</a>."},
		StringViewPair{"Addresshelper update", "Aggiornamento dell'helper degli indirizzi"},
		StringViewPair{"Invalid request URI", "URI della richiesta non valido"},
		StringViewPair{"Can't detect destination host from request", "Impossibile determinare l'host di destinazione dalla richiesta"},
		StringViewPair{"Outproxy failure", "Fallimento del proxy di uscita"},
		StringViewPair{"Bad outproxy settings", "Impostazioni errate del proxy di uscita"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Host %s non all'interno della rete I2P, ma il proxy di uscita non è abilitato"},
		StringViewPair{"Unknown outproxy URL", "URL del proxy di uscita sconosciuto"},
		StringViewPair{"Cannot resolve upstream proxy", "Impossibile identificare il flusso a monte del proxy"},
		StringViewPair{"Hostname is too long", "Il nome dell'host è troppo lungo"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Impossibile connettersi al flusso a monte del proxy SOCKS"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Impossibile negoziare con il proxy SOCKS"},
		StringViewPair{"CONNECT error", "Errore di connessione"},
		StringViewPair{"Failed to connect", "Connessione fallita"},
		StringViewPair{"SOCKS proxy error", "Errore del proxy SOCKS"},
		StringViewPair{"Failed to send request to upstream", "Invio della richiesta a monte non riuscito"},
		StringViewPair{"No reply from SOCKS proxy", "Nessuna risposta dal proxy SOCKS"},
		StringViewPair{"Cannot connect", "Impossibile connettersi"},
		StringViewPair{"HTTP out proxy not implemented", "Proxy HTTP di uscita non implementato"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Impossibile connettersi al flusso a monte del proxy HTTP"},
		StringViewPair{"Host is down", "L'host è offline"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Impossibile creare la connessione all'host richiesto, probabilmente è offline. Riprova più tardi."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d giorno", "%d giorni"}},
		{"%d hours", {"%d ora", "%d ore"}},
		{"%d minutes", {"%d minuto", "%d minuti"}},
		{"%d seconds", {"%d secondo", "%d secondi"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
