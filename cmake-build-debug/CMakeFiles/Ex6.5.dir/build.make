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
include CMakeFiles/Ex6.5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Ex6.5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex6.5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex6.5.dir/flags.make

CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.obj: CMakeFiles/Ex6.5.dir/flags.make
CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.obj: C:/Users/catar/CLionProjects/CursSDA/TemaPeAcasa6/Ex5.c
CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.obj: CMakeFiles/Ex6.5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.obj -MF CMakeFiles\Ex6.5.dir\TemaPeAcasa6\Ex5.c.obj.d -o CMakeFiles\Ex6.5.dir\TemaPeAcasa6\Ex5.c.obj -c C:\Users\catar\CLionProjects\CursSDA\TemaPeAcasa6\Ex5.c

CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\catar\CLionProjects\CursSDA\TemaPeAcasa6\Ex5.c > CMakeFiles\Ex6.5.dir\TemaPeAcasa6\Ex5.c.i

CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\catar\CLionProjects\CursSDA\TemaPeAcasa6\Ex5.c -o CMakeFiles\Ex6.5.dir\TemaPeAcasa6\Ex5.c.s

# Object files for target Ex6.5
Ex6_5_OBJECTS = \
"CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.obj"

# External object files for target Ex6.5
Ex6_5_EXTERNAL_OBJECTS =

Ex6.5.exe: CMakeFiles/Ex6.5.dir/TemaPeAcasa6/Ex5.c.obj
Ex6.5.exe: CMakeFiles/Ex6.5.dir/build.make
Ex6.5.exe: CMakeFiles/Ex6.5.dir/linkLibs.rsp
Ex6.5.exe: CMakeFiles/Ex6.5.dir/objects1.rsp
Ex6.5.exe: CMakeFiles/Ex6.5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Ex6.5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ex6.5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex6.5.dir/build: Ex6.5.exe
.PHONY : CMakeFiles/Ex6.5.dir/build

CMakeFiles/Ex6.5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ex6.5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ex6.5.dir/clean

CMakeFiles/Ex6.5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\catar\CLionProjects\CursSDA C:\Users\catar\CLionProjects\CursSDA C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles\Ex6.5.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Ex6.5.dir/depend

