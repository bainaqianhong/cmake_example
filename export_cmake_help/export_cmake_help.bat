@echo off

cmake --help-properties >> cmake_help_properties.txt
cmake --help-property-list >> cmake_help_property_list.txt


cmake --help-variables >> cmake_help_variables.txt
cmake --help-variable-list >> cmake_help_variable_list.txt

cmake --help-commands >> cmake_help_commands.txt
cmake --help-command-list >> cmake_help_command_list.txt