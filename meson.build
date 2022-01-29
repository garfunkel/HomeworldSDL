project('homeworld',
        'c',
	    version: '0.1',
		default_options: ['warning_level=3'])

c_args = ['-DHW_GAME_HOMEWORLD', '-DHW_BUILD_FOR_DISTRIBUTION']
c_args += ['-DHAVE_CONFIG_H', '-D_REENTRANT']
#c_args += ['-DGENERIC_ETGCALLFUNCTION']
#c_args += '-Wno-unused-variable'
#c_args += '-Wno-unused-parameter'
c_args += '-w'

if build_machine.cpu_family() == 'x86_64'
	c_args += ['-D_X86_64', '-D_X86_64_FIX_ME']
elif build_machine.cpu_family() == 'x86'
	c_args += ['-malign-double', '-D_X86', '-msse']
elif build_machine.cpu_family() in ['arm', 'aarch64']
	c_args += ['-DARM', '-DGENERIC_ETGCALLFUNCTION']
endif

if build_machine.system() == 'linux'
	c_args += ['-D_LINUX_FIX_ME']
elif build_machine.system() == 'darwin'

elif build_machine.system() == 'windows'

endif

dep_x11 = dependency('x11')
dep_gl = dependency('gl')
dep_sdl = dependency('sdl2')
dep_math = meson.get_compiler('c').find_library('m', required : false)
deps = [dep_x11, dep_gl, dep_sdl, dep_math]

subdir('tools')
subdir('src')

inc_src = include_directories('src/Game',
                              'src/Ships',
                              'src/SDL',
							  'src/ThirdParty/CRC',
							  'src/ThirdParty/LZSS',
							  'src/ThirdParty/Titan',
							  'src/ThirdParty/JPG')

executable(meson.project_name(),
           src,
		   include_directories: inc_src,
		   link_with: [lib_jpg, lib_sdl],
		   dependencies: deps,
		   c_args: c_args,
           install: true)
