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

// Spanish localization file

namespace i2p
{
namespace i18n
{
namespace spanish // language namespace
{
	// language name in lowercase
	static std::string language = "spanish";

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
		StringViewPair{"building", "pendiente"},
		StringViewPair{"failed", "fallido"},
		StringViewPair{"expiring", "expiró"},
		StringViewPair{"established", "establecido"},
		StringViewPair{"unknown", "desconocido"},
		StringViewPair{"exploratory", "exploratorio"},
		StringViewPair{"Purple I2P Webconsole", "Consola web de Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "Consola web de <b>i2pd</b>"},
		StringViewPair{"Main page", "Inicio"},
		StringViewPair{"Router commands", "Comandos de enrutador"},
		StringViewPair{"Local Destinations", "Destinos locales"},
		StringViewPair{"LeaseSets", "LeaseSets"},
		StringViewPair{"Tunnels", "Túneles"},
		StringViewPair{"Transit Tunnels", "Túneles de Tránsito"},
		StringViewPair{"Transports", "Transportes"},
		StringViewPair{"I2P tunnels", "Túneles I2P"},
		StringViewPair{"SAM sessions", "Sesiones SAM"},
		StringViewPair{"ERROR", "ERROR"},
		StringViewPair{"OK", "VALE"},
		StringViewPair{"Testing", "Probando"},
		StringViewPair{"Firewalled", "Con cortafuegos"},
		StringViewPair{"Unknown", "Desconocido"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Mesh", "Malla"},
		StringViewPair{"Clock skew", "Reloj desfasado"},
		StringViewPair{"Offline", "Desconectado"},
		StringViewPair{"Symmetric NAT", "NAT simétrico"},
		StringViewPair{"Uptime", "Tiempo en línea"},
		StringViewPair{"Network status", "Estado de red"},
		StringViewPair{"Network status v6", "Estado de red v6"},
		StringViewPair{"Stopping in", "Parando en"},
		StringViewPair{"Family", "Familia"},
		StringViewPair{"Tunnel creation success rate", "Tasa de éxito de creación de túneles"},
		StringViewPair{"Received", "Recibido"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Enviado"},
		StringViewPair{"Transit", "Tránsito"},
		StringViewPair{"Data path", "Ruta de datos"},
		StringViewPair{"Hidden content. Press on text to see.", "Contenido oculto. Presione para ver."},
		StringViewPair{"Router Ident", "Ident del Enrutador"},
		StringViewPair{"Router Family", "Familia de enrutador"},
		StringViewPair{"Router Caps", "Atributos del Enrutador"},
		StringViewPair{"Version", "Versión"},
		StringViewPair{"Our external address", "Nuestra dirección externa"},
		StringViewPair{"supported", "soportado"},
		StringViewPair{"Routers", "Enrutadores"},
		StringViewPair{"Floodfills", "Inundaciones"},
		StringViewPair{"Client Tunnels", "Túneles de cliente"},
		StringViewPair{"Services", "Servicios"},
		StringViewPair{"Enabled", "Activado"},
		StringViewPair{"Disabled", "Desactivado"},
		StringViewPair{"Encrypted B33 address", "Dirección encriptada B33"},
		StringViewPair{"Address registration line", "Línea para registrar direcciones"},
		StringViewPair{"Domain", "Dominio"},
		StringViewPair{"Generate", "Generar"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Nota:</b> la cadena resultante solo se puede usar para registrar dominios 2LD (ejemplo.i2p). Para registrar subdominios, por favor utilice i2pd-tools."},
		StringViewPair{"Address", "Dirección"},
		StringViewPair{"Type", "Tipo"},
		StringViewPair{"EncType", "TipoEncrip"},
		StringViewPair{"Inbound tunnels", "Túneles entrantes"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Túneles salientes"},
		StringViewPair{"Tags", "Etiquetas"},
		StringViewPair{"Incoming", "Entrante"},
		StringViewPair{"Outgoing", "Saliente"},
		StringViewPair{"Destination", "Destino"},
		StringViewPair{"Amount", "Cantidad"},
		StringViewPair{"Incoming Tags", "Etiquetas entrantes"},
		StringViewPair{"Tags sessions", "Sesiones de etiquetas"},
		StringViewPair{"Status", "Estado"},
		StringViewPair{"Local Destination", "Destino Local"},
		StringViewPair{"Streams", "Flujos"},
		StringViewPair{"Close stream", "Cerrar flujo"},
		StringViewPair{"I2CP session not found", "Sesión I2CP no encontrada"},
		StringViewPair{"I2CP is not enabled", "I2CP no está activado"},
		StringViewPair{"Invalid", "Inválido"},
		StringViewPair{"Store type", "Tipo de almacenamiento"},
		StringViewPair{"Expires", "Caduca"},
		StringViewPair{"Non Expired Leases", "Sesiones No Expiradas"},
		StringViewPair{"Gateway", "Puerta de enlace"},
		StringViewPair{"TunnelID", "TunnelID"},
		StringViewPair{"EndDate", "FechaVenc"},
		StringViewPair{"Queue size", "Tamaño de cola"},
		StringViewPair{"Run peer test", "Ejecutar prueba de par"},
		StringViewPair{"Decline transit tunnels", "Rechazar túneles de tránsito"},
		StringViewPair{"Accept transit tunnels", "Aceptar túneles de tránsito"},
		StringViewPair{"Cancel graceful shutdown", "Cancelar apagado con gracia"},
		StringViewPair{"Start graceful shutdown", "Iniciar apagado con gracia"},
		StringViewPair{"Force shutdown", "Forzar apagado"},
		StringViewPair{"Reload external CSS styles", "Recargar estilos CSS externos"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Nota:</b> cualquier acción hecha aquí no es persistente y no cambia tus archivos de configuración."},
		StringViewPair{"Logging level", "Nivel de registro de errores"},
		StringViewPair{"Transit tunnels limit", "Límite de túneles de tránsito"},
		StringViewPair{"Change", "Cambiar"},
		StringViewPair{"Change language", "Cambiar idioma"},
		StringViewPair{"no transit tunnels currently built", "no hay túneles de tránsito actualmente construidos"},
		StringViewPair{"SAM disabled", "SAM desactivado"},
		StringViewPair{"no sessions currently running", "no hay sesiones ejecutándose ahora"},
		StringViewPair{"SAM session not found", "Sesión SAM no encontrada"},
		StringViewPair{"SAM Session", "Sesión SAM"},
		StringViewPair{"Server Tunnels", "Túneles de Servidor"},
		StringViewPair{"Client Forwards", "Redirecciones de Cliente"},
		StringViewPair{"Server Forwards", "Redirecciones de Servidor"},
		StringViewPair{"Unknown page", "Página desconocida"},
		StringViewPair{"Invalid token", "Token inválido"},
		StringViewPair{"SUCCESS", "ÉXITO"},
		StringViewPair{"Stream closed", "Transmisión cerrada"},
		StringViewPair{"Stream not found or already was closed", "No se encontró la transmisión o ya se cerró"},
		StringViewPair{"Destination not found", "Destino no encontrado"},
		StringViewPair{"StreamID can't be null", "StreamID no puede ser nulo"},
		StringViewPair{"Return to destination page", "Volver a la página de destino"},
		StringViewPair{"Back to commands list", "Volver a lista de comandos"},
		StringViewPair{"Register at reg.i2p", "Registrar en reg.i2p"},
		StringViewPair{"Description", "Descripción"},
		StringViewPair{"A bit information about service on domain", "Un poco de información sobre el servicio en el dominio"},
		StringViewPair{"Submit", "Enviar"},
		StringViewPair{"Domain can't end with .b32.i2p", "El dominio no puede terminar con .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "El dominio debe terminar con .i2p"},
		StringViewPair{"Such destination is not found", "No se encontró el destino"},
		StringViewPair{"Unknown command", "Comando desconocido"},
		StringViewPair{"Command accepted", "Comando aceptado"},
		StringViewPair{"Proxy error", "Error de proxy"},
		StringViewPair{"Proxy info", "Información del proxy"},
		StringViewPair{"Proxy error: Host not found", "Error de proxy: Host no encontrado"},
		StringViewPair{"Remote host not found in router's addressbook", "Servidor remoto no encontrado en la libreta de direcciones del enrutador"},
		StringViewPair{"You may try to find this host on jump services below", "Puede intentar encontrar este dominio en los siguientes servicios de salto"},
		StringViewPair{"Invalid request", "Solicitud inválida"},
		StringViewPair{"Proxy unable to parse your request", "Proxy no puede procesar su solicitud"},
		StringViewPair{"Invalid request URI", "URI de solicitud inválida"},
		StringViewPair{"Can't detect destination host from request", "No se puede detectar el host de destino de la solicitud"},
		StringViewPair{"Outproxy failure", "Fallo en el proxy saliente"},
		StringViewPair{"Bad outproxy settings", "Configuración de outproxy incorrecta"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Dominio %s no está dentro de la red I2P, pero el proxy de salida no está activado"},
		StringViewPair{"Unknown outproxy URL", "URL de proxy outproxy desconocido"},
		StringViewPair{"Cannot resolve upstream proxy", "No se puede resolver el proxy de upstream"},
		StringViewPair{"Hostname is too long", "Nombre de dominio muy largo"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "No se puede conectar al proxy SOCKS principal"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "No se puede negociar con el proxy SOCKS"},
		StringViewPair{"CONNECT error", "Error de CONNECT"},
		StringViewPair{"Failed to connect", "Error al conectar"},
		StringViewPair{"SOCKS proxy error", "Error de proxy SOCKS"},
		StringViewPair{"Failed to send request to upstream", "No se pudo enviar petición al principal"},
		StringViewPair{"No reply from SOCKS proxy", "Sin respuesta del proxy SOCKS"},
		StringViewPair{"Cannot connect", "No se puede conectar"},
		StringViewPair{"HTTP out proxy not implemented", "Proxy externo HTTP no implementado"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "No se puede conectar al proxy HTTP principal"},
		StringViewPair{"Host is down", "Servidor caído"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "No se puede crear la conexión al servidor solicitado, puede estar caído. Intente de nuevo más tarde."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d día", "%d días"}},
		{"%d hours", {"%d hora", "%d horas"}},
		{"%d minutes", {"%d minuto", "%d minutos"}},
		{"%d seconds", {"%d segundo", "%d segundos"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
