# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "D:\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\annab\source\repos\Drawer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\annab\source\repos\Drawer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Drawer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Drawer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Drawer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Drawer.dir/flags.make

CMakeFiles/Drawer.dir/main.cpp.obj: CMakeFiles/Drawer.dir/flags.make
CMakeFiles/Drawer.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Drawer.dir/main.cpp.obj: CMakeFiles/Drawer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Drawer.dir/main.cpp.obj"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawer.dir/main.cpp.obj -MF CMakeFiles\Drawer.dir\main.cpp.obj.d -o CMakeFiles\Drawer.dir\main.cpp.obj -c C:\Users\annab\source\repos\Drawer\main.cpp

CMakeFiles/Drawer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawer.dir/main.cpp.i"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\annab\source\repos\Drawer\main.cpp > CMakeFiles\Drawer.dir\main.cpp.i

CMakeFiles/Drawer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawer.dir/main.cpp.s"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\annab\source\repos\Drawer\main.cpp -o CMakeFiles\Drawer.dir\main.cpp.s

CMakeFiles/Drawer.dir/sources/Point.cpp.obj: CMakeFiles/Drawer.dir/flags.make
CMakeFiles/Drawer.dir/sources/Point.cpp.obj: ../sources/Point.cpp
CMakeFiles/Drawer.dir/sources/Point.cpp.obj: CMakeFiles/Drawer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Drawer.dir/sources/Point.cpp.obj"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawer.dir/sources/Point.cpp.obj -MF CMakeFiles\Drawer.dir\sources\Point.cpp.obj.d -o CMakeFiles\Drawer.dir\sources\Point.cpp.obj -c C:\Users\annab\source\repos\Drawer\sources\Point.cpp

CMakeFiles/Drawer.dir/sources/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawer.dir/sources/Point.cpp.i"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\annab\source\repos\Drawer\sources\Point.cpp > CMakeFiles\Drawer.dir\sources\Point.cpp.i

CMakeFiles/Drawer.dir/sources/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawer.dir/sources/Point.cpp.s"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\annab\source\repos\Drawer\sources\Point.cpp -o CMakeFiles\Drawer.dir\sources\Point.cpp.s

CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.obj: CMakeFiles/Drawer.dir/flags.make
CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.obj: ../sources/MyRectangle.cpp
CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.obj: CMakeFiles/Drawer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.obj"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.obj -MF CMakeFiles\Drawer.dir\sources\MyRectangle.cpp.obj.d -o CMakeFiles\Drawer.dir\sources\MyRectangle.cpp.obj -c C:\Users\annab\source\repos\Drawer\sources\MyRectangle.cpp

CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.i"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\annab\source\repos\Drawer\sources\MyRectangle.cpp > CMakeFiles\Drawer.dir\sources\MyRectangle.cpp.i

CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.s"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\annab\source\repos\Drawer\sources\MyRectangle.cpp -o CMakeFiles\Drawer.dir\sources\MyRectangle.cpp.s

CMakeFiles/Drawer.dir/sources/MyLine.cpp.obj: CMakeFiles/Drawer.dir/flags.make
CMakeFiles/Drawer.dir/sources/MyLine.cpp.obj: ../sources/MyLine.cpp
CMakeFiles/Drawer.dir/sources/MyLine.cpp.obj: CMakeFiles/Drawer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Drawer.dir/sources/MyLine.cpp.obj"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawer.dir/sources/MyLine.cpp.obj -MF CMakeFiles\Drawer.dir\sources\MyLine.cpp.obj.d -o CMakeFiles\Drawer.dir\sources\MyLine.cpp.obj -c C:\Users\annab\source\repos\Drawer\sources\MyLine.cpp

CMakeFiles/Drawer.dir/sources/MyLine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawer.dir/sources/MyLine.cpp.i"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\annab\source\repos\Drawer\sources\MyLine.cpp > CMakeFiles\Drawer.dir\sources\MyLine.cpp.i

CMakeFiles/Drawer.dir/sources/MyLine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawer.dir/sources/MyLine.cpp.s"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\annab\source\repos\Drawer\sources\MyLine.cpp -o CMakeFiles\Drawer.dir\sources\MyLine.cpp.s

CMakeFiles/Drawer.dir/sources/Canvas.cpp.obj: CMakeFiles/Drawer.dir/flags.make
CMakeFiles/Drawer.dir/sources/Canvas.cpp.obj: ../sources/Canvas.cpp
CMakeFiles/Drawer.dir/sources/Canvas.cpp.obj: CMakeFiles/Drawer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Drawer.dir/sources/Canvas.cpp.obj"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawer.dir/sources/Canvas.cpp.obj -MF CMakeFiles\Drawer.dir\sources\Canvas.cpp.obj.d -o CMakeFiles\Drawer.dir\sources\Canvas.cpp.obj -c C:\Users\annab\source\repos\Drawer\sources\Canvas.cpp

CMakeFiles/Drawer.dir/sources/Canvas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawer.dir/sources/Canvas.cpp.i"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\annab\source\repos\Drawer\sources\Canvas.cpp > CMakeFiles\Drawer.dir\sources\Canvas.cpp.i

CMakeFiles/Drawer.dir/sources/Canvas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawer.dir/sources/Canvas.cpp.s"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\annab\source\repos\Drawer\sources\Canvas.cpp -o CMakeFiles\Drawer.dir\sources\Canvas.cpp.s

CMakeFiles/Drawer.dir/sources/Figure.cpp.obj: CMakeFiles/Drawer.dir/flags.make
CMakeFiles/Drawer.dir/sources/Figure.cpp.obj: ../sources/Figure.cpp
CMakeFiles/Drawer.dir/sources/Figure.cpp.obj: CMakeFiles/Drawer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Drawer.dir/sources/Figure.cpp.obj"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawer.dir/sources/Figure.cpp.obj -MF CMakeFiles\Drawer.dir\sources\Figure.cpp.obj.d -o CMakeFiles\Drawer.dir\sources\Figure.cpp.obj -c C:\Users\annab\source\repos\Drawer\sources\Figure.cpp

CMakeFiles/Drawer.dir/sources/Figure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawer.dir/sources/Figure.cpp.i"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\annab\source\repos\Drawer\sources\Figure.cpp > CMakeFiles\Drawer.dir\sources\Figure.cpp.i

CMakeFiles/Drawer.dir/sources/Figure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawer.dir/sources/Figure.cpp.s"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\annab\source\repos\Drawer\sources\Figure.cpp -o CMakeFiles\Drawer.dir\sources\Figure.cpp.s

CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.obj: CMakeFiles/Drawer.dir/flags.make
CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.obj: ../sources/MyEllipse.cpp
CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.obj: CMakeFiles/Drawer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.obj"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.obj -MF CMakeFiles\Drawer.dir\sources\MyEllipse.cpp.obj.d -o CMakeFiles\Drawer.dir\sources\MyEllipse.cpp.obj -c C:\Users\annab\source\repos\Drawer\sources\MyEllipse.cpp

CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.i"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\annab\source\repos\Drawer\sources\MyEllipse.cpp > CMakeFiles\Drawer.dir\sources\MyEllipse.cpp.i

CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.s"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\annab\source\repos\Drawer\sources\MyEllipse.cpp -o CMakeFiles\Drawer.dir\sources\MyEllipse.cpp.s

CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.obj: CMakeFiles/Drawer.dir/flags.make
CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.obj: ../sources/MyPolygon.cpp
CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.obj: CMakeFiles/Drawer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.obj"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.obj -MF CMakeFiles\Drawer.dir\sources\MyPolygon.cpp.obj.d -o CMakeFiles\Drawer.dir\sources\MyPolygon.cpp.obj -c C:\Users\annab\source\repos\Drawer\sources\MyPolygon.cpp

CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.i"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\annab\source\repos\Drawer\sources\MyPolygon.cpp > CMakeFiles\Drawer.dir\sources\MyPolygon.cpp.i

CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.s"
	"D:\CLion 2022.2.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\annab\source\repos\Drawer\sources\MyPolygon.cpp -o CMakeFiles\Drawer.dir\sources\MyPolygon.cpp.s

# Object files for target Drawer
Drawer_OBJECTS = \
"CMakeFiles/Drawer.dir/main.cpp.obj" \
"CMakeFiles/Drawer.dir/sources/Point.cpp.obj" \
"CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.obj" \
"CMakeFiles/Drawer.dir/sources/MyLine.cpp.obj" \
"CMakeFiles/Drawer.dir/sources/Canvas.cpp.obj" \
"CMakeFiles/Drawer.dir/sources/Figure.cpp.obj" \
"CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.obj" \
"CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.obj"

# External object files for target Drawer
Drawer_EXTERNAL_OBJECTS =

Drawer.exe: CMakeFiles/Drawer.dir/main.cpp.obj
Drawer.exe: CMakeFiles/Drawer.dir/sources/Point.cpp.obj
Drawer.exe: CMakeFiles/Drawer.dir/sources/MyRectangle.cpp.obj
Drawer.exe: CMakeFiles/Drawer.dir/sources/MyLine.cpp.obj
Drawer.exe: CMakeFiles/Drawer.dir/sources/Canvas.cpp.obj
Drawer.exe: CMakeFiles/Drawer.dir/sources/Figure.cpp.obj
Drawer.exe: CMakeFiles/Drawer.dir/sources/MyEllipse.cpp.obj
Drawer.exe: CMakeFiles/Drawer.dir/sources/MyPolygon.cpp.obj
Drawer.exe: CMakeFiles/Drawer.dir/build.make
Drawer.exe: CMakeFiles/Drawer.dir/linklibs.rsp
Drawer.exe: CMakeFiles/Drawer.dir/objects1.rsp
Drawer.exe: CMakeFiles/Drawer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable Drawer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Drawer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Drawer.dir/build: Drawer.exe
.PHONY : CMakeFiles/Drawer.dir/build

CMakeFiles/Drawer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Drawer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Drawer.dir/clean

CMakeFiles/Drawer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\annab\source\repos\Drawer C:\Users\annab\source\repos\Drawer C:\Users\annab\source\repos\Drawer\cmake-build-debug C:\Users\annab\source\repos\Drawer\cmake-build-debug C:\Users\annab\source\repos\Drawer\cmake-build-debug\CMakeFiles\Drawer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Drawer.dir/depend
