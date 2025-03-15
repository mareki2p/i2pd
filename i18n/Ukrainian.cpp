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

// Ukrainian localization file

namespace i2p
{
namespace i18n
{
namespace ukrainian // language namespace
{
	// language name in lowercase
	static std::string language = "ukrainian";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return n%10==1 && n%100!=11 ? 0 : n%10>=2 && n%10<=4 && (n%100<10 || n%100>=20) ? 1 : 2;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f КіБ"},
		StringViewPair{"%.2f MiB", "%.2f МіБ"},
		StringViewPair{"%.2f GiB", "%.2f ГіБ"},
		StringViewPair{"building", "будується"},
		StringViewPair{"failed", "невдалий"},
		StringViewPair{"expiring", "завершується"},
		StringViewPair{"established", "працює"},
		StringViewPair{"unknown", "невідомо"},
		StringViewPair{"exploratory", "дослідницький"},
		StringViewPair{"Purple I2P Webconsole", "Веб-консоль Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "Веб-консоль <b>i2pd</b>"},
		StringViewPair{"Main page", "Головна"},
		StringViewPair{"Router commands", "Команди маршрутизатора"},
		StringViewPair{"Local Destinations", "Локальні Призначення"},
		StringViewPair{"LeaseSets", "Лізсети"},
		StringViewPair{"Tunnels", "Тунелі"},
		StringViewPair{"Transit Tunnels", "Транзитні Тунелі"},
		StringViewPair{"Transports", "Транспорти"},
		StringViewPair{"I2P tunnels", "I2P тунелі"},
		StringViewPair{"SAM sessions", "SAM сесії"},
		StringViewPair{"ERROR", "ПОМИЛКА"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Тестування"},
		StringViewPair{"Firewalled", "Заблоковано ззовні"},
		StringViewPair{"Unknown", "Невідомо"},
		StringViewPair{"Proxy", "Проксі"},
		StringViewPair{"Mesh", "MESH-мережа"},
		StringViewPair{"Clock skew", "Неточний час"},
		StringViewPair{"Offline", "Офлайн"},
		StringViewPair{"Symmetric NAT", "Симетричний NAT"},
		StringViewPair{"Full cone NAT", "Повний NAT"},
		StringViewPair{"No Descriptors", "Немає Описів"},
		StringViewPair{"Uptime", "У мережі"},
		StringViewPair{"Network status", "Мережевий статус"},
		StringViewPair{"Network status v6", "Мережевий статус v6"},
		StringViewPair{"Stopping in", "Зупинка через"},
		StringViewPair{"Family", "Сімейство"},
		StringViewPair{"Tunnel creation success rate", "Успішно побудованих тунелів"},
		StringViewPair{"Total tunnel creation success rate", "Загальна кількість створених тунелів"},
		StringViewPair{"Received", "Отримано"},
		StringViewPair{"%.2f KiB/s", "%.2f КіБ/с"},
		StringViewPair{"Sent", "Відправлено"},
		StringViewPair{"Transit", "Транзит"},
		StringViewPair{"Data path", "Шлях до даних"},
		StringViewPair{"Hidden content. Press on text to see.", "Прихований вміст. Щоб відобразити, натисніть на текст."},
		StringViewPair{"Router Ident", "Ідентифікатор маршрутизатора"},
		StringViewPair{"Router Family", "Сімейство маршрутизатора"},
		StringViewPair{"Router Caps", "Прапорці маршрутизатора"},
		StringViewPair{"Version", "Версія"},
		StringViewPair{"Our external address", "Наша зовнішня адреса"},
		StringViewPair{"supported", "підтримується"},
		StringViewPair{"Routers", "Маршрутизатори"},
		StringViewPair{"Floodfills", "Флудфіли"},
		StringViewPair{"Client Tunnels", "Клієнтські Тунелі"},
		StringViewPair{"Services", "Сервіси"},
		StringViewPair{"Enabled", "Увімкнуто"},
		StringViewPair{"Disabled", "Вимкнуто"},
		StringViewPair{"Encrypted B33 address", "Шифровані B33 адреси"},
		StringViewPair{"Address registration line", "Рядок реєстрації адреси"},
		StringViewPair{"Domain", "Домен"},
		StringViewPair{"Generate", "Згенерувати"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Примітка:</b> отриманий рядок може бути використаний тільки для реєстрації доменів другого рівня (example.i2p). Для реєстрації піддоменів використовуйте i2pd-tools."},
		StringViewPair{"Address", "Адреса"},
		StringViewPair{"Type", "Тип"},
		StringViewPair{"EncType", "ТипШифр"},
		StringViewPair{"Expire LeaseSet", "Завершити LeaseSet"},
		StringViewPair{"Inbound tunnels", "Вхідні тунелі"},
		StringViewPair{"%dms", "%dмс"},
		StringViewPair{"Outbound tunnels", "Вихідні тунелі"},
		StringViewPair{"Tags", "Теги"},
		StringViewPair{"Incoming", "Вхідні"},
		StringViewPair{"Outgoing", "Вихідні"},
		StringViewPair{"Destination", "Призначення"},
		StringViewPair{"Amount", "Кількість"},
		StringViewPair{"Incoming Tags", "Вхідні Теги"},
		StringViewPair{"Tags sessions", "Сесії Тегів"},
		StringViewPair{"Status", "Статус"},
		StringViewPair{"Local Destination", "Локальні Призначення"},
		StringViewPair{"Streams", "Потоки"},
		StringViewPair{"Close stream", "Закрити потік"},
		StringViewPair{"Such destination is not found", "Така точка призначення не знайдена"},
		StringViewPair{"I2CP session not found", "I2CP сесія не знайдена"},
		StringViewPair{"I2CP is not enabled", "I2CP не увікнуто"},
		StringViewPair{"Invalid", "Некоректний"},
		StringViewPair{"Store type", "Тип сховища"},
		StringViewPair{"Expires", "Завершується"},
		StringViewPair{"Non Expired Leases", "Не завершені Lease-и"},
		StringViewPair{"Gateway", "Шлюз"},
		StringViewPair{"TunnelID", "ID тунеля"},
		StringViewPair{"EndDate", "Закінчується"},
		StringViewPair{"floodfill mode is disabled", "режим floodfill вимкнено"},
		StringViewPair{"Queue size", "Розмір черги"},
		StringViewPair{"Run peer test", "Запустити тестування"},
		StringViewPair{"Reload tunnels configuration", "Перезавантажити налаштування тунелів"},
		StringViewPair{"Decline transit tunnels", "Відхиляти транзитні тунелі"},
		StringViewPair{"Accept transit tunnels", "Ухвалювати транзитні тунелі"},
		StringViewPair{"Cancel graceful shutdown", "Скасувати плавну зупинку"},
		StringViewPair{"Start graceful shutdown", "Запустити плавну зупинку"},
		StringViewPair{"Force shutdown", "Примусова зупинка"},
		StringViewPair{"Reload external CSS styles", "Перезавантажити зовнішні стилі CSS"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Примітка:</b> будь-яка зроблена тут дія не є постійною та не змінює ваші конфігураційні файли."},
		StringViewPair{"Logging level", "Рівень логування"},
		StringViewPair{"Transit tunnels limit", "Обмеження транзитних тунелів"},
		StringViewPair{"Change", "Змінити"},
		StringViewPair{"Change language", "Змінити мову"},
		StringViewPair{"no transit tunnels currently built", "немає побудованих транзитних тунелів"},
		StringViewPair{"SAM disabled", "SAM вимкнуто"},
		StringViewPair{"no sessions currently running", "немає запущених сесій"},
		StringViewPair{"SAM session not found", "SAM сесія не знайдена"},
		StringViewPair{"SAM Session", "SAM сесія"},
		StringViewPair{"Server Tunnels", "Серверні Тунелі"},
		StringViewPair{"Client Forwards", "Клієнтські Переспрямування"},
		StringViewPair{"Server Forwards", "Серверні Переспрямування"},
		StringViewPair{"Unknown page", "Невідома сторінка"},
		StringViewPair{"Invalid token", "Невірний токен"},
		StringViewPair{"SUCCESS", "УСПІШНО"},
		StringViewPair{"Stream closed", "Потік зачинений"},
		StringViewPair{"Stream not found or already was closed", "Потік не знайдений або вже зачинений"},
		StringViewPair{"Destination not found", "Точка призначення не знайдена"},
		StringViewPair{"StreamID can't be null", "Ідентифікатор потоку не може бути порожнім"},
		StringViewPair{"Return to destination page", "Повернутися на сторінку точки призначення"},
		StringViewPair{"You will be redirected in %d seconds", "Ви будете переадресовані через %d секунд"},
		StringViewPair{"LeaseSet expiration time updated", "Час закінчення LeaseSet оновлено"},
		StringViewPair{"LeaseSet is not found or already expired", "LeaseSet не знайдено або вже закінчився"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Кількість транзитних тунелів не повинна перевищувати %d"},
		StringViewPair{"Back to commands list", "Повернутися до списку команд"},
		StringViewPair{"Register at reg.i2p", "Зареєструвати на reg.i2p"},
		StringViewPair{"Description", "Опис"},
		StringViewPair{"A bit information about service on domain", "Трохи інформації про сервіс на домені"},
		StringViewPair{"Submit", "Надіслати"},
		StringViewPair{"Domain can't end with .b32.i2p", "Домен не може закінчуватися на .b32.i2p"},
		StringViewPair{"Domain must end with .i2p", "Домен повинен закінчуватися на .i2p"},
		StringViewPair{"Unknown command", "Невідома команда"},
		StringViewPair{"Command accepted", "Команда прийнята"},
		StringViewPair{"Proxy error", "Помилка проксі"},
		StringViewPair{"Proxy info", "Інформація проксі"},
		StringViewPair{"Proxy error: Host not found", "Помилка проксі: Адреса не знайдена"},
		StringViewPair{"Remote host not found in router's addressbook", "Віддалена адреса не знайдена в адресній книзі маршрутизатора"},
		StringViewPair{"You may try to find this host on jump services below", "Ви можете спробувати знайти дану адресу на джамп сервісах нижче"},
		StringViewPair{"Invalid request", "Некоректний запит"},
		StringViewPair{"Proxy unable to parse your request", "Проксі не може розібрати ваш запит"},
		StringViewPair{"Addresshelper is not supported", "Адресна книга не підтримується"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Хост %s <font color=red>вже в адресній книзі маршрутизатора</font>. <b>Будьте обережні: джерело цієї адреси може зашкодити!</b> Натисніть тут, щоб оновити запис: <a href=\"%s%s%s&update=true\">Продовжити</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Адресна книга відхилила примусове оновлення"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Щоб додати хост <b>%s</b> в адресі маршрутизатора, натисніть тут: <a href=\"%s%s%s\">Продовжити</a>."},
		StringViewPair{"Addresshelper request", "Запит на адресну сторінку"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "Хост %s доданий в адресну книгу маршрутизатора від помічника. Натисніть тут, щоб продовжити: <a href=\"%s\">Продовжити</a>."},
		StringViewPair{"Addresshelper adding", "Адреса додана"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "Хост %s <font color=red>вже в адресній книзі маршрутизатора</font>. Натисніть тут, щоб оновити запис: <a href=\"%s%s%s&update=true\">Продовжити</a>."},
		StringViewPair{"Addresshelper update", "Оновлення адресної книги"},
		StringViewPair{"Invalid request URI", "Некоректний URI запиту"},
		StringViewPair{"Can't detect destination host from request", "Не вдалось визначити адресу призначення з запиту"},
		StringViewPair{"Outproxy failure", "Помилка зовнішнього проксі"},
		StringViewPair{"Bad outproxy settings", "Некоректні налаштування зовнішнього проксі"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Адрес %s не в I2P мережі, але зовнішній проксі не включений"},
		StringViewPair{"Unknown outproxy URL", "Невідомий URL зовнішнього проксі"},
		StringViewPair{"Cannot resolve upstream proxy", "Не вдається визначити висхідний проксі"},
		StringViewPair{"Hostname is too long", "Ім'я вузла надто довге"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Не вдалося підключитися до висхідного SOCKS проксі сервера"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "Не вдається домовитися з висхідним SOCKS проксі"},
		StringViewPair{"CONNECT error", "Помилка CONNECT запиту"},
		StringViewPair{"Failed to connect", "Не вдалося підключитися"},
		StringViewPair{"SOCKS proxy error", "Помилка SOCKS проксі"},
		StringViewPair{"Failed to send request to upstream", "Не вдалося відправити запит висхідному проксі"},
		StringViewPair{"No reply from SOCKS proxy", "Немає відповіді від SOCKS проксі сервера"},
		StringViewPair{"Cannot connect", "Не вдалося підключитися"},
		StringViewPair{"HTTP out proxy not implemented", "Підтримка зовнішнього HTTP проксі сервера не реалізована"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Не вдалося підключитися до висхідного HTTP проксі сервера"},
		StringViewPair{"Host is down", "Вузол недоступний"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Не вдалося встановити з'єднання до запитаного вузла, можливо він не в мережі. Спробуйте повторити запит пізніше."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d день", "%d дня", "%d днів"}},
		{"%d hours", {"%d годину", "%d години", "%d годин"}},
		{"%d minutes", {"%d хвилину", "%d хвилини", "%d хвилин"}},
		{"%d seconds", {"%d секунду", "%d секунди", "%d секунд"}},
		{"", {"", "", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
