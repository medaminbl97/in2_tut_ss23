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
CMAKE_SOURCE_DIR = /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/beispiele.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/beispiele.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/beispiele.dir/flags.make

CMakeFiles/beispiele.dir/main.cpp.o: CMakeFiles/beispiele.dir/flags.make
CMakeFiles/beispiele.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/beispiele.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beispiele.dir/main.cpp.o -c /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/main.cpp

CMakeFiles/beispiele.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beispiele.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/main.cpp > CMakeFiles/beispiele.dir/main.cpp.i

CMakeFiles/beispiele.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beispiele.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/main.cpp -o CMakeFiles/beispiele.dir/main.cpp.s

CMakeFiles/beispiele.dir/vec3d.cpp.o: CMakeFiles/beispiele.dir/flags.make
CMakeFiles/beispiele.dir/vec3d.cpp.o: ../vec3d.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/beispiele.dir/vec3d.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beispiele.dir/vec3d.cpp.o -c /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/vec3d.cpp

CMakeFiles/beispiele.dir/vec3d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beispiele.dir/vec3d.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/vec3d.cpp > CMakeFiles/beispiele.dir/vec3d.cpp.i

CMakeFiles/beispiele.dir/vec3d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beispiele.dir/vec3d.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/vec3d.cpp -o CMakeFiles/beispiele.dir/vec3d.cpp.s

CMakeFiles/beispiele.dir/array.cpp.o: CMakeFiles/beispiele.dir/flags.make
CMakeFiles/beispiele.dir/array.cpp.o: ../array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/beispiele.dir/array.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/beispiele.dir/array.cpp.o -c /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/array.cpp

CMakeFiles/beispiele.dir/array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/beispiele.dir/array.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/array.cpp > CMakeFiles/beispiele.dir/array.cpp.i

CMakeFiles/beispiele.dir/array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/beispiele.dir/array.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/array.cpp -o CMakeFiles/beispiele.dir/array.cpp.s

# Object files for target beispiele
beispiele_OBJECTS = \
"CMakeFiles/beispiele.dir/main.cpp.o" \
"CMakeFiles/beispiele.dir/vec3d.cpp.o" \
"CMakeFiles/beispiele.dir/array.cpp.o"

# External object files for target beispiele
beispiele_EXTERNAL_OBJECTS =

beispiele: CMakeFiles/beispiele.dir/main.cpp.o
beispiele: CMakeFiles/beispiele.dir/vec3d.cpp.o
beispiele: CMakeFiles/beispiele.dir/array.cpp.o
beispiele: CMakeFiles/beispiele.dir/build.make
beispiele: CMakeFiles/beispiele.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable beispiele"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/beispiele.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/beispiele.dir/build: beispiele
.PHONY : CMakeFiles/beispiele.dir/build

CMakeFiles/beispiele.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/beispiele.dir/cmake_clean.cmake
.PHONY : CMakeFiles/beispiele.dir/clean

CMakeFiles/beispiele.dir/depend:
	cd /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug /Users/mohamedaminebellil/Desktop/in2_tut_ss23/beispiele/cmake-build-debug/CMakeFiles/beispiele.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/beispiele.dir/depend

