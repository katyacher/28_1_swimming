# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /snap/cmake/1334/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1334/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kate/Documents/skillbox/28_1_swimming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kate/Documents/skillbox/28_1_swimming/build

# Include any dependencies generated for this target.
include CMakeFiles/28_1_swimming.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/28_1_swimming.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/28_1_swimming.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/28_1_swimming.dir/flags.make

CMakeFiles/28_1_swimming.dir/main.cpp.o: CMakeFiles/28_1_swimming.dir/flags.make
CMakeFiles/28_1_swimming.dir/main.cpp.o: /home/kate/Documents/skillbox/28_1_swimming/main.cpp
CMakeFiles/28_1_swimming.dir/main.cpp.o: CMakeFiles/28_1_swimming.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kate/Documents/skillbox/28_1_swimming/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/28_1_swimming.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/28_1_swimming.dir/main.cpp.o -MF CMakeFiles/28_1_swimming.dir/main.cpp.o.d -o CMakeFiles/28_1_swimming.dir/main.cpp.o -c /home/kate/Documents/skillbox/28_1_swimming/main.cpp

CMakeFiles/28_1_swimming.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/28_1_swimming.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kate/Documents/skillbox/28_1_swimming/main.cpp > CMakeFiles/28_1_swimming.dir/main.cpp.i

CMakeFiles/28_1_swimming.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/28_1_swimming.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kate/Documents/skillbox/28_1_swimming/main.cpp -o CMakeFiles/28_1_swimming.dir/main.cpp.s

# Object files for target 28_1_swimming
28_1_swimming_OBJECTS = \
"CMakeFiles/28_1_swimming.dir/main.cpp.o"

# External object files for target 28_1_swimming
28_1_swimming_EXTERNAL_OBJECTS =

28_1_swimming: CMakeFiles/28_1_swimming.dir/main.cpp.o
28_1_swimming: CMakeFiles/28_1_swimming.dir/build.make
28_1_swimming: CMakeFiles/28_1_swimming.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/kate/Documents/skillbox/28_1_swimming/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 28_1_swimming"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/28_1_swimming.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/28_1_swimming.dir/build: 28_1_swimming
.PHONY : CMakeFiles/28_1_swimming.dir/build

CMakeFiles/28_1_swimming.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/28_1_swimming.dir/cmake_clean.cmake
.PHONY : CMakeFiles/28_1_swimming.dir/clean

CMakeFiles/28_1_swimming.dir/depend:
	cd /home/kate/Documents/skillbox/28_1_swimming/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kate/Documents/skillbox/28_1_swimming /home/kate/Documents/skillbox/28_1_swimming /home/kate/Documents/skillbox/28_1_swimming/build /home/kate/Documents/skillbox/28_1_swimming/build /home/kate/Documents/skillbox/28_1_swimming/build/CMakeFiles/28_1_swimming.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/28_1_swimming.dir/depend

