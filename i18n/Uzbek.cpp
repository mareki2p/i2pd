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
namespace uzbek // language namespace
{
	// language name in lowercase
	static std::string language = "uzbek";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return n > 1 ? 1 : 0;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f KiB"},
		StringViewPair{"%.2f MiB", "%.2f MiB"},
		StringViewPair{"%.2f GiB", "%.2f GiB"},
		StringViewPair{"building", "yaratilmoqda"},
		StringViewPair{"failed", "muvaffaqiyatsiz"},
		StringViewPair{"expiring", "muddati tugaydi"},
		StringViewPair{"established", "aloqa o'rnatildi"},
		StringViewPair{"unknown", "noma'lum"},
		StringViewPair{"exploratory", "tadqiqiy"},
		StringViewPair{"Purple I2P Webconsole", "Veb-konsoli Purple I2P"},
		StringViewPair{"<b>i2pd</b> webconsole", "<b>i2pd</b> veb-konsoli"},
		StringViewPair{"Main page", "Asosiy sahifa"},
		StringViewPair{"Router commands", "Router buyruqlari"},
		StringViewPair{"Local Destinations", "Mahalliy joylanishlar"},
		StringViewPair{"LeaseSets", "LeaseSets"},
		StringViewPair{"Tunnels", "Tunnellar"},
		StringViewPair{"Transit Tunnels", "Tranzit Tunellari"},
		StringViewPair{"Transports", "Transportlar"},
		StringViewPair{"I2P tunnels", "I2P tunnellari"},
		StringViewPair{"SAM sessions", "SAM sessiyalari"},
		StringViewPair{"ERROR", "XATO"},
		StringViewPair{"OK", "OK"},
		StringViewPair{"Testing", "Testlash"},
		StringViewPair{"Firewalled", "Xavfsizlik devori bilan himoyalangan"},
		StringViewPair{"Unknown", "Notanish"},
		StringViewPair{"Proxy", "Proksi"},
		StringViewPair{"Mesh", "Mesh To'r"},
		StringViewPair{"Clock skew", "Aniq vaqt emas"},
		StringViewPair{"Offline", "Oflayn"},
		StringViewPair{"Symmetric NAT", "Simmetrik NAT"},
		StringViewPair{"Full cone NAT", "Full cone NAT"},
		StringViewPair{"No Descriptors", "Deskriptorlar yo'q"},
		StringViewPair{"Uptime", "Ish vaqti"},
		StringViewPair{"Network status", "Tarmoq holati"},
		StringViewPair{"Network status v6", "Tarmoq holati v6"},
		StringViewPair{"Stopping in", "Ichida to'xtatish"},
		StringViewPair{"Family", "Oila"},
		StringViewPair{"Tunnel creation success rate", "Tunnel yaratish muvaffaqiyat darajasi"},
		StringViewPair{"Total tunnel creation success rate", "Tunnel yaratishning umumiy muvaffaqiyat darajasi"},
		StringViewPair{"Received", "Qabul qilindi"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Yuborilgan"},
		StringViewPair{"Transit", "Tranzit"},
		StringViewPair{"Data path", "Ma'lumotlar joylanishi"},
		StringViewPair{"Hidden content. Press on text to see.", "Yashirin tarkib. Ko'rish uchun matn ustida bosing."},
		StringViewPair{"Router Ident", "Router identifikatori"},
		StringViewPair{"Router Family", "Router oilasi"},
		StringViewPair{"Router Caps", "Router Bayroqlari"},
		StringViewPair{"Version", "Versiya"},
		StringViewPair{"Our external address", "Bizning tashqi manzilimiz"},
		StringViewPair{"supported", "qo'llab-quvvatlanadi"},
		StringViewPair{"Routers", "Routerlar"},
		StringViewPair{"Floodfills", "Floodfills"},
		StringViewPair{"Client Tunnels", "Mijoz Tunellari"},
		StringViewPair{"Services", "Xizmatlar"},
		StringViewPair{"Enabled", "Yoqilgan"},
		StringViewPair{"Disabled", "O'chirilgan"},
		StringViewPair{"Encrypted B33 address", "Shifrlangan B33 manzil"},
		StringViewPair{"Address registration line", "Manzilni ro'yxatga olish liniyasi"},
		StringViewPair{"Domain", "Domen"},
		StringViewPair{"Generate", "Yaratish"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Eslatma:</b> natija satridan faqat 2LD domenlarini ro'yxatdan o'tkazish uchun foydalanish mumkin (example.i2p). Subdomenlarni ro'yxatdan o'tkazish uchun 'i2pd-tools'dan foydalaning."},
		StringViewPair{"Address", "Manzil"},
		StringViewPair{"Type", "Turi"},
		StringViewPair{"EncType", "ShifrlashTuri"},
		StringViewPair{"Expire LeaseSet", "LeaseSet muddati tugaydi"},
		StringViewPair{"Inbound tunnels", "Kirish tunnellari"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "Chiquvchi tunnellar"},
		StringViewPair{"Tags", "Teglar"},
		StringViewPair{"Incoming", "Kiruvchi"},
		StringViewPair{"Outgoing", "Chiquvchi"},
		StringViewPair{"Destination", "Manzilgoh"},
		StringViewPair{"Amount", "Soni"},
		StringViewPair{"Incoming Tags", "Kiruvchi teglar"},
		StringViewPair{"Tags sessions", "Teglar sessiyalari"},
		StringViewPair{"Status", "Holat"},
		StringViewPair{"Local Destination", "Mahalliy joylanish"},
		StringViewPair{"Streams", "Strim"},
		StringViewPair{"Close stream", "Strimni o'chirish"},
		StringViewPair{"Such destination is not found", "Bunday yo'nalish topilmadi"},
		StringViewPair{"I2CP session not found", "I2CP sessiyasi topilmadi"},
		StringViewPair{"I2CP is not enabled", "I2CP yoqilmagan"},
		StringViewPair{"Invalid", "Noto'g'ri"},
		StringViewPair{"Store type", "Saqlash turi"},
		StringViewPair{"Expires", "Muddati tugaydi"},
		StringViewPair{"Non Expired Leases", "Muddati O'tmagan Leases"},
		StringViewPair{"Gateway", "Kirish yo'li"},
		StringViewPair{"TunnelID", "TunnelID"},
		StringViewPair{"EndDate", "Tugash Sanasi"},
		StringViewPair{"floodfill mode is disabled", "floodfill rejimi o'chirilgan"},
		StringViewPair{"Queue size", "Navbat hajmi"},
		StringViewPair{"Run peer test", "Sinovni boshlang"},
		StringViewPair{"Reload tunnels configuration", "Tunnel konfiguratsiyasini qayta yuklash"},
		StringViewPair{"Decline transit tunnels", "Tranzit tunnellarini rad etish"},
		StringViewPair{"Accept transit tunnels", "Tranzit tunnellarni qabul qilish"},
		StringViewPair{"Cancel graceful shutdown", "Yumshoq to'xtashni bekor qilish"},
		StringViewPair{"Start graceful shutdown", "Yumshoq to'xtashni boshlash"},
		StringViewPair{"Force shutdown", "Majburiy to'xtatish"},
		StringViewPair{"Reload external CSS styles", "Tashqi CSS uslublarini qayta yuklang"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Eslatma:</b> shu yerda qilingan har qanday harakat doimiy emas va konfiguratsiya fayllarini o'zgartirmaydi."},
		StringViewPair{"Logging level", "Jurnal darajasi"},
		StringViewPair{"Transit tunnels limit", "Tranzit tunellarning chegarasi"},
		StringViewPair{"Change", "O'zgartirish"},
		StringViewPair{"Change language", "Tilni o'zgartirish"},
		StringViewPair{"no transit tunnels currently built", "qurilgan tranzit tunnellari yo'q"},
		StringViewPair{"SAM disabled", "SAM o'chirilgan"},
		StringViewPair{"no sessions currently running", "hech qanday ishlaydigan sessiyalar yo'q"},
		StringViewPair{"SAM session not found", "SAM sessiyasi topilmadi"},
		StringViewPair{"SAM Session", "SAM sessiyasi"},
		StringViewPair{"Server Tunnels", "Server Tunellari"},
		StringViewPair{"Client Forwards", "Mijozlarni Yo'naltirish"},
		StringViewPair{"Server Forwards", "Serverni Yo'naltirish"},
		StringViewPair{"Unknown page", "Noma'lum sahifa"},
		StringViewPair{"Invalid token", "Noto‘g‘ri belgi"},
		StringViewPair{"SUCCESS", "Muvaffaqiyat"},
		StringViewPair{"Stream closed", "Strim yopiq"},
		StringViewPair{"Stream not found or already was closed", "Strim topilmadi yoki allaqachon yopilgan"},
		StringViewPair{"Destination not found", "Yo'nalish topilmadi"},
		StringViewPair{"StreamID can't be null", "StreamID bo'sh bo'lishi mumkin emas"},
		StringViewPair{"Return to destination page", "Manzilgoh sahifasiga qaytish"},
		StringViewPair{"You will be redirected in %d seconds", "Siz %d soniyadan so‘ng boshqa yo‘nalishga yo‘naltirilasiz"},
		StringViewPair{"LeaseSet expiration time updated", "LeaseSet amal qilish muddati yangilandi"},
		StringViewPair{"LeaseSet is not found or already expired", "LeaseSet topilmadi yoki muddati tugagan"},
		StringViewPair{"Transit tunnels count must not exceed %d", "Tranzit tunnellar soni %d dan oshmasligi kerak"},
		StringViewPair{"Back to commands list", "Buyruqlar ro'yxatiga qaytish"},
		StringViewPair{"Register at reg.i2p", "Reg.i2p-da ro'yxatdan o'ting"},
		StringViewPair{"Description", "Tavsif"},
		StringViewPair{"A bit information about service on domain", "Domen xizmatlari haqida bir oz ma'lumot"},
		StringViewPair{"Submit", "Yuborish"},
		StringViewPair{"Domain can't end with .b32.i2p", "Domen .b32.i2p bilan tugashi mumkin emas"},
		StringViewPair{"Domain must end with .i2p", "Domen .i2p bilan tugashi kerak"},
		StringViewPair{"Unknown command", "Noma'lum buyruq"},
		StringViewPair{"Command accepted", "Buyruq qabul qilindi"},
		StringViewPair{"Proxy error", "Proksi xatosi"},
		StringViewPair{"Proxy info", "Proksi ma'lumotlari"},
		StringViewPair{"Proxy error: Host not found", "Proksi xatosi: Xost topilmadi"},
		StringViewPair{"Remote host not found in router's addressbook", "Masofaviy xost yo'riqnoma manzillar kitobida topilmadi"},
		StringViewPair{"You may try to find this host on jump services below", "Siz xost quyida o'tish xizmatlari orqali topishga harakat qilishingiz mumkin"},
		StringViewPair{"Invalid request", "Noto‘g‘ri so‘rov"},
		StringViewPair{"Proxy unable to parse your request", "Proksi sizning so'rovingizni aniqlab ololmayapti"},
		StringViewPair{"Addresshelper is not supported", "Addresshelper qo'llab-quvvatlanmaydi"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "%s xosti <font color=red>allaqachon routerning manzillar kitobida</font>. <b>Ehtiyot bo'ling: bu URL manbasi zararli bo'lishi mumkin!</b> Yozuvni yangilash uchun bu yerni bosing: <a href=\"%s%s%s&update=true\">Davom etish</a>."},
		StringViewPair{"Addresshelper forced update rejected", "Addresshelperni majburiy yangilash rad etildi"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "Routerning manzillar kitobiga <b>%s</b> xostini qo'shish uchun bu yerni bosing: <a href=\"%s%s%s\">Davom etish</a>."},
		StringViewPair{"Addresshelper request", "Addresshelper so'rovi"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "Yordamchidan router manzillar kitobiga %s xost qo‘shildi. Davom etish uchun bu yerga bosing: <a href=\"%s\">Davom etish</a>."},
		StringViewPair{"Addresshelper adding", "Addresshelperni qo'shish"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "%s xosti <font color=red>allaqachon routerning manzillar kitobida</font>. Yozuvni yangilash uchun shu yerni bosing: <a href=\"%s%s%s&update=true\">Davom etish</a>."},
		StringViewPair{"Addresshelper update", "Addresshelperni yangilash"},
		StringViewPair{"Invalid request URI", "Noto'g'ri URI so'rovi"},
		StringViewPair{"Can't detect destination host from request", "So‘rov orqali manzil xostini aniqlab bo'lmayapti"},
		StringViewPair{"Outproxy failure", "Tashqi proksi muvaffaqiyatsizligi"},
		StringViewPair{"Bad outproxy settings", "Noto'g'ri tashqi proksi-server sozlamalari"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "Xost %s I2P tarmog'ida emas, lekin tashqi proksi yoqilmagan"},
		StringViewPair{"Unknown outproxy URL", "Noma'lum outproxy URL"},
		StringViewPair{"Cannot resolve upstream proxy", "Yuqoridagi 'proxy-server'ni aniqlab olib bolmayapti"},
		StringViewPair{"Hostname is too long", "Xost nomi juda uzun"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "Yuqori 'SOCKS proxy'ga ulanib bo'lmayapti"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "'SOCKS proxy' bilan muzokara olib bo'lmaydi"},
		StringViewPair{"CONNECT error", "CONNECT xatosi"},
		StringViewPair{"Failed to connect", "Ulanib bo'lmayapti"},
		StringViewPair{"SOCKS proxy error", "'SOCKS proxy' xatosi"},
		StringViewPair{"Failed to send request to upstream", "Yuqori proksi-serveriga so'rovni uborib bo'lmadi"},
		StringViewPair{"No reply from SOCKS proxy", "'SOCKS proxy'dan javob yo'q"},
		StringViewPair{"Cannot connect", "Ulanib bo'lmaydi"},
		StringViewPair{"HTTP out proxy not implemented", "Tashqi HTTP proksi-serverni qo'llab-quvvatlash amalga oshirilmagan"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "Yuqori 'HTTP proxy'ga ulanib bo'lmayapti"},
		StringViewPair{"Host is down", "Xost ishlamayapti"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "Talab qilingan xost bilan aloqa o'rnatilmadi, u ishlamay qolishi mumkin. Iltimos keyinroq qayta urinib ko'ring."},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d kun", "%d kun"}},
		{"%d hours", {"%d soat", "%d soat"}},
		{"%d minutes", {"%d daqiqa", "%d daqiqa"}},
		{"%d seconds", {"%d soniya", "%d soniya"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
