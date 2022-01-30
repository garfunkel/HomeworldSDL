python = find_program('python', required: true)

asset_homeworldsdl_big = custom_target('HomeworldSDL.big',
                                       output: 'HomeworldSDL.big',
                                       command: [python, files('generate_file_list.py'), exe_tools_biggie, '@OUTPUT@'],
                                       depends: [exe_tools_biggie])
