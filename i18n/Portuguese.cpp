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

// Portuguese localization file

namespace i2p
{
namespace i18n
{
namespace portuguese // language namespace
{
	// language name in lowercase
	static std::string language = "portuguese";

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
		StringViewPair{"building", "construindo"},
		StringViewPair{"failed", "falhou"},
		StringViewPair{"expiring", "expirando"},
		StringViewPair{"established", "estabelecido"},
		StringViewPair{"unknown", "desconhecido"},
		StringViewPair{"exploratory", "exploratório"},
		StringViewPair{"Purple I2P Webconsole", "Webconsole Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "webconsole <b>i2pd</b>"},
		StringViewPair{"Main page", "Página Principal"},
		StringViewPair{"Router commands", "Comandos do Roteador"},
		StringViewPair{"Local Destinations", "Destinos Locais"},
		StringViewPair{"LeaseSets", "LeaseSets"},
		StringViewPair{"Tunnels", "Túneis"},
		StringViewPair{"Transit Tunnels", "Túneis de Trânsito"},
		StringViewPair{"Transports", "Transportes"},
		StringViewPair{"I2P tunnels", "Túneis I2P"},
		StringViewPair{"SAM sessions", "Sessões do SAM"},
		StringViewPair{"ERROR", "ERRO"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Testando"},
		StringViewPair{"Firewalled", "Sob Firewall"},
		StringViewPair{"Unknown", "Desconhecido"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Mesh", "Malha"},
		StringViewPair{"Clock skew", "Desvio de Relógio"},
		StringViewPair{"Offline", "Desligado"},
		StringViewPair{"Symmetric NAT", "NAT Simétrico"},
		StringViewPair{"Full cone NAT", "Full cone NAT"},
		StringViewPair{"No Descriptors", "Sem Descritores"},
		StringViewPair{"Uptime", "Tempo Ativo"},
		StringViewPair{"Network status", "Estado da rede"},
		StringViewPair{"Network status v6", "Estado da rede v6"},
		StringViewPair{"Stopping in", "Parando em"},
		StringViewPair{"Family", "Família"},
		StringViewPair{"Tunnel creation success rate", "Taxa de sucesso na criação de túneis"},
		StringViewPair{"Total tunnel creation success rate", "Taxa total de sucesso na criação de túneis"},
		StringViewPair{"Received", "Recebido"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Enviado"},
		StringViewPair{"Transit", "Trânsito"},
		StringViewPair{"Data path", "Diretório de dados"},
		StringViewPair{"Hidden content. Press on text to see.", "Conteúdo oculto. Clique no texto para revelar."},
		StringViewPair{"Router Ident", "Identidade do Roteador"},
		StringViewPair{"Router Family", "Família do Roteador"},
		StringViewPair{"Router Caps", "Limites do Roteador"},
		StringViewPair{"Version", "Versão"},
		StringViewPair{"Our external address", "Nosso endereço externo"},
		StringViewPair{"supported", "suportado"},
		StringViewPair{"Routers", "Roteadores"},
		StringViewPair{"Floodfills", "Modo Inundação"},
		StringViewPair{"Client Tunnels", "Túneis de Clientes"},
		StringViewPair{"Services", "Serviços"},
		StringViewPair{"Enabled", "Ativado"},
		StringViewPair{"Disabled", "Desativado"},
		StringViewPair{"Encrypted B33 address", "Endereço B33 criptografado"},
		StringViewPair{"Address registration line", "Linha de cadastro de endereço"},
		StringViewPair{"Domain", "Domínio"},
		StringViewPair{"Generate", "Gerar"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b> Nota: </b>A string resultante só pode ser usada para registrar domínios 2LD (exemplo.i2p). Para registrar subdomínios por favor utilize o i2pd-tools."},
		StringViewPair{"Address", "Endereço"},
		StringViewPair{"Type", "Tipo"},
		StringViewPair{"EncType", "Tipo de Criptografia"},
		StringViewPair{"Expire LeaseSet", "Expirar LeaseSet"},
		StringViewPair{"Inbound tunnels", "Túneis de Entrada"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Túneis de Saída"},
		StringViewPair{"Tags", "Etiquetas"},
		StringViewPair{"Incoming", "Entradas"},
		StringViewPair{"Outgoing", "Saídas"},
		StringViewPair{"Destination", "Destinos"},
		StringViewPair{"Amount", "Quantidade"},
		StringViewPair{"Incoming Tags", "Etiquetas de Entrada"},
		StringViewPair{"Tags sessions", "Sessões de Etiquetas"},
		StringViewPair{"Status", "Estado"},
		StringViewPair{"Local Destination", "Destino Local"},
		StringViewPair{"Streams", "Fluxos"},
		StringViewPair{"Close stream", "Fechar fluxo"},
		StringViewPair{"Such destination is not found", "Tal destino não foi encontrado"},
		StringViewPair{"I2CP session not found", "Sessão do I2CP não encontrada"},
		StringViewPair{"I2CP is not enabled", "I2CP não está ativado"},
		StringViewPair{"Invalid", "Inválido"},
		StringViewPair{"Store type", "Tipo de armazenamento"},
		StringViewPair{"Expires", "Expira em"},
		StringViewPair{"Non Expired Leases", "Sessões não expiradas"},
		StringViewPair{"Gateway", "Gateway"},
		StringViewPair{"TunnelID", "TunnelID"},
		StringViewPair{"EndDate", "Data final"},
		StringViewPair{"floodfill mode is disabled", "Mode de inundação está desativado"},
		StringViewPair{"Queue size", "Tamanho da fila"},
		StringViewPair{"Run peer test", "Executar teste de peers"},
		StringViewPair{"Reload tunnels configuration", "Recarregar a configuração dos túneis"},
		StringViewPair{"Decline transit tunnels", "Negar túneis de trânsito"},
		StringViewPair{"Accept transit tunnels", "Aceitar túneis de trânsito"},
		StringViewPair{"Cancel graceful shutdown", "Cancelar desligamento gracioso"},
		StringViewPair{"Start graceful shutdown", "Iniciar desligamento gracioso"},
		StringViewPair{"Force shutdown", "Forçar desligamento"},
		StringViewPair{"Reload external CSS styles", "Recarregar estilos CSS externos"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b> Nota: </b> Qualquer ação feita aqui não será permanente e não altera os seus arquivos de configuração."},
		StringViewPair{"Logging level", "Nível de registro"},
		StringViewPair{"Transit tunnels limit", "Limite de túneis de trânsito"},
		StringViewPair{"Change", "Mudar"},
		StringViewPair{"Change language", "Trocar idioma"},
		StringViewPair{"no transit tunnels currently built", "Nenhum túnel de trânsito construido no momento"},
		StringViewPair{"SAM disabled", "SAM desativado"},
		StringViewPair{"no sessions currently running", "Nenhuma sessão funcionando no momento"},
		StringViewPair{"SAM session not found", "Nenhuma sessão do SAM encontrada"},
		StringViewPair{"SAM Session", "Sessão do SAM"},
		StringViewPair{"Server Tunnels", "Túneis de Servidor"},
		StringViewPair{"Client Forwards", "Túneis de Cliente"},
		StringViewPair{"Server Forwards", "Encaminhamentos de Servidor"},
		StringViewPair{"Unknown page", "Página desconhecida"},
		StringViewPair{"Invalid token", "Token Inválido"},
		StringViewPair{"SUCCESS", "SUCESSO"},
		StringViewPair{"Stream closed", "Fluxo fechado"},
		StringViewPair{"Stream not found or already was closed", "Fluxo não encontrado ou já fechado"},
		StringViewPair{"Destination not found", "Destino não encontrado"},
		StringViewPair{"StreamID can't be null", "StreamID não pode ser nulo"},
		StringViewPair{"Return to destination page", "Retornar para à página de destino"},
		StringViewPair{"You will be redirected in %d seconds", "Você será redirecionado em %d segundos"},
		StringViewPair{"LeaseSet expiration time updated", "Tempo de validade do LeaseSet atualizado"},
		StringViewPair{"LeaseSet is not found or already expired", "LeaseSet não foi encontrado ou já expirou"},
		StringViewPair{"Transit tunnels count must not exceed %d", "A contagem de túneis de trânsito não deve exceder %d"},
		StringViewPair{"Back to commands list", "Voltar para a lista de comandos"},
		StringViewPair{"Register at reg.i2p", "Registrar em reg.i2p"},
		StringViewPair{"Description", "Descrição"},
		StringViewPair{"A bit information about service on domain", "Algumas informações sobre o serviço no domínio"},
		StringViewPair{"Submit", "Enviar"},
		StringViewPair{"Domain can't end with .b32.i2p", "O domínio não pode terminar com .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "O domínio não pode terminar com .i2p"},
		StringViewPair{"Unknown command", "Comando desconhecido"},
		StringViewPair{"Command accepted", "Comando aceito"},
		StringViewPair{"Proxy error", "Erro no proxy"},
		StringViewPair{"Proxy info", "Informações do proxy"},
		StringViewPair{"Proxy error: Host not found", "Erro no proxy: Host não encontrado"},
		StringViewPair{"Remote host not found in router's addressbook", "O host remoto não foi encontrado no livro de endereços do roteador"},
		StringViewPair{"You may try to find this host on jump services below", "Você pode tentar encontrar este host nos serviços de jump abaixo"},
		StringViewPair{"Invalid request", "Requisição inválida"},
		StringViewPair{"Proxy unable to parse your request", "O proxy foi incapaz de processar a sua requisição"},
		StringViewPair{"Addresshelper is not supported", "O Auxiliar de Endereços não é suportado"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "O host %s já <font color=red>está no catálogo de endereços do roteador</font>. <b>Cuidado: a fonte desta URL pode ser perigosa!</b> Clique aqui para atualizar o registro: <a href=\"%s%s%s&update=true\">Continuar</a>."},
		StringViewPair{"Addresshelper forced update rejected", "A atualização forçada do Auxiliar de Endereços foi rejeitada"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Para adicionar o host <b> %s </b> ao catálogo de endereços do roteador, clique aqui: <a href='%s%s%s'>Continuar </a>."},
		StringViewPair{"Addresshelper request", "Requisição ao Auxiliar de Endereços"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "O host %s foi adicionado ao catálogo de endereços do roteador por um auxiliar. Clique aqui para prosseguir: <a href='%s'> Continuar </a>."},
		StringViewPair{"Addresshelper adding", "Auxiliar de Endereço adicionando"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "O host %s já <font color=red>está no catálogo de endereços do roteador </font>. Clique aqui para atualizar o registro: <a href=\"%s%s%s&update=true\">Continuar</a>."},
		StringViewPair{"Addresshelper update", "Atualização do Auxiliar de Endereços"},
		StringViewPair{"Invalid request URI", "A URI de requisição é inválida"},
		StringViewPair{"Can't detect destination host from request", "Incapaz de detectar o host de destino da requisição"},
		StringViewPair{"Outproxy failure", "Falha no outproxy"},
		StringViewPair{"Bad outproxy settings", "Má configurações do outproxy"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "O host %s não está dentro da rede I2P, mas o outproxy não está ativado"},
		StringViewPair{"Unknown outproxy URL", "URL de outproxy desconhecida"},
		StringViewPair{"Cannot resolve upstream proxy", "Não é possível resolver o proxy de entrada"},
		StringViewPair{"Hostname is too long", "O hostname é muito longo"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Não é possível se conectar ao proxy SOCKS de entrada"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Não é possível negociar com o proxy SOCKS"},
		StringViewPair{"CONNECT error", "Erro de CONEXÃO"},
		StringViewPair{"Failed to connect", "Falha ao conectar"},
		StringViewPair{"SOCKS proxy error", "Erro no proxy SOCKS"},
		StringViewPair{"Failed to send request to upstream", "Falha ao enviar requisição para o fluxo de entrada"},
		StringViewPair{"No reply from SOCKS proxy", "Sem resposta do proxy SOCKS"},
		StringViewPair{"Cannot connect", "Impossível conectar"},
		StringViewPair{"HTTP out proxy not implemented", "proxy de saída HTTP não implementado"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Não é possível conectar ao proxy HTTP de entrada"},
		StringViewPair{"Host is down", "Host está desligado"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Não é possível se conectar ao host requisitado, talvez ele esteja for do ar. Por favor, tente novamente mais tarde."},
		StringViewPair{"", ""}
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d Dia", "%d Dias"}},
		{"%d hours", {"%d hora", "%d horas"}},
		{"%d minutes", {"%d minuto", "%d minutos"}},
		{"%d seconds", {"%d Segundo", "%d segundos"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
