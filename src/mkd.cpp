#include "mkd.hpp"

#include "md4c/md4c.h"

#include "utils.hpp"

#include <fmt/core.h>

namespace mkd {

std::string attribute_to_string(const MD_ATTRIBUTE* attr);

class Parser::Impl {
	public:
		Impl(Parser* parser);
		~Impl();

		Parser* parser;

		std::string hx_text_;
		std::string file_;
		std::string code_;
		std::unordered_set<std::string> slugs_;
		int image_nesting_level_ = 0;
		bool in_hx = false;

		std::string uniq_slug(std::string const& str);

		static int enter_block_cb(MD_BLOCKTYPE type, void* detail, void* userdata);
		static int leave_block_cb(MD_BLOCKTYPE type, void* detail, void* userdata);
		static int enter_span_cb(MD_SPANTYPE type, void* detail, void* userdata);
		static int leave_span_cb(MD_SPANTYPE type, void* detail, void* userdata);
		static int text_cb(MD_TEXTTYPE type, const MD_CHAR* text, MD_SIZE size, void* userdata);

		void render_html(const char* data, size_t size);
		void render_url(const char* data, size_t size);

		inline void append_html(const char* text, size_t size) {
			parser->html_.append(text, size);
		}
		inline void append_html(const char* text) {
			parser->html_.append(text);
		}
		inline void append_html(std::string const& text) {
			parser->html_.append(text);
		}

		std::string render_attribute(const MD_ATTRIBUTE* attr, bool html);
};


Parser::Parser() : impl(std::make_unique<Impl>(this)) {
}

Parser::~Parser() {
}


std::string Parser::parse(std::string const& md) {
	MD_PARSER parser = {
		0,
		//MD_FLAG_COLLAPSEWHITESPACE | MD_DIALECT_GITHUB,
		MD_DIALECT_GITHUB,
		Impl::enter_block_cb,
		Impl::leave_block_cb,
		Impl::enter_span_cb,
		Impl::leave_span_cb,
		Impl::text_cb,
		nullptr,
		nullptr,
	};

	html_.clear();
	title_.clear();
	slug_.clear();

	if(md_parse(md.c_str(), (MD_SIZE)md.size(), &parser, this) != 0) {
		fmt::print(stderr, "md_parse failed\n"); // TODO: ...
	}

	return html_;
}

Parser::Impl::Impl(Parser* parser) :
	parser(parser),
	image_nesting_level_(0),
	in_hx(false) {
}

Parser::Impl::~Impl() {
}

std::string Parser::Impl::uniq_slug(std::string const& str) {
	std::string test_slug = slugify(str);
	std::string base_slug(test_slug);

	auto p = slugs_.find(test_slug);
	size_t ver = 1;
	while(p != slugs_.end()) {
		++ver;

		test_slug = fmt::format("{}-{}", base_slug, ver);
		p = slugs_.find(test_slug);
	}

	slugs_.insert(test_slug);

	return test_slug;
}

#define ESCAPE_HTML true
#define ESCAPE_URL  false

int Parser::Impl::enter_block_cb(MD_BLOCKTYPE type, void* detail, void* userdata) {
	Parser* parser = (Parser*)userdata;

	if(type == MD_BLOCK_DOC) {
		// noop
	} else if(type == MD_BLOCK_QUOTE) {
		parser->impl->append_html("<blockquote>\n");
	} else if(type == MD_BLOCK_UL) {
		parser->impl->append_html("<ul>\n");
	} else if(type == MD_BLOCK_OL) {
		MD_BLOCK_OL_DETAIL* det = (MD_BLOCK_OL_DETAIL*)detail;

		if(det->start == 1) {
			parser->impl->append_html("<ol>\n");
		} else {
			parser->impl->append_html(fmt::format("<ol start=\"{}\">\n", det->start));
		}
	} else if(type == MD_BLOCK_LI) {
		MD_BLOCK_LI_DETAIL* det = (MD_BLOCK_LI_DETAIL*)detail;

		if(det->is_task) {
			parser->impl->append_html(
				"<li class=\"task-list-item\">"
				"<input type=\"checkbox\" class=\"task-list-item-checkbox\" disabled"
			);
			if(det->task_mark == 'x' || det->task_mark == 'X')
				parser->impl->append_html(" checked");
			parser->impl->append_html(">");
		} else {
			parser->impl->append_html("<li>");
		}
	} else if(type == MD_BLOCK_HR) {
		parser->impl->append_html("<hr>\n");
	} else if(type == MD_BLOCK_H) {
		parser->impl->in_hx = true;
		parser->impl->hx_text_.clear();
	} else if(type == MD_BLOCK_CODE) {
		MD_BLOCK_CODE_DETAIL* det = (MD_BLOCK_CODE_DETAIL*)detail;

		parser->impl->file_ = "";
		parser->impl->code_ = "";

		if(det->info.size > 0) {
			int s = 0;
			int fpos = 0;
			const char file[] = "file=";

			MD_SIZE start = 0;
			MD_SIZE size = 0;
			for(MD_SIZE p=0; p <= det->info.size; ++p) {
				char c = det->info.text[p];
				if(s == 0) {
					fpos = 0;
					start = 0;
					size = 0;
					if(c == file[0]) {
						s = 1;
					}
				} else if(s == 1) {
					++fpos;
					if(file[fpos] == '\0') {
						start = p;
						s = 2;
					} else if(c != file[fpos]) {
						s = 0;
					}
				} else if(s == 2) {
					if(c == ' ' || c == '\n' || c == '\t') {
						if(p > start) {
							s = 3; // END
							size = p - start;

							parser->impl->file_ = std::string(det->info.text + start, size);

							//printf(" |%.*s|\n", p-start, det->info.text + start);
							parser->impl->append_html("<div class=\"file\"><a href=\"");
							parser->impl->render_url(det->info.text + start, size);
							parser->impl->append_html("\">");
							parser->impl->render_html(det->info.text + start, size);
							parser->impl->append_html("</a></div>\n");
						}
					}
				}
			}
		}

		parser->impl->append_html("<pre><code");

		//if(det->lang.text != NULL) {
		//	parser->impl->append_html(" class=\"language-");
		//	parser->impl->append_html(parser->impl->render_attribute(&det->lang, ESCAPE_HTML));
		//	parser->impl->append_html("\"");
		//}

		parser->impl->append_html(">");
	} else if(type == MD_BLOCK_HTML) {
		// noop
	} else if(type == MD_BLOCK_P) {
		parser->impl->append_html("<p>");
	} else if(type == MD_BLOCK_TABLE) {
		parser->impl->append_html("<table>\n");
	} else if(type == MD_BLOCK_THEAD) {
		parser->impl->append_html("<thead>\n");
	} else if(type == MD_BLOCK_TBODY) {
		parser->impl->append_html("<tbody>\n");
	} else if(type == MD_BLOCK_TR) {
		parser->impl->append_html("<tr>\n");
	} else if(type == MD_BLOCK_TH || type == MD_BLOCK_TD) {
		MD_BLOCK_TD_DETAIL* det = (MD_BLOCK_TD_DETAIL*)detail;
		parser->impl->append_html("<");
		parser->impl->append_html(type == MD_BLOCK_TH ? "th" : "td");

		if(det->align == MD_ALIGN_LEFT) {
			parser->impl->append_html(" align=\"left\">");
		} else if(det->align == MD_ALIGN_CENTER) {
			parser->impl->append_html(" align=\"center\">");
		} else if(det->align == MD_ALIGN_RIGHT) {
			parser->impl->append_html(" align=\"right\">");
		} else {
			parser->impl->append_html(">");
		}
	}

	return 0;
}

int Parser::Impl::leave_block_cb(MD_BLOCKTYPE type, void* detail, void* userdata) {
	Parser* parser = (Parser*)userdata;

	if(type == MD_BLOCK_DOC) {
		// noop
	} else if(type == MD_BLOCK_QUOTE) {
		parser->impl->append_html("</blockquote>\n");
	} else if(type == MD_BLOCK_UL) {
		parser->impl->append_html("</ul>\n");
	} else if(type == MD_BLOCK_OL) {
		parser->impl->append_html("</ol>\n");
	} else if(type == MD_BLOCK_LI) {
		parser->impl->append_html("</li>\n");
	} else if(type == MD_BLOCK_HR) {
		// noop
	} else if(type == MD_BLOCK_H) {
		MD_BLOCK_H_DETAIL* det = (MD_BLOCK_H_DETAIL*)detail;
		const auto level = det->level;
		std::string hx_slug = parser->impl->uniq_slug(parser->impl->hx_text_);
		if(parser->title_.empty()) {
			parser->title_ = parser->impl->hx_text_;
			parser->slug_ = hx_slug;
		} else {
			parser->impl->append_html(fmt::format("<h{} id=\"{}\">{}</h{}>\n",
				level, hx_slug, parser->impl->hx_text_, level));
		}
		parser->impl->in_hx = false;
	} else if(type == MD_BLOCK_CODE) {
		// TODO: pass code_ through syntax highlighter
		parser->impl->render_html(
			parser->impl->code_.c_str(),
			static_cast<MD_SIZE>(parser->impl->code_.size())
		);

		parser->impl->append_html("</code></pre>\n");

		if(!parser->impl->file_.empty()) {
			parser->codes_.emplace(parser->impl->file_, parser->impl->code_);
		}
	} else if(type == MD_BLOCK_HTML) {
		// noop
	} else if(type == MD_BLOCK_P) {
		parser->impl->append_html("</p>\n");
	} else if(type == MD_BLOCK_TABLE) {
		parser->impl->append_html("</table>\n");
	} else if(type == MD_BLOCK_THEAD) {
		parser->impl->append_html("</thead>\n");
	} else if(type == MD_BLOCK_TBODY) {
		parser->impl->append_html("</tbody>\n");
	} else if(type == MD_BLOCK_TR) {
		parser->impl->append_html("</tr>\n");
	} else if(type == MD_BLOCK_TH) {
		parser->impl->append_html("</th>\n");
	} else if(type == MD_BLOCK_TD) {
		parser->impl->append_html("</td>\n");
	}
	return 0;
}

int Parser::Impl::enter_span_cb(MD_SPANTYPE type, void* detail, void* userdata) {
	Parser* parser = (Parser*)userdata;

    if(parser->impl->image_nesting_level_ > 0) {
    	return 0;
	}

	if(type == MD_SPAN_EM) {
		parser->impl->append_html("<em>");
	} else if(type == MD_SPAN_STRONG) {
		parser->impl->append_html("<strong>");
	} else if(type == MD_SPAN_A) {
		MD_SPAN_A_DETAIL* det = (MD_SPAN_A_DETAIL*)detail;
		parser->impl->append_html("<a href=\"");
		parser->impl->append_html(parser->impl->render_attribute(&det->href, ESCAPE_URL));

		auto url = attribute_to_string(&det->href);
		if(url.find("://") == std::string::npos) {
			parser->files_.insert(url);
		}

		if(det->title.text != NULL) {
			parser->impl->append_html("\" title=\"");
			parser->impl->append_html(parser->impl->render_attribute(&det->title, ESCAPE_HTML));
		}

		parser->impl->append_html("\">");
	} else if(type == MD_SPAN_IMG) {
		MD_SPAN_IMG_DETAIL* det = (MD_SPAN_IMG_DETAIL*)detail;

		parser->impl->append_html("<img src=\"");
		parser->impl->append_html(parser->impl->render_attribute(&det->src, ESCAPE_URL));

		auto url = attribute_to_string(&det->src);
		if(url.find("://") == std::string::npos) {
			parser->files_.insert(url);
		}
		parser->impl->append_html("\" alt=\"");

		++parser->impl->image_nesting_level_;
	} else if(type == MD_SPAN_CODE) {
		parser->impl->append_html("<code>");
	} else if(type == MD_SPAN_DEL) {
		parser->impl->append_html("<del>");
	}

	return 0;
}

int Parser::Impl::leave_span_cb(MD_SPANTYPE type, void* detail, void* userdata) {
	Parser* parser = (Parser*)userdata;

    if(parser->impl->image_nesting_level_ > 0) {
		if(parser->impl->image_nesting_level_ == 1 && type == MD_SPAN_IMG) {
			MD_SPAN_IMG_DETAIL* det = (MD_SPAN_IMG_DETAIL*)detail;
			if(det->title.text != NULL) {
				parser->impl->append_html("\" title=\"");
				parser->impl->append_html(parser->impl->render_attribute(&det->title, ESCAPE_HTML));
			}

			parser->impl->append_html("\">");

			--parser->impl->image_nesting_level_;
		}

    	return 0;
	}

	if(type == MD_SPAN_EM) {
		parser->impl->append_html("</em>");
	} else if(type == MD_SPAN_STRONG) {
		parser->impl->append_html("</strong>");
	} else if(type == MD_SPAN_A) {
		parser->impl->append_html("</a>");
	} else if(type == MD_SPAN_IMG) {
		// noop
	} else if(type == MD_SPAN_CODE) {
		parser->impl->append_html("</code>");
	} else if(type == MD_SPAN_DEL) {
		parser->impl->append_html("</del>");
	}

	return 0;
}

int Parser::Impl::text_cb(MD_TEXTTYPE type, const MD_CHAR* text, MD_SIZE size, void* userdata) {
	Parser* parser = (Parser*)userdata;

	if(type != MD_TEXT_NULLCHAR && parser->impl->in_hx) {
		if(type == MD_TEXT_BR || type == MD_TEXT_SOFTBR) {
			parser->impl->hx_text_.append(" ");
		} else {
			parser->impl->hx_text_.append(text, size);
		}
		return 0;
	}

	if(type == MD_TEXT_NULLCHAR) {
		// noop
	} else if(type == MD_TEXT_BR) {
		parser->impl->append_html(parser->impl->image_nesting_level_ == 0 ? "<br>\n" : " ");
	} else if(type == MD_TEXT_SOFTBR) {
		parser->impl->append_html(parser->impl->image_nesting_level_ == 0 ? "\n" : " ");
	} else if(type == MD_TEXT_HTML) {
		parser->impl->append_html(text, size);
	} else if(type == MD_TEXT_ENTITY) {
		parser->impl->render_html(text, size);
	} else if(type == MD_TEXT_CODE) {
		parser->impl->code_.append(text, size);
	} else {
		parser->impl->render_html(text, size);
	}
	return 0;
}



#define ISDIGIT(ch) ('0' <= (ch) && (ch) <= '9')
#define ISLOWER(ch) ('a' <= (ch) && (ch) <= 'z')
#define ISUPPER(ch) ('A' <= (ch) && (ch) <= 'Z')
#define ISALNUM(ch) (ISLOWER(ch) || ISUPPER(ch) || ISDIGIT(ch))

#define HTML_NEED_ESCAPE(ch) ((ch) == '&' || (ch) == '<' || (ch) == '>' || (ch) == '"')
#define URL_NEED_ESCAPE(ch) (!ISALNUM(ch) && strchr("-_.+!*'(),%#@?=;:/,+$", ch) == NULL)

void Parser::Impl::render_html(const char* data, size_t size) {
	MD_OFFSET beg = 0;
	MD_OFFSET off = 0;

	while(1) {
		while(off < size && !HTML_NEED_ESCAPE(data[off])) {
			++off;
		}
		if(off > beg) {
			append_html(data+beg, off-beg);
		}

		if(off < size) {
			switch(data[off]) {
				case '&': append_html("&amp;"); break;
				case '<': append_html("&lt;"); break;
				case '>': append_html("&gt;"); break;
				case '"': append_html("&quot;"); break;
			}
			++off;
		} else {
			break;
		}
		beg = off;
	}
}

void Parser::Impl::render_url(const char* data, size_t size) {
	static const MD_CHAR hex_chars[] = "0123456789ABCDEF";
	MD_OFFSET beg = 0;
	MD_OFFSET off = 0;

	while(1) {
		while(off < size && !URL_NEED_ESCAPE(data[off])) {
			++off;
		}
		if(off > beg) {
			append_html(data + beg, off - beg);
		}

		if(off < size) {
			char hex[3];

			switch(data[off]) {
				case '&':   append_html("&amp;"); break;
				case '\'':  append_html("&#x27;"); break;
				default:
					hex[0] = '%';
					hex[1] = hex_chars[((unsigned)data[off] >> 4) & 0xf];
					hex[2] = hex_chars[((unsigned)data[off] >> 0) & 0xf];
					append_html(hex, 3);
					break;
			}
			++off;
		} else {
			break;
		}

		beg = off;
	}
}

std::string Parser::Impl::render_attribute(const MD_ATTRIBUTE* attr, bool html) {
	std::string ret;

	for(int i = 0; attr->substr_offsets[i] < attr->size; ++i) {
		MD_TEXTTYPE type = attr->substr_types[i];
		MD_OFFSET off = attr->substr_offsets[i];
		MD_SIZE size = attr->substr_offsets[i+1] - off;
		const MD_CHAR* text = attr->text + off;

		//MD_TEXT_NULLCHAR
		if(type == MD_TEXT_ENTITY) {
			append_html(text, size);
		} else {
			if(html) {
				render_html(text, size);
			} else {
				render_url(text, size);
			}
		}
	}

	return ret;
}

std::string attribute_to_string(const MD_ATTRIBUTE* attr) {
	std::string ret;
	for(int i = 0; attr->substr_offsets[i] < attr->size; ++i) {
		MD_OFFSET off = attr->substr_offsets[i];
		MD_SIZE size = attr->substr_offsets[i+1] - off;
		const MD_CHAR* text = attr->text + off;

		ret.append(text, size);
	}

	return ret;
}

} // namespace mkd

