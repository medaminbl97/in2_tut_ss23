# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/last_one.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/last_one.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/last_one.dir/flags.make

CMakeFiles/last_one.dir/main.cpp.o: CMakeFiles/last_one.dir/flags.make
CMakeFiles/last_one.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/last_one.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/last_one.dir/main.cpp.o -c /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/main.cpp

CMakeFiles/last_one.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/last_one.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/main.cpp > CMakeFiles/last_one.dir/main.cpp.i

CMakeFiles/last_one.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/last_one.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/main.cpp -o CMakeFiles/last_one.dir/main.cpp.s

# Object files for target last_one
last_one_OBJECTS = \
"CMakeFiles/last_one.dir/main.cpp.o"

# External object files for target last_one
last_one_EXTERNAL_OBJECTS =

last_one: CMakeFiles/last_one.dir/main.cpp.o
last_one: CMakeFiles/last_one.dir/build.make
last_one: CMakeFiles/last_one.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable last_one"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/last_one.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/last_one.dir/build: last_one
.PHONY : CMakeFiles/last_one.dir/build

CMakeFiles/last_one.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/last_one.dir/cmake_clean.cmake
.PHONY : CMakeFiles/last_one.dir/clean

CMakeFiles/last_one.dir/depend:
	cd /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/cmake-build-debug /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/cmake-build-debug /Users/mohamedaminebellil/Desktop/in2_tut_ss23/last_one/cmake-build-debug/CMakeFiles/last_one.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/last_one.dir/depend
