# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/roland/Documents/Repositories/conways-game-of-life/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roland/Documents/Repositories/conways-game-of-life

# Include any dependencies generated for this target.
include CMakeFiles/renderer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/renderer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/renderer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/renderer.dir/flags.make

CMakeFiles/renderer.dir/codegen:
.PHONY : CMakeFiles/renderer.dir/codegen

CMakeFiles/renderer.dir/renderer.cpp.o: CMakeFiles/renderer.dir/flags.make
CMakeFiles/renderer.dir/renderer.cpp.o: /home/roland/Documents/Repositories/conways-game-of-life/src/renderer.cpp
CMakeFiles/renderer.dir/renderer.cpp.o: CMakeFiles/renderer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/roland/Documents/Repositories/conways-game-of-life/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/renderer.dir/renderer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/renderer.dir/renderer.cpp.o -MF CMakeFiles/renderer.dir/renderer.cpp.o.d -o CMakeFiles/renderer.dir/renderer.cpp.o -c /home/roland/Documents/Repositories/conways-game-of-life/src/renderer.cpp

CMakeFiles/renderer.dir/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/renderer.dir/renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/roland/Documents/Repositories/conways-game-of-life/src/renderer.cpp > CMakeFiles/renderer.dir/renderer.cpp.i

CMakeFiles/renderer.dir/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/renderer.dir/renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/roland/Documents/Repositories/conways-game-of-life/src/renderer.cpp -o CMakeFiles/renderer.dir/renderer.cpp.s

# Object files for target renderer
renderer_OBJECTS = \
"CMakeFiles/renderer.dir/renderer.cpp.o"

# External object files for target renderer
renderer_EXTERNAL_OBJECTS =

bin/lib/librenderer.a: CMakeFiles/renderer.dir/renderer.cpp.o
bin/lib/librenderer.a: CMakeFiles/renderer.dir/build.make
bin/lib/librenderer.a: CMakeFiles/renderer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/roland/Documents/Repositories/conways-game-of-life/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library bin/lib/librenderer.a"
	$(CMAKE_COMMAND) -P CMakeFiles/renderer.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/renderer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/renderer.dir/build: bin/lib/librenderer.a
.PHONY : CMakeFiles/renderer.dir/build

CMakeFiles/renderer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/renderer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/renderer.dir/clean

CMakeFiles/renderer.dir/depend:
	cd /home/roland/Documents/Repositories/conways-game-of-life && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roland/Documents/Repositories/conways-game-of-life/src /home/roland/Documents/Repositories/conways-game-of-life/src /home/roland/Documents/Repositories/conways-game-of-life /home/roland/Documents/Repositories/conways-game-of-life /home/roland/Documents/Repositories/conways-game-of-life/CMakeFiles/renderer.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/renderer.dir/depend

