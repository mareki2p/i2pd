#ifndef __LocaleStringsSorted_H__
#define __LocaleStringsSorted_H__

#include <array>
#include <cassert>
#include <string_view>
#include <utility>

namespace i2p
{
namespace i18n
{





struct StringViewPair
{
	constexpr StringViewPair() :
		m_string_view_pair()
	{
	}
	template<std::size_t key_len, std::size_t val_len>
	constexpr StringViewPair(const char(&key_str)[key_len], const char(&val_str)[val_len]) :
		m_string_view_pair(std::make_pair(std::string_view{key_str, key_len - 1}, std::string_view{val_str, val_len - 1}))
	{
	}
	constexpr StringViewPair(StringViewPair const& other) :
		m_string_view_pair(other.m_string_view_pair)
	{
	}
	constexpr StringViewPair& operator=(StringViewPair const& other)
	{
		m_string_view_pair.first = other.m_string_view_pair.first;
		m_string_view_pair.second = other.m_string_view_pair.second;
		return *this;
	}
	std::pair<std::string_view, std::string_view> m_string_view_pair;
};

template<std::size_t N, std::size_t M>
constexpr auto merge_sort_merge(std::array<StringViewPair, N> const& first, std::array<StringViewPair, M> const& second)
{
	std::size_t f{};
	std::size_t s{};
	std::size_t i{};
	std::array<StringViewPair, N + M> res{};

	f = 0;
	s = 0;
	i = 0;
	while(f < N && s < M)
	{
		if(second[s].m_string_view_pair.first < first[f].m_string_view_pair.first)
		{
			res[i] = second[s]; ++s; ++i;
		}
		else
		{
			res[i] = first[f]; ++f; ++i;
		}
	}
	while(f < N)
	{
		res[i] = first[f]; ++f; ++i;
	}
	while(s < M)
	{
		res[i] = second[s]; ++s; ++i;
	}
	return res;
}

template<std::size_t N>
constexpr auto merge_sort_split_first(std::array<StringViewPair, N> const& val)
{
	std::size_t n{};
	std::size_t i{};
	std::array<StringViewPair, N / 2> res{};

	n = N / 2;
	for(i = 0; i != n; ++i)
	{
		res[i] = val[i];
	}
	return res;
}

template<std::size_t N>
constexpr auto merge_sort_split_second(std::array<StringViewPair, N> const& val)
{
	std::size_t n{};
	std::size_t i{};
	std::array<StringViewPair, N - N / 2> res{};

	n = N - N / 2;
	for(i = 0; i != n; ++i)
	{
		res[i] = val[N / 2 + i];
	}
	return res;
}

template<std::size_t N>
constexpr std::array<StringViewPair, N> merge_sort_main(std::array<StringViewPair, N> const& val);

template<>
constexpr std::array<StringViewPair, 1> merge_sort_main(std::array<StringViewPair, 1> const& val)
{
	return val;
}

template<std::size_t N>
constexpr std::array<StringViewPair, N> merge_sort_main(std::array<StringViewPair, N> const& val)
{
	auto const first = merge_sort_main(merge_sort_split_first(val));
	auto const second = merge_sort_main(merge_sort_split_second(val));

	return merge_sort_merge(first, second);
}

template<std::size_t N>
constexpr auto sort(std::array<StringViewPair, N> const& val)
{
	return merge_sort_main(val);
}

template<std::size_t N>
struct StringViewPairs
{
	template<typename... ts>
	constexpr StringViewPairs(ts const&... vals) :
		m_string_view_pairs(sort(std::array<StringViewPair, N>{vals...}))
	{
	}
	std::array<StringViewPair, N> m_string_view_pairs;
};

template<typename... ts>
StringViewPairs(ts...) -> StringViewPairs<sizeof...(ts)>;

struct Strings
{
	template<std::size_t N>
	constexpr Strings(StringViewPairs<N> const& string_view_pairs) :
		m_begin(&string_view_pairs.m_string_view_pairs[0]),
		m_count(N)
	{
	}
	StringViewPair const* m_begin;
	std::size_t m_count;
};





} // i18n
} // i2p

#endif // __LocaleStringsSorted_H__
