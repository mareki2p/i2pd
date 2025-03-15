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

// French localization file

namespace i2p
{
namespace i18n
{
namespace french // language namespace
{
	// language name in lowercase
	static std::string language = "french";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return n != 1 ? 1 : 0;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f Kio"},
		StringViewPair{"%.2f MiB", "%.2f Mio"},
		StringViewPair{"%.2f GiB", "%.2f Gio"},
		StringViewPair{"building", "En construction"},
		StringViewPair{"failed", "échoué"},
		StringViewPair{"expiring", "expiré"},
		StringViewPair{"established", "établi"},
		StringViewPair{"unknown", "inconnu"},
		StringViewPair{"exploratory", "exploratoire"},
		StringViewPair{"Purple I2P Webconsole", "Console web Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "Console web <b>i2pd</b>"},
		StringViewPair{"Main page", "Page principale"},
		StringViewPair{"Router commands", "Commandes du routeur"},
		StringViewPair{"Local Destinations", "Destinations locales"},
		StringViewPair{"LeaseSets", "Jeu de baux"},
		StringViewPair{"Tunnels", "Tunnels"},
		StringViewPair{"Transit Tunnels", "Tunnels transitoires"},
		StringViewPair{"Transports", "Transports"},
		StringViewPair{"I2P tunnels", "Tunnels I2P"},
		StringViewPair{"SAM sessions", "Sessions SAM"},
		StringViewPair{"ERROR", "ERREUR"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Test en cours"},
		StringViewPair{"Firewalled", "Derrière un pare-feu"},
		StringViewPair{"Unknown", "Inconnu"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Mesh", "Maillé"},
		StringViewPair{"Clock skew", "Décalage de l'horloge"},
		StringViewPair{"Offline", "Hors ligne"},
		StringViewPair{"Symmetric NAT", "NAT symétrique"},
		StringViewPair{"Full cone NAT", "NAT à cône complet"},
		StringViewPair{"No Descriptors", "Aucuns Descripteurs"},
		StringViewPair{"Uptime", "Temps de fonctionnement"},
		StringViewPair{"Network status", "État du réseau"},
		StringViewPair{"Network status v6", "État du réseau v6"},
		StringViewPair{"Stopping in", "Arrêt dans"},
		StringViewPair{"Family", "Famille"},
		StringViewPair{"Tunnel creation success rate", "Taux de création de tunnel réussie"},
		StringViewPair{"Total tunnel creation success rate", "Taux total de création de tunnel réussie"},
		StringViewPair{"Received", "Reçu"},
		StringViewPair{"%.2f KiB/s", "%.2f Kio/s"},
		StringViewPair{"Sent", "Envoyé"},
		StringViewPair{"Transit", "Transité"},
		StringViewPair{"Data path", "Emplacement des données"},
		StringViewPair{"Hidden content. Press on text to see.", "Contenu caché. Cliquez sur le texte pour afficher."},
		StringViewPair{"Router Ident", "Identifiant du routeur"},
		StringViewPair{"Router Family", "Famille du routeur"},
		StringViewPair{"Router Caps", "Limiteurs du routeur"},
		StringViewPair{"Version", "Version"},
		StringViewPair{"Our external address", "Notre adresse externe"},
		StringViewPair{"supported", "supporté"},
		StringViewPair{"Routers", "Routeurs"},
		StringViewPair{"Floodfills", "Remplisseurs"},
		StringViewPair{"Client Tunnels", "Tunnels clients"},
		StringViewPair{"Services", "Services"},
		StringViewPair{"Enabled", "Activé"},
		StringViewPair{"Disabled", "Désactivé"},
		StringViewPair{"Encrypted B33 address", "Adresse B33 chiffrée"},
		StringViewPair{"Address registration line", "Ligne d'inscription de l'adresse"},
		StringViewPair{"Domain", "Domaine"},
		StringViewPair{"Generate", "Générer"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Note :</b> La chaîne résultante peut seulement être utilisée pour enregistrer les domaines 2LD (exemple.i2p). Pour enregistrer des sous-domaines, veuillez utiliser i2pd-tools."},
		StringViewPair{"Address", "Adresse"},
		StringViewPair{"Type", "Type"},
		StringViewPair{"EncType", "EncType"},
		StringViewPair{"Expire LeaseSet", "Expirer le jeu de baux"},
		StringViewPair{"Inbound tunnels", "Tunnels entrants"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Tunnels sortants"},
		StringViewPair{"Tags", "Balises"},
		StringViewPair{"Incoming", "Entrant"},
		StringViewPair{"Outgoing", "Sortant"},
		StringViewPair{"Destination", "Destination"},
		StringViewPair{"Amount", "Quantité"},
		StringViewPair{"Incoming Tags", "Balises entrantes"},
		StringViewPair{"Tags sessions", "Sessions des balises"},
		StringViewPair{"Status", "Statut"},
		StringViewPair{"Local Destination", "Destination locale"},
		StringViewPair{"Streams", "Flux"},
		StringViewPair{"Close stream", "Fermer le flux"},
		StringViewPair{"Such destination is not found", "Cette destination est introuvable"},
		StringViewPair{"I2CP session not found", "Session I2CP introuvable"},
		StringViewPair{"I2CP is not enabled", "I2CP est désactivé"},
		StringViewPair{"Invalid", "Invalide"},
		StringViewPair{"Store type", "Type de stockage"},
		StringViewPair{"Expires", "Expire"},
		StringViewPair{"Non Expired Leases", "Baux non expirés"},
		StringViewPair{"Gateway", "Passerelle"},
		StringViewPair{"TunnelID", "ID du tunnel"},
		StringViewPair{"EndDate", "Date de fin"},
		StringViewPair{"floodfill mode is disabled", "le mode de remplissage est désactivé"},
		StringViewPair{"Queue size", "Longueur de la file"},
		StringViewPair{"Run peer test", "Lancer test des pairs"},
		StringViewPair{"Reload tunnels configuration", "Recharger la configuration des tunnels"},
		StringViewPair{"Decline transit tunnels", "Refuser les tunnels transitoires"},
		StringViewPair{"Accept transit tunnels", "Accepter les tunnels transitoires"},
		StringViewPair{"Cancel graceful shutdown", "Annuler l'arrêt gracieux"},
		StringViewPair{"Start graceful shutdown", "Démarrer l'arrêt gracieux"},
		StringViewPair{"Force shutdown", "Forcer l'arrêt"},
		StringViewPair{"Reload external CSS styles", "Rafraîchir les styles CSS externes"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Note :</b> Toute action effectuée ici n'est pas permanente et ne modifie pas vos fichiers de configuration."},
		StringViewPair{"Logging level", "Niveau de journalisation"},
		StringViewPair{"Transit tunnels limit", "Limite sur les tunnels transitoires"},
		StringViewPair{"Change", "Changer"},
		StringViewPair{"Change language", "Changer la langue"},
		StringViewPair{"no transit tunnels currently built", "aucun tunnel transitoire présentement établi"},
		StringViewPair{"SAM disabled", "SAM désactivé"},
		StringViewPair{"no sessions currently running", "aucune session présentement en cours"},
		StringViewPair{"SAM session not found", "session SAM introuvable"},
		StringViewPair{"SAM Session", "Session SAM"},
		StringViewPair{"Server Tunnels", "Tunnels serveurs"},
		StringViewPair{"Client Forwards", "Transmission du client"},
		StringViewPair{"Server Forwards", "Transmission du serveur"},
		StringViewPair{"Unknown page", "Page inconnue"},
		StringViewPair{"Invalid token", "Jeton invalide"},
		StringViewPair{"SUCCESS", "SUCCÈS"},
		StringViewPair{"Stream closed", "Flux fermé"},
		StringViewPair{"Stream not found or already was closed", "Flux introuvable ou déjà fermé"},
		StringViewPair{"Destination not found", "Destination introuvable"},
		StringViewPair{"StreamID can't be null", "StreamID ne peut pas être vide"},
		StringViewPair{"Return to destination page", "Retourner à la page de destination"},
		StringViewPair{"You will be redirected in %d seconds", "Vous serez redirigé dans %d secondes"},
		StringViewPair{"LeaseSet expiration time updated", "Temps d'expiration du jeu de baux mis à jour"},
		StringViewPair{"LeaseSet is not found or already expired", "Le jeu de baux est introuvable ou a déjà expiré"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Le nombre de tunnels de transit ne doit pas excéder %d"},
		StringViewPair{"Back to commands list", "Retour à la liste des commandes"},
		StringViewPair{"Register at reg.i2p", "Inscription à reg.i2p"},
		StringViewPair{"Description", "Description"},
		StringViewPair{"A bit information about service on domain", "Un peu d'information à propos des services disponibles dans le domaine"},
		StringViewPair{"Submit", "Soumettre"},
		StringViewPair{"Domain can't end with .b32.i2p", "Le domaine ne peut pas terminer par .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "Le domaine doit terminer par .i2p"},
		StringViewPair{"Unknown command", "Commande inconnue"},
		StringViewPair{"Command accepted", "Commande acceptée"},
		StringViewPair{"Proxy error", "Erreur de proxy"},
		StringViewPair{"Proxy info", "Information sur le proxy"},
		StringViewPair{"Proxy error: Host not found", "Erreur de proxy : Hôte introuvable"},
		StringViewPair{"Remote host not found in router's addressbook", "Hôte distant introuvable dans le carnet d'adresse du routeur"},
		StringViewPair{"You may try to find this host on jump services below", "Vous pouvez essayer de trouver cet hôte sur des services de redirection ci-dessous"},
		StringViewPair{"Invalid request", "Requête invalide"},
		StringViewPair{"Proxy unable to parse your request", "Proxy incapable de comprendre votre requête"},
		StringViewPair{"Addresshelper is not supported", "Assistant d'adresse non supporté"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "L'hôte %s est <font color=red>déjà dans le carnet d'adresses du routeur</font>. <b>Attention : la source de cette URL peut être nuisible !</b> Cliquez ici pour mettre à jour l'enregistrement : <a href=\"%s%s%s&update=true\">Continuer</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Mise à jour forcée des assistants d'adresses rejetée"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Pour ajouter l'hôte <b>%s</b> au carnet d'adresses du routeur, cliquez ici : <a href=\"%s%s%s\">Continuer</a>."},
		StringViewPair{"Addresshelper request", "Demande à l'assistant d'adresse"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "L'hôte %s a été ajouté au carnet d'adresses du routeur depuis l'assistant. Cliquez ici pour continuer : <a href=\"%s\">Continuer</a>."},
		StringViewPair{"Addresshelper adding", "Ajout de l'assistant d'adresse"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "L'hôte %s est <font color=red>déjà dans le carnet d'adresses du routeur</font>. Cliquez ici pour mettre à jour le dossier : <a href=\"%s%s%s&update=true\">Continuer</a>."},
		StringViewPair{"Addresshelper update", "Mise à jour de l'assistant d'adresse"},
		StringViewPair{"Invalid request URI", "URI de la requête invalide"},
		StringViewPair{"Can't detect destination host from request", "Impossible de détecter l'hôte de destination à partir de la requête"},
		StringViewPair{"Outproxy failure", "Échec de proxy de sortie"},
		StringViewPair{"Bad outproxy settings", "Mauvaise configuration du proxy de sortie"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Hôte %s pas dans le réseau I2P, mais le proxy de sortie n'est pas activé"},
		StringViewPair{"Unknown outproxy URL", "URL du proxy de sortie inconnu"},
		StringViewPair{"Cannot resolve upstream proxy", "Impossible de résoudre l'adresse du proxy en amont"},
		StringViewPair{"Hostname is too long", "Nom d'hôte trop long"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Impossible de se connecter au proxy SOCKS en amont"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Impossible de négocier avec le proxy SOCKS"},
		StringViewPair{"CONNECT error", "Erreur de connexion"},
		StringViewPair{"Failed to connect", "Échec de connexion"},
		StringViewPair{"SOCKS proxy error", "Erreur de proxy SOCKS"},
		StringViewPair{"Failed to send request to upstream", "Erreur lors de l'envoie de la requête en amont"},
		StringViewPair{"No reply from SOCKS proxy", "Pas de réponse du proxy SOCKS"},
		StringViewPair{"Cannot connect", "Impossible de connecter"},
		StringViewPair{"HTTP out proxy not implemented", "Proxy de sortie HTTP non implémenté"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Impossible de se connecter au proxy HTTP en amont"},
		StringViewPair{"Host is down", "Hôte hors service"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Impossible d'établir une connexion avec l'hôte, il est peut-être hors service. Veuillez réessayer plus tard."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d jour", "%d jours"}},
		{"%d hours", {"%d heure", "%d heures"}},
		{"%d minutes", {"%d minute", "%d minutes"}},
		{"%d seconds", {"%d seconde", "%d secondes"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
