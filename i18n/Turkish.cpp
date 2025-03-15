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

// Turkish localization file

namespace i2p
{
namespace i18n
{
namespace turkish // language namespace
{
	// language name in lowercase
	static std::string language = "turkish";

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
		StringViewPair{"building", "kuruluyor"},
		StringViewPair{"failed", "başarısız"},
		StringViewPair{"expiring", "süresi geçiyor"},
		StringViewPair{"established", "kurulmuş"},
		StringViewPair{"unknown", "bilinmeyen"},
		StringViewPair{"Purple I2P Webconsole", "Mor I2P Webkonsolu"},
		StringViewPair{"<b>i2pd</b> webconsole", "<b>i2pd</b> webkonsolu"},
		StringViewPair{"Main page", "Ana sayfa"},
		StringViewPair{"Router commands", "Router komutları"},
		StringViewPair{"Local Destinations", "Yerel Hedefler"},
		StringViewPair{"Tunnels", "Tüneller"},
		StringViewPair{"Transit Tunnels", "Transit Tünelleri"},
		StringViewPair{"Transports", "Taşıma"},
		StringViewPair{"I2P tunnels", "I2P tünelleri"},
		StringViewPair{"SAM sessions", "SAM oturumları"},
		StringViewPair{"ERROR", "HATA"},
		StringViewPair{"OK", "TAMAM"},
		StringViewPair{"Testing", "Test ediliyor"},
		StringViewPair{"Firewalled", "Güvenlik Duvarı Kısıtlaması"},
		StringViewPair{"Unknown", "Bilinmeyen"},
		StringViewPair{"Proxy", "Proxy"},
		StringViewPair{"Clock skew", "Saat sorunu"},
		StringViewPair{"Offline", "Çevrimdışı"},
		StringViewPair{"Symmetric NAT", "Simetrik NAT"},
		StringViewPair{"Full cone NAT", "Full cone NAT"},
		StringViewPair{"No Descriptors", "Tanımlayıcı Yok"},
		StringViewPair{"Uptime", "Bağlantı süresi"},
		StringViewPair{"Network status", "Ağ durumu"},
		StringViewPair{"Network status v6", "Ağ durumu v6"},
		StringViewPair{"Family", "Aile"},
		StringViewPair{"Tunnel creation success rate", "Tünel oluşturma başarı oranı"},
		StringViewPair{"Received", "Alındı"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "Gönderildi"},
		StringViewPair{"Transit", "Transit"},
		StringViewPair{"Data path", "Veri yolu"},
		StringViewPair{"Hidden content. Press on text to see.", "Gizlenmiş içerik. Görmek için yazıya tıklayınız."},
		StringViewPair{"Router Family", "Router Familyası"},
		StringViewPair{"Decline transit tunnels", "Transit tünellerini reddet"},
		StringViewPair{"Accept transit tunnels", "Transit tünellerini kabul et"},
		StringViewPair{"Cancel graceful shutdown", "Düzgün durdurmayı iptal Et"},
		StringViewPair{"Start graceful shutdown", "Düzgün durdurmayı başlat"},
		StringViewPair{"Force shutdown", "Durdurmaya zorla"},
		StringViewPair{"Reload external CSS styles", "Harici CSS stilini yeniden yükle"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Not:</b> burada yapılan ayarların hiçbiri kalıcı değildir ve ayar dosyalarınızı değiştirmez."},
		StringViewPair{"Logging level", "Kayıt tutma seviyesi"},
		StringViewPair{"Transit tunnels limit", "Transit tünel limiti"},
		StringViewPair{"Change", "Değiştir"},
		StringViewPair{"Change language", "Dil değiştir"},
		StringViewPair{"no transit tunnels currently built", "kurulmuş bir transit tüneli bulunmamakta"},
		StringViewPair{"SAM disabled", "SAM devre dışı"},
		StringViewPair{"no sessions currently running", "hiçbir oturum şu anda çalışmıyor"},
		StringViewPair{"SAM session not found", "SAM oturumu bulunamadı"},
		StringViewPair{"SAM Session", "SAM oturumu"},
		StringViewPair{"Server Tunnels", "Sunucu Tünelleri"},
		StringViewPair{"Unknown page", "Bilinmeyen sayfa"},
		StringViewPair{"Invalid token", "Geçersiz token"},
		StringViewPair{"SUCCESS", "BAŞARILI"},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d gün", "%d gün"}},
		{"%d hours", {"%d saat", "%d saat"}},
		{"%d minutes", {"%d dakika", "%d dakika"}},
		{"%d seconds", {"%d saniye", "%d saniye"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
