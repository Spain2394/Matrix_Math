# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /private/var/folders/sr/43y770h16n77_d6jr5ktfpp80000gn/T/AppTranslocation/E95563CF-C51C-417B-BFB4-56CF04C28693/d/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /private/var/folders/sr/43y770h16n77_d6jr5ktfpp80000gn/T/AppTranslocation/E95563CF-C51C-417B-BFB4-56CF04C28693/d/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Allen/Desktop/Clion_WorkSpace/Project2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Allen/Desktop/Clion_WorkSpace/Project2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project2.dir/flags.make

CMakeFiles/Project2.dir/tail.cpp.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/tail.cpp.o: ../tail.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Allen/Desktop/Clion_WorkSpace/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project2.dir/tail.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project2.dir/tail.cpp.o -c /Users/Allen/Desktop/Clion_WorkSpace/Project2/tail.cpp

CMakeFiles/Project2.dir/tail.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project2.dir/tail.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Allen/Desktop/Clion_WorkSpace/Project2/tail.cpp > CMakeFiles/Project2.dir/tail.cpp.i

CMakeFiles/Project2.dir/tail.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project2.dir/tail.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Allen/Desktop/Clion_WorkSpace/Project2/tail.cpp -o CMakeFiles/Project2.dir/tail.cpp.s

CMakeFiles/Project2.dir/tail.cpp.o.requires:

.PHONY : CMakeFiles/Project2.dir/tail.cpp.o.requires

CMakeFiles/Project2.dir/tail.cpp.o.provides: CMakeFiles/Project2.dir/tail.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project2.dir/build.make CMakeFiles/Project2.dir/tail.cpp.o.provides.build
.PHONY : CMakeFiles/Project2.dir/tail.cpp.o.provides

CMakeFiles/Project2.dir/tail.cpp.o.provides.build: CMakeFiles/Project2.dir/tail.cpp.o


# Object files for target Project2
Project2_OBJECTS = \
"CMakeFiles/Project2.dir/tail.cpp.o"

# External object files for target Project2
Project2_EXTERNAL_OBJECTS =

Project2: CMakeFiles/Project2.dir/tail.cpp.o
Project2: CMakeFiles/Project2.dir/build.make
Project2: CMakeFiles/Project2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Allen/Desktop/Clion_WorkSpace/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project2.dir/build: Project2

.PHONY : CMakeFiles/Project2.dir/build

CMakeFiles/Project2.dir/requires: CMakeFiles/Project2.dir/tail.cpp.o.requires

.PHONY : CMakeFiles/Project2.dir/requires

CMakeFiles/Project2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project2.dir/clean

CMakeFiles/Project2.dir/depend:
	cd /Users/Allen/Desktop/Clion_WorkSpace/Project2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Allen/Desktop/Clion_WorkSpace/Project2 /Users/Allen/Desktop/Clion_WorkSpace/Project2 /Users/Allen/Desktop/Clion_WorkSpace/Project2/cmake-build-debug /Users/Allen/Desktop/Clion_WorkSpace/Project2/cmake-build-debug /Users/Allen/Desktop/Clion_WorkSpace/Project2/cmake-build-debug/CMakeFiles/Project2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project2.dir/depend

