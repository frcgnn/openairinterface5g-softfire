# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai/build

# Utility rule file for openair_rf.

# Include the progress variables for this target.
include CMakeFiles/openair_rf.dir/progress.make

CMakeFiles/openair_rf: openair_rf.ko

openair_rf.ko:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold /home/kote/openairinterface5g-91d8c892/targets/ARCH/EXMIMO/DRIVER/eurecom/exmimo_fw.c
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai/build/CMakeFiles/openair_rf && make -C /lib/modules/3.19.0-18-lowlatency/build M=/home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai/build/CMakeFiles/openair_rf

openair_rf: CMakeFiles/openair_rf
openair_rf: openair_rf.ko
openair_rf: CMakeFiles/openair_rf.dir/build.make
.PHONY : openair_rf

# Rule to build all files generated by this target.
CMakeFiles/openair_rf.dir/build: openair_rf
.PHONY : CMakeFiles/openair_rf.dir/build

CMakeFiles/openair_rf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/openair_rf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/openair_rf.dir/clean

CMakeFiles/openair_rf.dir/depend:
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai/build /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai/build /home/kote/openairinterface5g-91d8c892/cmake_targets/lte_build_oai/build/CMakeFiles/openair_rf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/openair_rf.dir/depend

