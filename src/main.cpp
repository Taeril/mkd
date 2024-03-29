#include <fmt/core.h>

#include <mkd/mkd.hpp>

#include <string>
#include <fstream>
#include <iterator>

std::string read_file(std::string const& path) {
    std::ifstream file(path, std::ios::binary);
    return std::string(std::istreambuf_iterator{file}, {});
}


void hr() {
    for(size_t n=0; n < 80; ++n) fmt::print("-");
	fmt::print("\n");
}

int main(int argc, char** argv) {
	if(argc < 2) {
		fmt::print(stderr, "usage: {} FILE.md\n", argv[0]);
		return 1;
	}

	std::string md = read_file(argv[1]);

	mkd::Parser parser;

	std::string html = parser.parse(md);


	hr();
	fmt::print("{}\n", md);
	hr();
	fmt::print("{}\n", html);
	hr();
	fmt::print("title: {}\n", parser.title());
	fmt::print(" slug: {}\n", parser.slug());
	fmt::print("codes: {}\n", parser.codes().size());
	fmt::print("files: {}\n", parser.files().size());
	hr();
	for(auto const& p : parser.files()) {
		fmt::print("file: {}\n", p);
	}
	hr();

	for(auto const& p : parser.codes()) {
		fmt::print("code -> file: {}\n{}\n", p.first, p.second);
		hr();
	}

	return 0;
}
