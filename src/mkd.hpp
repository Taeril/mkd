#ifndef HEADER_MKD_HPP
#define HEADER_MKD_HPP

#include <string>
#include <unordered_set>

#include "md4c/md4c.h"

namespace mkd {

class Parser {
	public:
		Parser();
		~Parser();

		std::string parse(std::string const& md);

		inline std::string const& html() { return html_; }
	private:
		std::string html_;
		int image_nesting_level_ = 0;

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

