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
include CMakeFiles/Ex5.9.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Ex5.9.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex5.9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex5.9.dir/flags.make

CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.obj: CMakeFiles/Ex5.9.dir/flags.make
CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.obj: C:/Users/catar/CLionProjects/CursSDA/TemaPeAcasa5/Ex9.c
CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.obj: CMakeFiles/Ex5.9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.obj -MF CMakeFiles\Ex5.9.dir\TemaPeAcasa5\Ex9.c.obj.d -o CMakeFiles\Ex5.9.dir\TemaPeAcasa5\Ex9.c.obj -c C:\Users\catar\CLionProjects\CursSDA\TemaPeAcasa5\Ex9.c

CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\catar\CLionProjects\CursSDA\TemaPeAcasa5\Ex9.c > CMakeFiles\Ex5.9.dir\TemaPeAcasa5\Ex9.c.i

CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\catar\CLionProjects\CursSDA\TemaPeAcasa5\Ex9.c -o CMakeFiles\Ex5.9.dir\TemaPeAcasa5\Ex9.c.s

# Object files for target Ex5.9
Ex5_9_OBJECTS = \
"CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.obj"

# External object files for target Ex5.9
Ex5_9_EXTERNAL_OBJECTS =

Ex5.9.exe: CMakeFiles/Ex5.9.dir/TemaPeAcasa5/Ex9.c.obj
Ex5.9.exe: CMakeFiles/Ex5.9.dir/build.make
Ex5.9.exe: CMakeFiles/Ex5.9.dir/linkLibs.rsp
Ex5.9.exe: CMakeFiles/Ex5.9.dir/objects1.rsp
Ex5.9.exe: CMakeFiles/Ex5.9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Ex5.9.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ex5.9.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex5.9.dir/build: Ex5.9.exe
.PHONY : CMakeFiles/Ex5.9.dir/build

CMakeFiles/Ex5.9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ex5.9.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ex5.9.dir/clean

CMakeFiles/Ex5.9.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\catar\CLionProjects\CursSDA C:\Users\catar\CLionProjects\CursSDA C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug C:\Users\catar\CLionProjects\CursSDA\cmake-build-debug\CMakeFiles\Ex5.9.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Ex5.9.dir/depend

