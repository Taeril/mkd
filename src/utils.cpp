#include "utils.hpp"

#include <cstdlib>
#include <fmt/core.h>

#include "tr_tab.h"

typedef uint32_t U32;

static int comp(const void* ap, const void* bp) {
	TrTab* a = (TrTab*)ap;
	TrTab* b = (TrTab*)bp;

	return a->value < b->value ? -1 :
		a->value > b->value ? 1 : 0;
}

std::string to_ascii(std::string const& str) {
	std::string ret;
	const char* p = str.c_str();

	for(size_t i=0; *p && i<str.size(); ++i) {
		uint8_t z = *p;
		size_t char_len = (z < 0x80) ? 1 : // 0xxxxxxx
			((z & 0xe0) == 0xc0) ? 2 : // 110xxxxx
			((z & 0xf0) == 0xe0) ? 3 : // 1110xxxx
			((z & 0xf8) == 0xf0) && (z <= 0xf4) ? 4 : // 11110xxx
			0; // invalid utf8

		if(i + char_len <= str.size()) {
			size_t clen = 
				char_len == 4 ? ((p[3] & 0xc0) != 0x80 ? 0 : char_len) :
				char_len == 3 ? ((p[2] & 0xc0) != 0x80 ? 0 : char_len) :
				char_len == 2 ? ((p[1] & 0xc0) != 0x80 ? 0 : char_len) :
				char_len == 1 ? char_len : 0;

			if(clen == 1) {
				ret += *p;
				++p;
			} else if(clen) {
				uint32_t v = 
					clen == 1 ? *p :
					clen == 2 ? (((U32)p[0] & 0x1f) << 6) | ((U32)p[1] & 0x3f) :
					clen == 3 ? (((U32)p[0] & 0x0f) << 12) | (((U32)p[1] & 0x3f) << 6) | ((U32)p[2] & 0x3f) :
					clen == 4 ? (((U32)p[0] & 0x07) << 18) | (((U32)p[1] & 0x3f) << 12) | (((U32)p[2] & 0x3f) << 6) | ((U32)p[3] & 0x3f) :
					1; // invalid, move forward one step

				TrTab n = {v, {}};
				TrTab* x = (TrTab*)std::bsearch(&n, tr_tab, tr_tab_len, sizeof(tr_tab[0]), comp);

				ret += x ? x->characters : "?";
				p += clen;
			} else {
				ret += '?';
				++p;
			}
		} else {
			ret += '?';
			++p;
		}
	}

	return ret;
}

std::string slugify(std::string const& str) {
	std::string ret;
	std::string::size_type m = 0;
	std::string::size_type n = 0;

	std::string value = to_ascii(str);

	const char* letters = "0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz" "-";

	while((n = value.find_first_not_of(letters, m)) != std::string::npos) {
		ret.append(value.substr(m, n-m));
		if(n-m) {
			ret.append("-");
		}

		m = n + 1;
	}
	ret.append(value.substr(m));

	if(!ret.empty() && ret.front() == '-')
		ret.erase(begin(ret));
	if(!ret.empty() && ret.back() == '-')
		ret.pop_back();

	return ret;
}


