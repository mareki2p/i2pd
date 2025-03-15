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

// Russian localization file

namespace i2p
{
namespace i18n
{
namespace russian // language namespace
{
	// language name in lowercase
	static std::string language = "russian";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return n % 10 == 1 && n % 100 != 11 ? 0 : n % 10 >= 2 && n % 10 <= 4 && (n % 100 < 10 || n % 100 >= 20) ? 1 : 2;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f КиБ"},
		StringViewPair{"%.2f MiB", "%.2f МиБ"},
		StringViewPair{"%.2f GiB", "%.2f ГиБ"},
		StringViewPair{"building", "строится"},
		StringViewPair{"failed", "неудачный"},
		StringViewPair{"expiring", "истекает"},
		StringViewPair{"established", "работает"},
		StringViewPair{"unknown", "неизвестно"},
		StringViewPair{"exploratory", "исследовательский"},
		StringViewPair{"Purple I2P Webconsole", "Веб-консоль Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "Веб-консоль <b>i2pd</b>"},
		StringViewPair{"Main page", "Главная"},
		StringViewPair{"Router commands", "Команды роутера"},
		StringViewPair{"Local Destinations", "Локальные назначения"},
		StringViewPair{"LeaseSets", "Лизсеты"},
		StringViewPair{"Tunnels", "Туннели"},
		StringViewPair{"Transit Tunnels", "Транзитные туннели"},
		StringViewPair{"Transports", "Транспорты"},
		StringViewPair{"I2P tunnels", "I2P туннели"},
		StringViewPair{"SAM sessions", "SAM сессии"},
		StringViewPair{"ERROR", "ОШИБКА"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Тестирование"},
		StringViewPair{"Firewalled", "Заблокировано извне"},
		StringViewPair{"Unknown", "Неизвестно"},
		StringViewPair{"Proxy", "Прокси"},
		StringViewPair{"Mesh", "MESH-сеть"},
		StringViewPair{"Clock skew", "Не точное время"},
		StringViewPair{"Offline", "Оффлайн"},
		StringViewPair{"Symmetric NAT", "Симметричный NAT"},
		StringViewPair{"Full cone NAT", "Full cone NAT"},
		StringViewPair{"No Descriptors", "Нет дескрипторов"},
		StringViewPair{"Uptime", "В сети"},
		StringViewPair{"Network status", "Сетевой статус"},
		StringViewPair{"Network status v6", "Сетевой статус v6"},
		StringViewPair{"Stopping in", "Остановка через"},
		StringViewPair{"Family", "Семейство"},
		StringViewPair{"Tunnel creation success rate", "Успешно построенных туннелей"},
		StringViewPair{"Total tunnel creation success rate", "Общий процент успешно построенных туннелей"},
		StringViewPair{"Received", "Получено"},
		StringViewPair{"%.2f KiB/s", "%.2f КиБ/с"},
		StringViewPair{"Sent", "Отправлено"},
		StringViewPair{"Transit", "Транзит"},
		StringViewPair{"Data path", "Путь к данным"},
		StringViewPair{"Hidden content. Press on text to see.", "Скрытый контент. Нажмите на текст чтобы отобразить."},
		StringViewPair{"Router Ident", "Идентификатор роутера"},
		StringViewPair{"Router Family", "Семейство роутера"},
		StringViewPair{"Router Caps", "Флаги роутера"},
		StringViewPair{"Version", "Версия"},
		StringViewPair{"Our external address", "Наш внешний адрес"},
		StringViewPair{"supported", "поддерживается"},
		StringViewPair{"Routers", "Роутеры"},
		StringViewPair{"Floodfills", "Флудфилы"},
		StringViewPair{"Client Tunnels", "Клиентские туннели"},
		StringViewPair{"Services", "Сервисы"},
		StringViewPair{"Enabled", "Включено"},
		StringViewPair{"Disabled", "Выключено"},
		StringViewPair{"Encrypted B33 address", "Шифрованные B33 адреса"},
		StringViewPair{"Address registration line", "Строка регистрации адреса"},
		StringViewPair{"Domain", "Домен"},
		StringViewPair{"Generate", "Сгенерировать"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Примечание:</b> полученная строка может быть использована только для регистрации доменов второго уровня (example.i2p). Для регистрации поддоменов используйте i2pd-tools."},
		StringViewPair{"Address", "Адрес"},
		StringViewPair{"Type", "Тип"},
		StringViewPair{"EncType", "ТипШифр"},
		StringViewPair{"Expire LeaseSet", "Просрочить Лизсет"},
		StringViewPair{"Inbound tunnels", "Входящие туннели"},
		StringViewPair{"%dms", "%dмс"},
		StringViewPair{"Outbound tunnels", "Исходящие туннели"},
		StringViewPair{"Tags", "Теги"},
		StringViewPair{"Incoming", "Входящие"},
		StringViewPair{"Outgoing", "Исходящие"},
		StringViewPair{"Destination", "Назначение"},
		StringViewPair{"Amount", "Количество"},
		StringViewPair{"Incoming Tags", "Входящие теги"},
		StringViewPair{"Tags sessions", "Сессии тегов"},
		StringViewPair{"Status", "Статус"},
		StringViewPair{"Local Destination", "Локальное назначение"},
		StringViewPair{"Streams", "Стримы"},
		StringViewPair{"Close stream", "Закрыть стрим"},
		StringViewPair{"Such destination is not found", "Такая точка назначения не найдена"},
		StringViewPair{"I2CP session not found", "I2CP сессия не найдена"},
		StringViewPair{"I2CP is not enabled", "I2CP не включен"},
		StringViewPair{"Invalid", "Некорректный"},
		StringViewPair{"Store type", "Тип хранилища"},
		StringViewPair{"Expires", "Истекает"},
		StringViewPair{"Non Expired Leases", "Не истекшие Lease-ы"},
		StringViewPair{"Gateway", "Шлюз"},
		StringViewPair{"TunnelID", "ID туннеля"},
		StringViewPair{"EndDate", "Заканчивается"},
		StringViewPair{"floodfill mode is disabled", "режим флудфила отключен"},
		StringViewPair{"Queue size", "Размер очереди"},
		StringViewPair{"Run peer test", "Запустить тестирование"},
		StringViewPair{"Reload tunnels configuration", "Перезагрузить конфигурацию туннелей"},
		StringViewPair{"Decline transit tunnels", "Отклонять транзитные туннели"},
		StringViewPair{"Accept transit tunnels", "Принимать транзитные туннели"},
		StringViewPair{"Cancel graceful shutdown", "Отменить плавную остановку"},
		StringViewPair{"Start graceful shutdown", "Запустить плавную остановку"},
		StringViewPair{"Force shutdown", "Принудительная остановка"},
		StringViewPair{"Reload external CSS styles", "Перезагрузить внешние CSS стили"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Примечание:</b> любое действие произведенное здесь не является постоянным и не изменяет ваши конфигурационные файлы."},
		StringViewPair{"Logging level", "Уровень логирования"},
		StringViewPair{"Transit tunnels limit", "Лимит транзитных туннелей"},
		StringViewPair{"Change", "Изменить"},
		StringViewPair{"Change language", "Изменение языка"},
		StringViewPair{"no transit tunnels currently built", "нет построенных транзитных туннелей"},
		StringViewPair{"SAM disabled", "SAM выключен"},
		StringViewPair{"no sessions currently running", "нет запущенных сессий"},
		StringViewPair{"SAM session not found", "SAM сессия не найдена"},
		StringViewPair{"SAM Session", "SAM сессия"},
		StringViewPair{"Server Tunnels", "Серверные туннели"},
		StringViewPair{"Client Forwards", "Клиентские перенаправления"},
		StringViewPair{"Server Forwards", "Серверные перенаправления"},
		StringViewPair{"Unknown page", "Неизвестная страница"},
		StringViewPair{"Invalid token", "Неверный токен"},
		StringViewPair{"SUCCESS", "УСПЕШНО"},
		StringViewPair{"Stream closed", "Стрим закрыт"},
		StringViewPair{"Stream not found or already was closed", "Стрим не найден или уже закрыт"},
		StringViewPair{"Destination not found", "Точка назначения не найдена"},
		StringViewPair{"StreamID can't be null", "StreamID не может быть пустым"},
		StringViewPair{"Return to destination page", "Вернуться на страницу точки назначения"},
		StringViewPair{"You will be redirected in %d seconds", "Вы будете переадресованы через %d секунд"},
		StringViewPair{"LeaseSet expiration time updated", "Время действия LeaseSet обновлено"},
		StringViewPair{"LeaseSet is not found or already expired", "Лизсет не найден или время действия уже истекло"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Число транзитных туннелей не должно превышать %d"},
		StringViewPair{"Back to commands list", "Вернуться к списку команд"},
		StringViewPair{"Register at reg.i2p", "Зарегистрировать на reg.i2p"},
		StringViewPair{"Description", "Описание"},
		StringViewPair{"A bit information about service on domain", "Немного информации о сервисе на домене"},
		StringViewPair{"Submit", "Отправить"},
		StringViewPair{"Domain can't end with .b32.i2p", "Домен не может заканчиваться на .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "Домен должен заканчиваться на .i2p"},
		StringViewPair{"Unknown command", "Неизвестная команда"},
		StringViewPair{"Command accepted", "Команда принята"},
		StringViewPair{"Proxy error", "Ошибка прокси"},
		StringViewPair{"Proxy info", "Информация прокси"},
		StringViewPair{"Proxy error: Host not found", "Ошибка прокси: Узел не найден"},
		StringViewPair{"Remote host not found in router's addressbook", "Запрошенный узел не найден в адресной книге роутера"},
		StringViewPair{"You may try to find this host on jump services below", "Вы можете попробовать найти узел через джамп сервисы ниже"},
		StringViewPair{"Invalid request", "Некорректный запрос"},
		StringViewPair{"Proxy unable to parse your request", "Прокси не может разобрать ваш запрос"},
		StringViewPair{"Addresshelper is not supported", "Addresshelper не поддерживается"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Узел %s <font color=red>уже в адресной книге роутера</font>. <b>Будьте осторожны: источник данной ссылки может быть вредоносным!</b> Нажмите здесь, чтобы обновить запись: <a href=\"%s%s%s&update=true\">Продолжить</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Принудительное обновление через Addresshelper отклонено"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Чтобы добавить узел <b>%s</b> в адресную книгу роутера, нажмите здесь: <a href=\"%s%s%s\">Продолжить</a>."},
		StringViewPair{"Addresshelper request", "Запрос добавления Addresshelper"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "Узел %s добавлен в адресную книгу роутера через хелпер. Нажмите здесь, чтобы продолжить: <a href=\"%s\">Продолжить</a>."},
		StringViewPair{"Addresshelper adding", "Добавление Addresshelper"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Узел %s <font color=red>уже в адресной книге роутера</font>. Нажмите здесь, чтобы обновить запись: <a href=\"%s%s%s&update=true\">Продолжить</a>."},
		StringViewPair{"Addresshelper update", "Обновление записи через Addresshelper"},
		StringViewPair{"Invalid request URI", "Некорректный URI запроса"},
		StringViewPair{"Can't detect destination host from request", "Не удалось определить адрес назначения из запроса"},
		StringViewPair{"Outproxy failure", "Ошибка внешнего прокси"},
		StringViewPair{"Bad outproxy settings", "Некорректные настройки внешнего прокси"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Узел %s не в I2P сети, но внешний прокси не включен"},
		StringViewPair{"Unknown outproxy URL", "Неизвестный URL внешнего прокси"},
		StringViewPair{"Cannot resolve upstream proxy", "Не удается определить вышестоящий прокси"},
		StringViewPair{"Hostname is too long", "Имя хоста слишком длинное"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Не удалось подключиться к вышестоящему SOCKS прокси серверу"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Не удается договориться с вышестоящим SOCKS прокси"},
		StringViewPair{"CONNECT error", "Ошибка CONNECT запроса"},
		StringViewPair{"Failed to connect", "Не удалось соединиться"},
		StringViewPair{"SOCKS proxy error", "Ошибка SOCKS прокси"},
		StringViewPair{"Failed to send request to upstream", "Не удалось отправить запрос вышестоящему прокси серверу"},
		StringViewPair{"No reply from SOCKS proxy", "Нет ответа от SOCKS прокси сервера"},
		StringViewPair{"Cannot connect", "Не удалось подключиться"},
		StringViewPair{"HTTP out proxy not implemented", "Поддержка внешнего HTTP прокси сервера не реализована"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Не удалось подключиться к вышестоящему HTTP прокси серверу"},
		StringViewPair{"Host is down", "Узел недоступен"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Не удалось установить соединение к запрошенному узлу, возможно он не в сети. Попробуйте повторить запрос позже."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days",    {"%d день", "%d дня", "%d дней"}},
		{"%d hours",   {"%d час", "%d часа", "%d часов"}},
		{"%d minutes", {"%d минуту", "%d минуты", "%d минут"}},
		{"%d seconds", {"%d секунду", "%d секунды", "%d секунд"}},
		{"", {"", "", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
