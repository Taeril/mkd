#ifndef HEADER_MKD_HPP
#define HEADER_MKD_HPP

#include <string>
#include <unordered_set>
#include <unordered_map>

#include "md4c/md4c.h"

namespace mkd {

class Parser {
	public:
		Parser();
		~Parser();

		std::string parse(std::string const& md);

		inline std::string const& html() { return html_; }
		inline std::string const& title() { return title_; }
		inline std::string const& slug() { return slug_; }
		inline auto const& codes() { return codes_; }

	private:
		std::string html_;
		std::string title_;
		std::string slug_;
		std::string hx_text_;
		std::string file_;
		std::string code_;
		std::unordered_set<std::string> slugs_;
		std::unordered_map<std::string, std::string> codes_;
		int image_nesting_level_ = 0;
		bool in_hx = false;

		std::string uniq_slug(std::string const& str);

		static int enter_block_cb(MD_BLOCKTYPE type, void* detail, void* userdata);
		static int leave_block_cb(MD_BLOCKTYPE type, void* detail, void* userdata);
		static int enter_span_cb(MD_SPANTYPE type, void* detail, void* userdata);
		static int leave_span_cb(MD_SPANTYPE type, void* detail, void* userdata);
		static int text_cb(MD_TEXTTYPE type, const MD_CHAR* text, MD_SIZE size, void* userdata);

		void render_html(const MD_CHAR* data, MD_SIZE size);
		void render_url(const MD_CHAR* data, MD_SIZE size);
		void render_attribute(const MD_ATTRIBUTE* attr, bool html);
};

} // namespace mkd

#endif /* HEADER_MKD_HPP */

