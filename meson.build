project('mkd', ['cpp', 'c'],
  version: '1.0.0',
  license: 'MIT', 
  default_options: ['warning_level=3', 'cpp_std=c++17']
)

cpp = meson.get_compiler('cpp')
if cpp.get_argument_syntax() == 'gcc'
  add_project_arguments('-Wconversion', language: 'cpp')

  # TODO: handle linking requirements
  # GNU implementation requires linking with -lstdc++fs
  add_project_link_arguments('-lstdc++fs', language : 'cpp')
  # LLVM implementation requires linking with -lc++fs
  #add_project_arguments(['-stdlib=libc++'], language : 'cpp')
  #add_project_link_arguments(['-stdlib=libc++','-lstdc++fs'], language : 'cpp')
endif

#fmt_dep = dependency('fmt')
# mkdir subprojects && meson wrap install fmt
fmt_dep = dependency('fmt', fallback: ['fmt', 'fmt_dep'])

if(get_option('use_vim'))
  add_project_arguments('-DUSE_VIM')
endif

subdir('include')
subdir('src')

