# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/kanjilal/Documents/Kash's file/HandModel"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kanjilal/Documents/Kash's file/HandModel/builds"

# Include any dependencies generated for this target.
include libraries/BaseHand/CMakeFiles/BaseHand.dir/depend.make

# Include the progress variables for this target.
include libraries/BaseHand/CMakeFiles/BaseHand.dir/progress.make

# Include the compile flags for this target's objects.
include libraries/BaseHand/CMakeFiles/BaseHand.dir/flags.make

libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o: libraries/BaseHand/CMakeFiles/BaseHand.dir/flags.make
libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o: ../libraries/BaseHand/src/BaseHand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kanjilal/Documents/Kash's file/HandModel/builds/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o"
	cd "/home/kanjilal/Documents/Kash's file/HandModel/builds/libraries/BaseHand" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o -c "/home/kanjilal/Documents/Kash's file/HandModel/libraries/BaseHand/src/BaseHand.cpp"

libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BaseHand.dir/src/BaseHand.cpp.i"
	cd "/home/kanjilal/Documents/Kash's file/HandModel/builds/libraries/BaseHand" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kanjilal/Documents/Kash's file/HandModel/libraries/BaseHand/src/BaseHand.cpp" > CMakeFiles/BaseHand.dir/src/BaseHand.cpp.i

libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BaseHand.dir/src/BaseHand.cpp.s"
	cd "/home/kanjilal/Documents/Kash's file/HandModel/builds/libraries/BaseHand" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kanjilal/Documents/Kash's file/HandModel/libraries/BaseHand/src/BaseHand.cpp" -o CMakeFiles/BaseHand.dir/src/BaseHand.cpp.s

libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o.requires:

.PHONY : libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o.requires

libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o.provides: libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o.requires
	$(MAKE) -f libraries/BaseHand/CMakeFiles/BaseHand.dir/build.make libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o.provides.build
.PHONY : libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o.provides

libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o.provides.build: libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o


# Object files for target BaseHand
BaseHand_OBJECTS = \
"CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o"

# External object files for target BaseHand
BaseHand_EXTERNAL_OBJECTS =

libraries/BaseHand/libBaseHand.a: libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o
libraries/BaseHand/libBaseHand.a: libraries/BaseHand/CMakeFiles/BaseHand.dir/build.make
libraries/BaseHand/libBaseHand.a: libraries/BaseHand/CMakeFiles/BaseHand.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kanjilal/Documents/Kash's file/HandModel/builds/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libBaseHand.a"
	cd "/home/kanjilal/Documents/Kash's file/HandModel/builds/libraries/BaseHand" && $(CMAKE_COMMAND) -P CMakeFiles/BaseHand.dir/cmake_clean_target.cmake
	cd "/home/kanjilal/Documents/Kash's file/HandModel/builds/libraries/BaseHand" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BaseHand.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libraries/BaseHand/CMakeFiles/BaseHand.dir/build: libraries/BaseHand/libBaseHand.a

.PHONY : libraries/BaseHand/CMakeFiles/BaseHand.dir/build

libraries/BaseHand/CMakeFiles/BaseHand.dir/requires: libraries/BaseHand/CMakeFiles/BaseHand.dir/src/BaseHand.cpp.o.requires

.PHONY : libraries/BaseHand/CMakeFiles/BaseHand.dir/requires

libraries/BaseHand/CMakeFiles/BaseHand.dir/clean:
	cd "/home/kanjilal/Documents/Kash's file/HandModel/builds/libraries/BaseHand" && $(CMAKE_COMMAND) -P CMakeFiles/BaseHand.dir/cmake_clean.cmake
.PHONY : libraries/BaseHand/CMakeFiles/BaseHand.dir/clean

libraries/BaseHand/CMakeFiles/BaseHand.dir/depend:
	cd "/home/kanjilal/Documents/Kash's file/HandModel/builds" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kanjilal/Documents/Kash's file/HandModel" "/home/kanjilal/Documents/Kash's file/HandModel/libraries/BaseHand" "/home/kanjilal/Documents/Kash's file/HandModel/builds" "/home/kanjilal/Documents/Kash's file/HandModel/builds/libraries/BaseHand" "/home/kanjilal/Documents/Kash's file/HandModel/builds/libraries/BaseHand/CMakeFiles/BaseHand.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : libraries/BaseHand/CMakeFiles/BaseHand.dir/depend
