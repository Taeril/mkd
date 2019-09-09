#include "vim_highlight.hpp"

#include <algorithm>
#include <fstream>
#include <iterator>

#include <cstdlib>
#include <ctime>

#include "filesystem.hpp"

#include <fmt/core.h>

#include <unistd.h>
#include <sys/wait.h>

namespace {

#include "mark_vim.h"

std::string read_file(std::string const& path) {
    std::ifstream file(path, std::ios::binary);
    return std::string(std::istreambuf_iterator{file}, {});
}

void write_file(std::string const& path, std::string const& data) {
	std::ofstream out(path);
	out.write(data.c_str(), data.size());
}


std::string temp_file(std::string const& name) {
	static size_t n = 0;
	time_t ctime = std::time(nullptr);

	// based on http://xorshift.di.unimi.it/splitmix64.c
	static uint64_t s = std::time(nullptr) ^ std::clock();
	uint64_t z = (s += 0x9e3779b97f4a7c15);
	z = (z ^ (z >> 30)) * 0xbf58476d1ce4e5b9;
	z = (z ^ (z >> 27)) * 0x94d049bb133111eb;
	z =  z ^ (z >> 31);

	return fs::temp_directory_path() / fmt::format("{}-{:X}{:X}{:X}{:X}{:X}{:X}",
		name, getppid(), getpid(), ctime, std::clock(), z, ++n
	);
}


struct TempFile {
	std::string path;
	TempFile(std::string const& name) : path(temp_file(name)) {
	}
	TempFile(TempFile&& tf) {
		std::swap(path, tf.path);
	}
	~TempFile() {
		if(!path.empty()) {
			fs::remove(path);
		}
	}
};


TempFile make_script() {
	TempFile vim("mkd-vim");
	write_file(vim.path, mark_vim);
	return vim;
}

static const TempFile vim(std::move(make_script()));
std::string const& vim_script() {
	return vim.path;
}

} // namespace

namespace mkd {

std::string VimHighlight::highlight(std::string const& code, std::string type) {
	TempFile in("mkd-in");;
	TempFile out("mkd-out");;
	write_file(in.path, code);
	
	auto pid = fork();
	if(pid < 0) {
		perror("fork");
		exit(1);
	} else if(pid == 0) {
		// child
		std::vector<char*> argv(cmd_.size() + 4);
		std::transform(cmd_.begin(), cmd_.end(), argv.begin(),
			[](std::string const& s) { return const_cast<char*>(s.data()); }
		);

		// exe
		if(!exe_.empty()) {
			argv[0] = exe_.data();
		}

		// so %
		std::string so = "+so %";
		argv[cmd_.size()] = so.data();

		// call
		std::string call = fmt::format("+call File2HTML(\"{}\", \"{}\", \"{}\")",
			in.path, type, out.path
		);
		argv[cmd_.size()+1] = call.data();

		// .vim
		argv[cmd_.size()+2] = const_cast<char*>(vim_script().data());

		// null
		argv.back() = nullptr;

		execvp(argv[0], argv.data());
		perror("execvp");
		exit(1);
	} else {
		// parent
		int wstatus;
		do {
			pid_t w = waitpid(pid, &wstatus, 0);
			if(w < 0) {
				perror("waitpid");
				exit(1);
			}
		} while(!WIFEXITED(wstatus) && WIFSIGNALED(wstatus));

		return read_file(out.path);
	}
}

void VimHighlight::vim_exe(std::string const& path) {
	exe_ = path;
}
void VimHighlight::vim_cmd(std::vector<std::string> cmd) {
	cmd_ = cmd;
}

} // namespace mkd

