#ifndef HEADER_VIM_HIGHLIGHT_HPP
#define HEADER_VIM_HIGHLIGHT_HPP

#include <string>
#include <vector>

namespace mkd {

class VimHighlight {
	public:
		std::string highlight(std::string const& code, std::string type="text");

		void vim_exe(std::string const& path);
		void vim_cmd(std::vector<std::string> cmd);
	private:
		std::vector<std::string> cmd_ = {
#ifdef USE_VIM
			"vim", "-RXZ", "-i", "NONE", "-u", "NONE", "-N", "-n"
#else
			"nvim", "--headless", "-es", "-RZ", "-i", "NONE", "-u", "NONE", "-N", "-n"
#endif
		};
		std::string exe_;
};

} // namespace mkd

#endif /* HEADER_VIM_HIGHLIGHT_HPP */

