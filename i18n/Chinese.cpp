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

// Simplified Chinese localization file

namespace i2p
{
namespace i18n
{
namespace chinese // language namespace
{
	// language name in lowercase
	static std::string language = "chinese";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return 0;
	}

	static constexpr auto strings = StringViewPairs
	{
		StringViewPair{"%.2f KiB", "%.2f KiB"},
		StringViewPair{"%.2f MiB", "%.2f MiB"},
		StringViewPair{"%.2f GiB", "%.2f GiB"},
		StringViewPair{"building", "正在构建"},
		StringViewPair{"failed", "连接失败"},
		StringViewPair{"expiring", "即将过期"},
		StringViewPair{"established", "连接成功"},
		StringViewPair{"unknown", "未知"},
		StringViewPair{"exploratory", "探索"},
		StringViewPair{"Purple I2P Webconsole", "Purple I2P 网页控制台"},
		StringViewPair{"<b>i2pd</b> webconsole", "<b>i2pd</b> 网页控制台"},
		StringViewPair{"Main page", "主页"},
		StringViewPair{"Router commands", "路由命令"},
		StringViewPair{"Local Destinations", "本地目标"},
		StringViewPair{"LeaseSets", "租约集"},
		StringViewPair{"Tunnels", "隧道"},
		StringViewPair{"Transit Tunnels", "中转隧道"},
		StringViewPair{"Transports", "传输"},
		StringViewPair{"I2P tunnels", "I2P 隧道"},
		StringViewPair{"SAM sessions", "SAM 会话"},
		StringViewPair{"ERROR", "错误"},
		StringViewPair{"OK", "良好"},
		StringViewPair{"Testing", "测试中"},
		StringViewPair{"Firewalled", "受到防火墙限制"},
		StringViewPair{"Unknown", "未知"},
		StringViewPair{"Proxy", "代理"},
		StringViewPair{"Mesh", "自组网"},
		StringViewPair{"Clock skew", "时钟偏移"},
		StringViewPair{"Offline", "离线"},
		StringViewPair{"Symmetric NAT", "对称 NAT"},
		StringViewPair{"Full cone NAT", "全锥型NAT"},
		StringViewPair{"No Descriptors", "无描述符"},
		StringViewPair{"Uptime", "运行时间"},
		StringViewPair{"Network status", "网络状态"},
		StringViewPair{"Network status v6", "IPv6 网络状态"},
		StringViewPair{"Stopping in", "距停止还有："},
		StringViewPair{"Family", "家族"},
		StringViewPair{"Tunnel creation success rate", "隧道创建成功率"},
		StringViewPair{"Total tunnel creation success rate", "当前隧道创建成功率"},
		StringViewPair{"Received", "已接收"},
		StringViewPair{"%.2f KiB/s", "%.2f KiB/s"},
		StringViewPair{"Sent", "已发送"},
		StringViewPair{"Transit", "中转"},
		StringViewPair{"Data path", "数据文件路径"},
		StringViewPair{"Hidden content. Press on text to see.", "隐藏内容 请点击此处查看。"},
		StringViewPair{"Router Ident", "路由身份"},
		StringViewPair{"Router Family", "路由器家族"},
		StringViewPair{"Router Caps", "路由器类型"},
		StringViewPair{"Version", "版本"},
		StringViewPair{"Our external address", "外部地址"},
		StringViewPair{"supported", "支持"},
		StringViewPair{"Routers", "路由节点"},
		StringViewPair{"Floodfills", "洪泛节点"},
		StringViewPair{"Client Tunnels", "客户端隧道"},
		StringViewPair{"Services", "服务"},
		StringViewPair{"Enabled", "启用"},
		StringViewPair{"Disabled", "禁用"},
		StringViewPair{"Encrypted B33 address", "加密的 B33 地址"},
		StringViewPair{"Address registration line", "地址域名注册"},
		StringViewPair{"Domain", "域名"},
		StringViewPair{"Generate", "生成"},
		StringViewPair{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>注意：</b> 结果字符串只能用于注册二级域名(例如：example.i2p)。若需注册三级域名，请使用 i2pd-tools。"},
		StringViewPair{"Address", "地址"},
		StringViewPair{"Type", "类型"},
		StringViewPair{"EncType", "加密类型"},
		StringViewPair{"Expire LeaseSet", "到期租约集"},
		StringViewPair{"Inbound tunnels", "入站隧道"},
		StringViewPair{"%dms", "%dms"},
		StringViewPair{"Outbound tunnels", "出站隧道"},
		StringViewPair{"Tags", "标签"},
		StringViewPair{"Incoming", "传入"},
		StringViewPair{"Outgoing", "传出"},
		StringViewPair{"Destination", "目标"},
		StringViewPair{"Amount", "数量"},
		StringViewPair{"Incoming Tags", "传入标签"},
		StringViewPair{"Tags sessions", "标签会话"},
		StringViewPair{"Status", "状态"},
		StringViewPair{"Local Destination", "本地目标"},
		StringViewPair{"Streams", "流"},
		StringViewPair{"Close stream", "断开流"},
		StringViewPair{"Such destination is not found", "找不到此目标"},
		StringViewPair{"I2CP session not found", "未找到 I2CP 会话"},
		StringViewPair{"I2CP is not enabled", "I2CP 未启用"},
		StringViewPair{"Invalid", "无效"},
		StringViewPair{"Store type", "存储类型"},
		StringViewPair{"Expires", "过期时间"},
		StringViewPair{"Non Expired Leases", "未到期的租约"},
		StringViewPair{"Gateway", "网关"},
		StringViewPair{"TunnelID", "隧道 ID"},
		StringViewPair{"EndDate", "结束日期"},
		StringViewPair{"floodfill mode is disabled", "洪泛已禁用"},
		StringViewPair{"Queue size", "队列大小"},
		StringViewPair{"Run peer test", "运行节点测试"},
		StringViewPair{"Reload tunnels configuration", "重新载入隧道配置"},
		StringViewPair{"Decline transit tunnels", "拒绝中转隧道"},
		StringViewPair{"Accept transit tunnels", "允许中转隧道"},
		StringViewPair{"Cancel graceful shutdown", "取消平滑关闭"},
		StringViewPair{"Start graceful shutdown", "平滑关闭"},
		StringViewPair{"Force shutdown", "强制停止"},
		StringViewPair{"Reload external CSS styles", "重载外部 CSS 样式"},
		StringViewPair{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>注意：</b> 此处完成的任何操作都不是永久的，不会更改您的配置文件。"},
		StringViewPair{"Logging level", "日志级别"},
		StringViewPair{"Transit tunnels limit", "中转隧道限制"},
		StringViewPair{"Change", "修改"},
		StringViewPair{"Change language", "更改语言"},
		StringViewPair{"no transit tunnels currently built", "目前未构建中转隧道"},
		StringViewPair{"SAM disabled", "SAM 已禁用"},
		StringViewPair{"no sessions currently running", "没有正在运行的会话"},
		StringViewPair{"SAM session not found", "未找到 SAM 会话"},
		StringViewPair{"SAM Session", "SAM 会话"},
		StringViewPair{"Server Tunnels", "服务器隧道"},
		StringViewPair{"Client Forwards", "客户端转发"},
		StringViewPair{"Server Forwards", "服务器转发"},
		StringViewPair{"Unknown page", "未知页面"},
		StringViewPair{"Invalid token", "无效令牌"},
		StringViewPair{"SUCCESS", "成功"},
		StringViewPair{"Stream closed", "流已关闭"},
		StringViewPair{"Stream not found or already was closed", "流未找到或已关闭"},
		StringViewPair{"Destination not found", "找不到目标"},
		StringViewPair{"StreamID can't be null", "StreamID 不能为空"},
		StringViewPair{"Return to destination page", "返回目标页面"},
		StringViewPair{"You will be redirected in %d seconds", "您将在%d秒内被重定向"},
		StringViewPair{"LeaseSet expiration time updated", "租约集到期时间已更新"},
		StringViewPair{"LeaseSet is not found or already expired", "租约集未找到或已过期"},
		StringViewPair{"Transit tunnels count must not exceed %d", "中转隧道数量限制为 %d"},
		StringViewPair{"Back to commands list", "返回命令列表"},
		StringViewPair{"Register at reg.i2p", "在 reg.i2p 注册域名"},
		StringViewPair{"Description", "描述"},
		StringViewPair{"A bit information about service on domain", "在此域名上运行的服务的一些信息"},
		StringViewPair{"Submit", "提交"},
		StringViewPair{"Domain can't end with .b32.i2p", "域名不能以 .b32.i2p 结尾"},
		StringViewPair{"Domain must end with .i2p", "域名必须以 .i2p 结尾"},
		StringViewPair{"Unknown command", "未知指令"},
		StringViewPair{"Command accepted", "已接受指令"},
		StringViewPair{"Proxy error", "代理错误"},
		StringViewPair{"Proxy info", "代理信息"},
		StringViewPair{"Proxy error: Host not found", "代理错误：未找到主机"},
		StringViewPair{"Remote host not found in router's addressbook", "在路由地址簿中未找到远程主机"},
		StringViewPair{"You may try to find this host on jump services below", "您可以尝试在下方的跳转服务中找到此主机"},
		StringViewPair{"Invalid request", "无效请求"},
		StringViewPair{"Proxy unable to parse your request", "代理无法解析您的请求"},
		StringViewPair{"Addresshelper is not supported", "不支持地址助手"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. <b>Be careful: source of this URL may be harmful!</b> Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "主机 %s <font color=red>已在路由地址簿中</font>。<b>请注意：此地址的来源可能是有害的！</b>点击此处更新记录：<a href=\"%s%s%s&update=true\">继续</a>"},
		StringViewPair{"Addresshelper forced update rejected", "地址助手强制更新被拒绝"},
		StringViewPair{"To add host <b>%s</b> in router's addressbook, click here: <a href=\"%s%s%s\">Continue</a>.", "若要在路由器地址簿中添加主机 <b>%s</b> 请点击这里： <a href=\"%s%s%s\">继续</a>"},
		StringViewPair{"Addresshelper request", "请求地址助手"},
		StringViewPair{"Host %s added to router's addressbook from helper. Click here to proceed: <a href=\"%s\">Continue</a>.", "主机 %s 已通过地址助手添加到路由地址簿中。点击此处继续：<a href=\"%s\">继续</a>"},
		StringViewPair{"Addresshelper adding", "正在添加地址助手"},
		StringViewPair{"Host %s is <font color=red>already in router's addressbook</font>. Click here to update record: <a href=\"%s%s%s&update=true\">Continue</a>.", "主机 %s <font color=red>已在路由地址簿中</font>。点击此处更新记录：<a href=\"%s%s%s&update=true\">继续</a>"},
		StringViewPair{"Addresshelper update", "更新地址助手"},
		StringViewPair{"Invalid request URI", "无效的 URI 请求"},
		StringViewPair{"Can't detect destination host from request", "无法从请求中检测到目标主机"},
		StringViewPair{"Outproxy failure", "出口代理故障"},
		StringViewPair{"Bad outproxy settings", "错误的出口代理设置"},
		StringViewPair{"Host %s is not inside I2P network, but outproxy is not enabled", "主机 %s 不在 I2P 网络内，但出口代理未启用"},
		StringViewPair{"Unknown outproxy URL", "未知的出口代理地址"},
		StringViewPair{"Cannot resolve upstream proxy", "无法解析上游代理"},
		StringViewPair{"Hostname is too long", "主机名过长"},
		StringViewPair{"Cannot connect to upstream SOCKS proxy", "无法连接到上游 SOCKS 代理"},
		StringViewPair{"Cannot negotiate with SOCKS proxy", "无法与 SOCKS 代理协商"},
		StringViewPair{"CONNECT error", "连接错误"},
		StringViewPair{"Failed to connect", "连接失败"},
		StringViewPair{"SOCKS proxy error", "SOCKS 代理错误"},
		StringViewPair{"Failed to send request to upstream", "向上游发送请求失败"},
		StringViewPair{"No reply from SOCKS proxy", "没有来自 SOCKS 代理的回复"},
		StringViewPair{"Cannot connect", "无法连接"},
		StringViewPair{"HTTP out proxy not implemented", "HTTP 出口代理未实现"},
		StringViewPair{"Cannot connect to upstream HTTP proxy", "无法连接到上游 HTTP 代理"},
		StringViewPair{"Host is down", "主机已关闭"},
		StringViewPair{"Can't create connection to requested host, it may be down. Please try again later.", "无法创建到目标主机的连接。主机可能已下线，请稍后再试。"},
		StringViewPair{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"%d days", {"%d 天"}},
		{"%d hours", {"%d 小时"}},
		{"%d minutes", {"%d 分钟"}},
		{"%d seconds", {"%d 秒"}},
		{"", {""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, Strings{strings}, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
