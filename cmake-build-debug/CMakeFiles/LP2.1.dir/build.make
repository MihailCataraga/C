# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.1.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.1.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\catar\CLionProjects\CursSDA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LP2.1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LP2.1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LP2.1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LP2.1.dir/flags.make

CMakeFiles/LP2.1.dir/LP2/Ex1.c.obj: CMakeFiles/LP2.1.dir/flags.make
CMakeFiles/LP2.1.dir/LP2/Ex1.c.obj: C:/Users/catar/CLionProjects/CursSDA/LP2/Ex1.c
CMakeFiles/LP2.1.dir/LP2/Ex1.c.obj: CMakeFiles/LP2.1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LP2.1.dir/LP2/Ex1.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LP2.1.dir/LP2/Ex1.c.obj -MF CMakeFiles\LP2.1.dir\LP2\Ex1.c.obj.d -o CMakeFiles\LP2.1.dir\LP2\Ex1.c.obj -c C:\Users\catar\CLionProjects\CursSDA\LP2\Ex1.c

CMakeFiles/LP2.1.dir/LP2/Ex1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/LP2.1.dir/LP2/Ex1.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\catar\CLionProjects\CursSDA\LP2\Ex1.c > CMakeFiles\LP2.1.dir\LP2\Ex1.c.i

CMakeFiles/LP2.1.dir/LP2/Ex1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/LP2.1.dir/LP2/Ex1.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\catar\CLionProjects\CursSDA\LP2\Ex1.c -o CMakeFiles\LP2.1.dir\LP2\Ex1.c.s

# Object files for target LP2.1
LP2_1_OBJECTS = \
"CMakeFiles/LP2.1.dir/LP2/Ex1.c.obj"

# External object files for target LP2.1
LP2_1_EXTERNAL_OBJECTS =

LP2.1.exe: CMakeFiles/LP2.1.dir/LP2/Ex1.c.obj
LP2.1.exe: CMakeFiles/LP2.1.dir/build.make
LP2.1.exe: CMakeFiles/LP2.1.dir/linkLibs.rsp
LP2.1.exe: CMakeFiles/LP2.1.dir/objects1.rsp
LP2.1.exe: CMakeFiles/LP2.1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LP2.1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LP2.1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LP2.1.dir/build: LP2.1.exe
.PHONY : CMakeFiles/LP2.1.dir/build

CMakeFiles/LP2.1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LP2.1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LP2.1.dir/clean

CMakeFiles/LP2.1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\catar\CLionProjects\CursSDA C:\Users\catar\CLionProjects\CursSDA C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles\LP2.1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LP2.1.dir/depend

