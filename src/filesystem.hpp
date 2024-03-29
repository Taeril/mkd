#ifndef HEADER_FILESYSTEM_HPP
#define HEADER_FILESYSTEM_HPP

#if __has_include(<filesystem>)
#include <filesystem>
namespace fs = std::filesystem;
#elif __has_include(<experimental/filesystem>)
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#else
#error "Missing <filesystem> implementation"
#endif

#endif /* HEADER_FILESYSTEM_HPP */

