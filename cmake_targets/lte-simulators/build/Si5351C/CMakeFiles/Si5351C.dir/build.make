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
CMAKE_SOURCE_DIR = /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build

# Include any dependencies generated for this target.
include Si5351C/CMakeFiles/Si5351C.dir/depend.make

# Include the progress variables for this target.
include Si5351C/CMakeFiles/Si5351C.dir/progress.make

# Include the compile flags for this target's objects.
include Si5351C/CMakeFiles/Si5351C.dir/flags.make

Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o: Si5351C/CMakeFiles/Si5351C.dir/flags.make
Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o: /home/kote/openairinterface5g-91d8c892/targets/ARCH/LMSSDR/USERSPACE/LIB/Si5351C/Si5351C.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o"
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/Si5351C && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Si5351C.dir/Si5351C.cpp.o -c /home/kote/openairinterface5g-91d8c892/targets/ARCH/LMSSDR/USERSPACE/LIB/Si5351C/Si5351C.cpp

Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Si5351C.dir/Si5351C.cpp.i"
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/Si5351C && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kote/openairinterface5g-91d8c892/targets/ARCH/LMSSDR/USERSPACE/LIB/Si5351C/Si5351C.cpp > CMakeFiles/Si5351C.dir/Si5351C.cpp.i

Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Si5351C.dir/Si5351C.cpp.s"
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/Si5351C && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kote/openairinterface5g-91d8c892/targets/ARCH/LMSSDR/USERSPACE/LIB/Si5351C/Si5351C.cpp -o CMakeFiles/Si5351C.dir/Si5351C.cpp.s

Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o.requires:
.PHONY : Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o.requires

Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o.provides: Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o.requires
	$(MAKE) -f Si5351C/CMakeFiles/Si5351C.dir/build.make Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o.provides.build
.PHONY : Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o.provides

Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o.provides.build: Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o

# Object files for target Si5351C
Si5351C_OBJECTS = \
"CMakeFiles/Si5351C.dir/Si5351C.cpp.o"

# External object files for target Si5351C
Si5351C_EXTERNAL_OBJECTS =

Si5351C/libSi5351C.a: Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o
Si5351C/libSi5351C.a: Si5351C/CMakeFiles/Si5351C.dir/build.make
Si5351C/libSi5351C.a: Si5351C/CMakeFiles/Si5351C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libSi5351C.a"
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/Si5351C && $(CMAKE_COMMAND) -P CMakeFiles/Si5351C.dir/cmake_clean_target.cmake
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/Si5351C && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Si5351C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Si5351C/CMakeFiles/Si5351C.dir/build: Si5351C/libSi5351C.a
.PHONY : Si5351C/CMakeFiles/Si5351C.dir/build

Si5351C/CMakeFiles/Si5351C.dir/requires: Si5351C/CMakeFiles/Si5351C.dir/Si5351C.cpp.o.requires
.PHONY : Si5351C/CMakeFiles/Si5351C.dir/requires

Si5351C/CMakeFiles/Si5351C.dir/clean:
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/Si5351C && $(CMAKE_COMMAND) -P CMakeFiles/Si5351C.dir/cmake_clean.cmake
.PHONY : Si5351C/CMakeFiles/Si5351C.dir/clean

Si5351C/CMakeFiles/Si5351C.dir/depend:
	cd /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators /home/kote/openairinterface5g-91d8c892/targets/ARCH/LMSSDR/USERSPACE/LIB/Si5351C /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/Si5351C /home/kote/openairinterface5g-91d8c892/cmake_targets/lte-simulators/build/Si5351C/CMakeFiles/Si5351C.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Si5351C/CMakeFiles/Si5351C.dir/depend

