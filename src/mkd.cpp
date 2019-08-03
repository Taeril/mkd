#include "mkd.hpp"

#include "utils.hpp"

#include <fmt/core.h>

namespace mkd {

Parser::Parser() {
}

Parser::~Parser() {
}


std::string Parser::parse(std::string const& md) {
	MD_PARSER parser = {
		0,
		//MD_FLAG_COLLAPSEWHITESPACE | MD_DIALECT_GITHUB,
		MD_DIALECT_GITHUB,
		enter_block_cb,
		leave_block_cb,
		enter_span_cb,
		leave_span_cb,
		text_cb,
		nullptr,
		nullptr,
	};

	html_.clear();
	title_.clear();
	slug_.clear();
	image_nesting_level_ = 0;
	in_hx = false;

	if(md_parse(md.c_str(), (MD_SIZE)md.size(), &parser, this) != 0) {
		fmt::print(stderr, "md_parse failed\n"); // TODO: ...
	}

	return html_;
}


std::string Parser::uniq_slug(std::string const& str) {
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

int Parser::enter_block_cb(MD_BLOCKTYPE type, void* detail, void* userdata) {
	Parser* parser = (Parser*)userdata;

	if(type == MD_BLOCK_DOC) {
		// noop
	} else if(type == MD_BLOCK_QUOTE) {
		parser->html_.append("<blockquote>\n");
	} else if(type == MD_BLOCK_UL) {
		parser->html_.append("<ul>\n");
	} else if(type == MD_BLOCK_OL) {
		MD_BLOCK_OL_DETAIL* det = (MD_BLOCK_OL_DETAIL*)detail;

		if(det->start == 1) {
			parser->html_.append("<ol>\n");
		} else {
			parser->html_.append(fmt::format("<ol start=\"{}\">\n", det->start));
		}
	} else if(type == MD_BLOCK_LI) {
		MD_BLOCK_LI_DETAIL* det = (MD_BLOCK_LI_DETAIL*)detail;

		if(det->is_task) {
			parser->html_.append(
				"<li class=\"task-list-item\">"
				"<input type=\"checkbox\" class=\"task-list-item-checkbox\" disabled"
			);
			if(det->task_mark == 'x' || det->task_mark == 'X')
				parser->html_.append(" checked");
			parser->html_.append(">");
		} else {
			parser->html_.append("<li>");
		}
	} else if(type == MD_BLOCK_HR) {
		parser->html_.append("<hr>\n");
	} else if(type == MD_BLOCK_H) {
		parser->in_hx = true;
		parser->hx_text_.clear();
	} else if(type == MD_BLOCK_CODE) {
		MD_BLOCK_CODE_DETAIL* det = (MD_BLOCK_CODE_DETAIL*)detail;

		parser->file_ = "";
		parser->code_ = "";

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

							parser->file_ = std::string(det->info.text + start, size);

							//printf(" |%.*s|\n", p-start, det->info.text + start);
							parser->html_.append("<div class=\"file\"><a href=\"");
							parser->render_url(det->info.text + start, size);
							parser->html_.append("\">");
							parser->render_html(det->info.text + start, size);
							parser->html_.append("</a></div>\n");
						}
					}
				}
			}
		}

		parser->html_.append("<pre><code");

		//if(det->lang.text != NULL) {
		//	parser->html_.append(" class=\"language-");
		//	parser->render_attribute(&det->lang, ESCAPE_HTML);
		//	parser->html_.append("\"");
		//}

		parser->html_.append(">");
	} else if(type == MD_BLOCK_HTML) {
		// noop
	} else if(type == MD_BLOCK_P) {
		parser->html_.append("<p>");
	} else if(type == MD_BLOCK_TABLE) {
		parser->html_.append("<table>\n");
	} else if(type == MD_BLOCK_THEAD) {
		parser->html_.append("<thead>\n");
	} else if(type == MD_BLOCK_TBODY) {
		parser->html_.append("<tbody>\n");
	} else if(type == MD_BLOCK_TR) {
		parser->html_.append("<tr>\n");
	} else if(type == MD_BLOCK_TH || type == MD_BLOCK_TD) {
		MD_BLOCK_TD_DETAIL* det = (MD_BLOCK_TD_DETAIL*)detail;
		parser->html_.append("<");
		parser->html_.append(type == MD_BLOCK_TH ? "th" : "td");

		if(det->align == MD_ALIGN_LEFT) {
			parser->html_.append(" align=\"left\">");
		} else if(det->align == MD_ALIGN_CENTER) {
			parser->html_.append(" align=\"center\">");
		} else if(det->align == MD_ALIGN_RIGHT) {
			parser->html_.append(" align=\"right\">");
		} else {
			parser->html_.append(">");
		}
	}

	return 0;
}

int Parser::leave_block_cb(MD_BLOCKTYPE type, void* detail, void* userdata) {
	Parser* parser = (Parser*)userdata;

	if(type == MD_BLOCK_DOC) {
		// noop
	} else if(type == MD_BLOCK_QUOTE) {
		parser->html_.append("</blockquote>\n");
	} else if(type == MD_BLOCK_UL) {
		parser->html_.append("</ul>\n");
	} else if(type == MD_BLOCK_OL) {
		parser->html_.append("</ol>\n");
	} else if(type == MD_BLOCK_LI) {
		parser->html_.append("</li>\n");
	} else if(type == MD_BLOCK_HR) {
		// noop
	} else if(type == MD_BLOCK_H) {
		MD_BLOCK_H_DETAIL* det = (MD_BLOCK_H_DETAIL*)detail;
		const auto level = det->level;
		std::string hx_slug = parser->uniq_slug(parser->hx_text_);
		if(parser->title_.empty()) {
			parser->title_ = parser->hx_text_;
			parser->slug_ = hx_slug;
		} else {
			parser->html_.append(fmt::format("<h{} id=\"{}\">{}</h{}>\n",
				level, hx_slug, parser->hx_text_, level));
		}
		parser->in_hx = false;
	} else if(type == MD_BLOCK_CODE) {
		parser->html_.append("</code></pre>\n");

		if(!parser->file_.empty()) {
			parser->files_.emplace(parser->file_, parser->code_);
		}
	} else if(type == MD_BLOCK_HTML) {
		// noop
	} else if(type == MD_BLOCK_P) {
		parser->html_.append("</p>\n");
	} else if(type == MD_BLOCK_TABLE) {
		parser->html_.append("</table>\n");
	} else if(type == MD_BLOCK_THEAD) {
		parser->html_.append("</thead>\n");
	} else if(type == MD_BLOCK_TBODY) {
		parser->html_.append("</tbody>\n");
	} else if(type == MD_BLOCK_TR) {
		parser->html_.append("</tr>\n");
	} else if(type == MD_BLOCK_TH) {
		parser->html_.append("</th>\n");
	} else if(type == MD_BLOCK_TD) {
		parser->html_.append("</td>\n");
	}
	return 0;
}

int Parser::enter_span_cb(MD_SPANTYPE type, void* detail, void* userdata) {
	Parser* parser = (Parser*)userdata;

    if(parser->image_nesting_level_ > 0) {
    	return 0;
	}

	if(type == MD_SPAN_EM) {
		parser->html_.append("<em>");
	} else if(type == MD_SPAN_STRONG) {
		parser->html_.append("<strong>");
	} else if(type == MD_SPAN_A) {
		MD_SPAN_A_DETAIL* det = (MD_SPAN_A_DETAIL*)detail;
		parser->html_.append("<a href=\"");
		parser->render_attribute(&det->href, ESCAPE_URL);

		if(det->title.text != NULL) {
			parser->html_.append("\" title=\"");
			parser->render_attribute(&det->title, ESCAPE_HTML);
		}

		parser->html_.append("\">");
	} else if(type == MD_SPAN_IMG) {
		MD_SPAN_IMG_DETAIL* det = (MD_SPAN_IMG_DETAIL*)detail;

		parser->html_.append("<img src=\"");
		parser->render_attribute(&det->src, ESCAPE_URL);

		parser->html_.append("\" alt=\"");

		++parser->image_nesting_level_;
	} else if(type == MD_SPAN_CODE) {
		parser->html_.append("<code>");
	} else if(type == MD_SPAN_DEL) {
		parser->html_.append("<del>");
	}

	return 0;
}

int Parser::leave_span_cb(MD_SPANTYPE type, void* detail, void* userdata) {
	Parser* parser = (Parser*)userdata;

    if(parser->image_nesting_level_ > 0) {
    	if(parser->image_nesting_level_ == 1 && type == MD_SPAN_IMG) {
			MD_SPAN_IMG_DETAIL* det = (MD_SPAN_IMG_DETAIL*)detail;
			if(det->title.text != NULL) {
				parser->html_.append("\" title=\"");
				parser->render_attribute(&det->title, ESCAPE_HTML);
			}

			parser->html_.append("\">");

			--parser->image_nesting_level_;
		}

    	return 0;
	}

	if(type == MD_SPAN_EM) {
		parser->html_.append("</em>");
	} else if(type == MD_SPAN_STRONG) {
		parser->html_.append("</strong>");
	} else if(type == MD_SPAN_A) {
		parser->html_.append("</a>");
	} else if(type == MD_SPAN_IMG) {
		// noop
	} else if(type == MD_SPAN_CODE) {
		parser->html_.append("</code>");
	} else if(type == MD_SPAN_DEL) {
		parser->html_.append("</del>");
	}

	return 0;
}

int Parser::text_cb(MD_TEXTTYPE type, const MD_CHAR* text, MD_SIZE size, void* userdata) {
	Parser* parser = (Parser*)userdata;

	if(type != MD_TEXT_NULLCHAR && parser->in_hx) {
		if(type == MD_TEXT_BR || type == MD_TEXT_SOFTBR) {
			parser->hx_text_.append(" ");
		} else {
			parser->hx_text_.append(text, size);
		}
		return 0;
	}

	if(type == MD_TEXT_NULLCHAR) {
		// noop
	} else if(type == MD_TEXT_BR) {
		parser->html_.append(parser->image_nesting_level_ == 0 ? "<br>\n" : " ");
	} else if(type == MD_TEXT_SOFTBR) {
		parser->html_.append(parser->image_nesting_level_ == 0 ? "\n" : " ");
	} else if(type == MD_TEXT_HTML) {
		parser->html_.append(text, size);
	} else if(type == MD_TEXT_ENTITY) {
		parser->render_html(text, size);
	} else {
		if(type == MD_TEXT_CODE) {
			parser->code_.append(text, size);
		}
		parser->render_html(text, size);
	}
	return 0;
}

#define ISDIGIT(ch) ('0' <= (ch) && (ch) <= '9')
#define ISLOWER(ch) ('a' <= (ch) && (ch) <= 'z')
#define ISUPPER(ch) ('A' <= (ch) && (ch) <= 'Z')
#define ISALNUM(ch) (ISLOWER(ch) || ISUPPER(ch) || ISDIGIT(ch))

#define HTML_NEED_ESCAPE(ch) ((ch) == '&' || (ch) == '<' || (ch) == '>' || (ch) == '"')
#define URL_NEED_ESCAPE(ch) (!ISALNUM(ch) && strchr("-_.+!*'(),%#@?=;:/,+$", ch) == NULL)

void Parser::render_html(const MD_CHAR* data, MD_SIZE size) {
	MD_OFFSET beg = 0;
	MD_OFFSET off = 0;

	while(1) {
		while(off < size && !HTML_NEED_ESCAPE(data[off])) {
			++off;
		}
		if(off > beg) {
			html_.append(data+beg, off-beg);
		}

		if(off < size) {
			switch(data[off]) {
				case '&': html_.append("&amp;"); break;
				case '<': html_.append("&lt;"); break;
				case '>': html_.append("&gt;"); break;
				case '"': html_.append("&quot;"); break;
			}
			++off;
		} else {
			break;
		}
		beg = off;
	}
}

void Parser::render_url(const MD_CHAR* data, MD_SIZE size) {
	static const MD_CHAR hex_chars[] = "0123456789ABCDEF";
	MD_OFFSET beg = 0;
	MD_OFFSET off = 0;

	while(1) {
		while(off < size && !URL_NEED_ESCAPE(data[off])) {
			++off;
		}
		if(off > beg) {
			html_.append(data + beg, off - beg);
		}

		if(off < size) {
			char hex[3];

			switch(data[off]) {
				case '&':   html_.append("&amp;"); break;
				case '\'':  html_.append("&#x27;"); break;
				default:
					hex[0] = '%';
					hex[1] = hex_chars[((unsigned)data[off] >> 4) & 0xf];
					hex[2] = hex_chars[((unsigned)data[off] >> 0) & 0xf];
					html_.append(hex, 3);
					break;
			}
			++off;
		} else {
			break;
		}

		beg = off;
	}
}

void Parser::render_attribute(const MD_ATTRIBUTE* attr, bool html) {
	for(int i = 0; attr->substr_offsets[i] < attr->size; ++i) {
		MD_TEXTTYPE type = attr->substr_types[i];
		MD_OFFSET off = attr->substr_offsets[i];
		MD_SIZE size = attr->substr_offsets[i+1] - off;
		const MD_CHAR* text = attr->text + off;

		//MD_TEXT_NULLCHAR
		if(type == MD_TEXT_ENTITY) {
			html_.append(text, size);
		} else {
			if(html) {
				render_html(text, size);
			} else {
				render_url(text, size);
			}
		}
	}
}


} // namespace mkd

