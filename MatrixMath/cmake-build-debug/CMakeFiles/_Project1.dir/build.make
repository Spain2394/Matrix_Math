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
CMAKE_COMMAND = /private/var/folders/sr/43y770h16n77_d6jr5ktfpp80000gn/T/AppTranslocation/B21F2B94-2781-458F-B2FE-A01C283873D0/d/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /private/var/folders/sr/43y770h16n77_d6jr5ktfpp80000gn/T/AppTranslocation/B21F2B94-2781-458F-B2FE-A01C283873D0/d/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Allen/Desktop/C_WorkSpace/Project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Allen/Desktop/C_WorkSpace/Project1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/_Project1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_Project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_Project1.dir/flags.make

CMakeFiles/_Project1.dir/p1.cpp.o: CMakeFiles/_Project1.dir/flags.make
CMakeFiles/_Project1.dir/p1.cpp.o: ../p1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Allen/Desktop/C_WorkSpace/Project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_Project1.dir/p1.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_Project1.dir/p1.cpp.o -c /Users/Allen/Desktop/C_WorkSpace/Project1/p1.cpp

CMakeFiles/_Project1.dir/p1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_Project1.dir/p1.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Allen/Desktop/C_WorkSpace/Project1/p1.cpp > CMakeFiles/_Project1.dir/p1.cpp.i

CMakeFiles/_Project1.dir/p1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_Project1.dir/p1.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Allen/Desktop/C_WorkSpace/Project1/p1.cpp -o CMakeFiles/_Project1.dir/p1.cpp.s

CMakeFiles/_Project1.dir/p1.cpp.o.requires:

.PHONY : CMakeFiles/_Project1.dir/p1.cpp.o.requires

CMakeFiles/_Project1.dir/p1.cpp.o.provides: CMakeFiles/_Project1.dir/p1.cpp.o.requires
	$(MAKE) -f CMakeFiles/_Project1.dir/build.make CMakeFiles/_Project1.dir/p1.cpp.o.provides.build
.PHONY : CMakeFiles/_Project1.dir/p1.cpp.o.provides

CMakeFiles/_Project1.dir/p1.cpp.o.provides.build: CMakeFiles/_Project1.dir/p1.cpp.o


CMakeFiles/_Project1.dir/Matrix.cpp.o: CMakeFiles/_Project1.dir/flags.make
CMakeFiles/_Project1.dir/Matrix.cpp.o: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Allen/Desktop/C_WorkSpace/Project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/_Project1.dir/Matrix.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_Project1.dir/Matrix.cpp.o -c /Users/Allen/Desktop/C_WorkSpace/Project1/Matrix.cpp

CMakeFiles/_Project1.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_Project1.dir/Matrix.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Allen/Desktop/C_WorkSpace/Project1/Matrix.cpp > CMakeFiles/_Project1.dir/Matrix.cpp.i

CMakeFiles/_Project1.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_Project1.dir/Matrix.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Allen/Desktop/C_WorkSpace/Project1/Matrix.cpp -o CMakeFiles/_Project1.dir/Matrix.cpp.s

CMakeFiles/_Project1.dir/Matrix.cpp.o.requires:

.PHONY : CMakeFiles/_Project1.dir/Matrix.cpp.o.requires

CMakeFiles/_Project1.dir/Matrix.cpp.o.provides: CMakeFiles/_Project1.dir/Matrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/_Project1.dir/build.make CMakeFiles/_Project1.dir/Matrix.cpp.o.provides.build
.PHONY : CMakeFiles/_Project1.dir/Matrix.cpp.o.provides

CMakeFiles/_Project1.dir/Matrix.cpp.o.provides.build: CMakeFiles/_Project1.dir/Matrix.cpp.o


# Object files for target _Project1
_Project1_OBJECTS = \
"CMakeFiles/_Project1.dir/p1.cpp.o" \
"CMakeFiles/_Project1.dir/Matrix.cpp.o"

# External object files for target _Project1
_Project1_EXTERNAL_OBJECTS =

_Project1: CMakeFiles/_Project1.dir/p1.cpp.o
_Project1: CMakeFiles/_Project1.dir/Matrix.cpp.o
_Project1: CMakeFiles/_Project1.dir/build.make
_Project1: CMakeFiles/_Project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Allen/Desktop/C_WorkSpace/Project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable _Project1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_Project1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_Project1.dir/build: _Project1

.PHONY : CMakeFiles/_Project1.dir/build

CMakeFiles/_Project1.dir/requires: CMakeFiles/_Project1.dir/p1.cpp.o.requires
CMakeFiles/_Project1.dir/requires: CMakeFiles/_Project1.dir/Matrix.cpp.o.requires

.PHONY : CMakeFiles/_Project1.dir/requires

CMakeFiles/_Project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_Project1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_Project1.dir/clean

CMakeFiles/_Project1.dir/depend:
	cd /Users/Allen/Desktop/C_WorkSpace/Project1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Allen/Desktop/C_WorkSpace/Project1 /Users/Allen/Desktop/C_WorkSpace/Project1 /Users/Allen/Desktop/C_WorkSpace/Project1/cmake-build-debug /Users/Allen/Desktop/C_WorkSpace/Project1/cmake-build-debug /Users/Allen/Desktop/C_WorkSpace/Project1/cmake-build-debug/CMakeFiles/_Project1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_Project1.dir/depend

