#ifndef HEADER_MKD_HPP
#define HEADER_MKD_HPP

#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <memory>

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
		inline auto const& files() { return files_; }

		void vim_exe(std::string const& path);
		void vim_cmd(std::vector<std::string> const& cmd);

	private:
		std::string html_;
		std::string title_;
		std::string slug_;

		std::unordered_map<std::string, std::string> codes_;
		std::unordered_set<std::string> files_;

		class Impl;
		std::unique_ptr<Impl> impl;
		friend class Impl;
};

} // namespace mkd

#endif /* HEADER_MKD_HPP */

