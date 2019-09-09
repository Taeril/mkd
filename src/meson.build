
ver_arr = meson.project_version().split('.')
ver_data = configuration_data({
  'VERSION': meson.project_version(),
  'VERSION_MAJOR': ver_arr[0],
  'VERSION_MINOR': ver_arr[1],
  'VERSION_PATCH': ver_arr[2],
})
configure_file(
  input : 'version.hpp.in',
  output : 'version.hpp',
  configuration : ver_data
)

prog_python = import('python').find_installation('python3')
bin2h_py = join_paths(meson.current_source_dir(), 'bin2h.py')

mark_vim = join_paths(meson.current_source_dir(), 'mark.vim')
configure_file(
  output: 'mark_vim.h',
  command: [prog_python, bin2h_py, '-i', mark_vim, '-o', 'mark_vim.h', '-n', 'mark_vim'],
)


md4c_lib = static_library('md4c', ['md4c/md4c.c'],
  #install : true,
  gnu_symbol_visibility : 'hidden',
  include_directories: '.',
  override_options: ['warning_level=1', 'c_std=c99'],
)


sources = files([
  'vim_highlight.cpp',
  'utils.cpp',
  'mkd.cpp',
])

mkd_lib = static_library('mkd', sources,
  install : true,
  gnu_symbol_visibility : 'hidden',
  dependencies: fmt_dep,
  #link_with: md4c_lib,
  objects: md4c_lib.extract_all_objects(),
  include_directories: [mkd_inc, '../include/mkd'],
)

mkd_dep = declare_dependency(
  link_with: mkd_lib,
  include_directories: mkd_inc,
)


pkg = import('pkgconfig')
pkg.generate(
  name : meson.project_name(),
  filebase : meson.project_name(),
  description : 'Simple markdown parser',
  subdirs : '.',
  libraries : mkd_lib,
  version : meson.project_version(),
)



mkd_exe = executable('mkd', ['main.cpp'],
  gnu_symbol_visibility : 'hidden',
  dependencies: [fmt_dep, mkd_dep],
  include_directories: '.',
)


