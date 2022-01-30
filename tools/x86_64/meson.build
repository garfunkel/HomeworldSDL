exe_tools_x86_64 = []

exe_tools_x86_64 += executable('bank',
                               include_directories: inc_src,
							   implicit_include_directories: true,
							   dependencies: dep_sdl,
							   c_args: c_args,
							   sources: ['bank.c', 'file.c'])

exe_tools += exe_tools_x86_64
