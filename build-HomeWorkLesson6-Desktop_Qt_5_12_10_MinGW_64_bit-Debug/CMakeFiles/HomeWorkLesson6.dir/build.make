# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\79996\Desktop\HomeWork\HomeWorkLesson6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\79996\Desktop\HomeWork\build-HomeWorkLesson6-Desktop_Qt_5_12_10_MinGW_64_bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/HomeWorkLesson6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HomeWorkLesson6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HomeWorkLesson6.dir/flags.make

CMakeFiles/HomeWorkLesson6.dir/main.cpp.obj: CMakeFiles/HomeWorkLesson6.dir/flags.make
CMakeFiles/HomeWorkLesson6.dir/main.cpp.obj: C:/Users/79996/Desktop/HomeWork/HomeWorkLesson6/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\79996\Desktop\HomeWork\build-HomeWorkLesson6-Desktop_Qt_5_12_10_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HomeWorkLesson6.dir/main.cpp.obj"
	C:\Qt\Qt5.12.10\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HomeWorkLesson6.dir\main.cpp.obj -c C:\Users\79996\Desktop\HomeWork\HomeWorkLesson6\main.cpp

CMakeFiles/HomeWorkLesson6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HomeWorkLesson6.dir/main.cpp.i"
	C:\Qt\Qt5.12.10\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\79996\Desktop\HomeWork\HomeWorkLesson6\main.cpp > CMakeFiles\HomeWorkLesson6.dir\main.cpp.i

CMakeFiles/HomeWorkLesson6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HomeWorkLesson6.dir/main.cpp.s"
	C:\Qt\Qt5.12.10\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\79996\Desktop\HomeWork\HomeWorkLesson6\main.cpp -o CMakeFiles\HomeWorkLesson6.dir\main.cpp.s

# Object files for target HomeWorkLesson6
HomeWorkLesson6_OBJECTS = \
"CMakeFiles/HomeWorkLesson6.dir/main.cpp.obj"

# External object files for target HomeWorkLesson6
HomeWorkLesson6_EXTERNAL_OBJECTS =

HomeWorkLesson6.exe: CMakeFiles/HomeWorkLesson6.dir/main.cpp.obj
HomeWorkLesson6.exe: CMakeFiles/HomeWorkLesson6.dir/build.make
HomeWorkLesson6.exe: CMakeFiles/HomeWorkLesson6.dir/linklibs.rsp
HomeWorkLesson6.exe: CMakeFiles/HomeWorkLesson6.dir/objects1.rsp
HomeWorkLesson6.exe: CMakeFiles/HomeWorkLesson6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\79996\Desktop\HomeWork\build-HomeWorkLesson6-Desktop_Qt_5_12_10_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HomeWorkLesson6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HomeWorkLesson6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HomeWorkLesson6.dir/build: HomeWorkLesson6.exe

.PHONY : CMakeFiles/HomeWorkLesson6.dir/build

CMakeFiles/HomeWorkLesson6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HomeWorkLesson6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HomeWorkLesson6.dir/clean

CMakeFiles/HomeWorkLesson6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\79996\Desktop\HomeWork\HomeWorkLesson6 C:\Users\79996\Desktop\HomeWork\HomeWorkLesson6 C:\Users\79996\Desktop\HomeWork\build-HomeWorkLesson6-Desktop_Qt_5_12_10_MinGW_64_bit-Debug C:\Users\79996\Desktop\HomeWork\build-HomeWorkLesson6-Desktop_Qt_5_12_10_MinGW_64_bit-Debug C:\Users\79996\Desktop\HomeWork\build-HomeWorkLesson6-Desktop_Qt_5_12_10_MinGW_64_bit-Debug\CMakeFiles\HomeWorkLesson6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HomeWorkLesson6.dir/depend

