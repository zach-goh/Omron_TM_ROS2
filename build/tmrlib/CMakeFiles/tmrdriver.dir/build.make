# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/gy/tmr_ros2/tmrlib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gy/tmr_ros2/build/tmrlib

# Include any dependencies generated for this target.
include CMakeFiles/tmrdriver.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tmrdriver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tmrdriver.dir/flags.make

CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.o: CMakeFiles/tmrdriver.dir/flags.make
CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.o: /home/gy/tmr_ros2/tmrlib/src/tmr_driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gy/tmr_ros2/build/tmrlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.o -c /home/gy/tmr_ros2/tmrlib/src/tmr_driver.cpp

CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gy/tmr_ros2/tmrlib/src/tmr_driver.cpp > CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.i

CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gy/tmr_ros2/tmrlib/src/tmr_driver.cpp -o CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.s

CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.o: CMakeFiles/tmrdriver.dir/flags.make
CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.o: /home/gy/tmr_ros2/tmrlib/src/tmr_command.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gy/tmr_ros2/build/tmrlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.o -c /home/gy/tmr_ros2/tmrlib/src/tmr_command.cpp

CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gy/tmr_ros2/tmrlib/src/tmr_command.cpp > CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.i

CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gy/tmr_ros2/tmrlib/src/tmr_command.cpp -o CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.s

CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.o: CMakeFiles/tmrdriver.dir/flags.make
CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.o: /home/gy/tmr_ros2/tmrlib/src/tmr_tmsct_communication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gy/tmr_ros2/build/tmrlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.o -c /home/gy/tmr_ros2/tmrlib/src/tmr_tmsct_communication.cpp

CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gy/tmr_ros2/tmrlib/src/tmr_tmsct_communication.cpp > CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.i

CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gy/tmr_ros2/tmrlib/src/tmr_tmsct_communication.cpp -o CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.s

CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.o: CMakeFiles/tmrdriver.dir/flags.make
CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.o: /home/gy/tmr_ros2/tmrlib/src/tmr_tmsvr_communication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gy/tmr_ros2/build/tmrlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.o -c /home/gy/tmr_ros2/tmrlib/src/tmr_tmsvr_communication.cpp

CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gy/tmr_ros2/tmrlib/src/tmr_tmsvr_communication.cpp > CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.i

CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gy/tmr_ros2/tmrlib/src/tmr_tmsvr_communication.cpp -o CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.s

CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.o: CMakeFiles/tmrdriver.dir/flags.make
CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.o: /home/gy/tmr_ros2/tmrlib/src/tmr_communication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gy/tmr_ros2/build/tmrlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.o -c /home/gy/tmr_ros2/tmrlib/src/tmr_communication.cpp

CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gy/tmr_ros2/tmrlib/src/tmr_communication.cpp > CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.i

CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gy/tmr_ros2/tmrlib/src/tmr_communication.cpp -o CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.s

CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.o: CMakeFiles/tmrdriver.dir/flags.make
CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.o: /home/gy/tmr_ros2/tmrlib/src/tmr_robot_state.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gy/tmr_ros2/build/tmrlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.o -c /home/gy/tmr_ros2/tmrlib/src/tmr_robot_state.cpp

CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gy/tmr_ros2/tmrlib/src/tmr_robot_state.cpp > CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.i

CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gy/tmr_ros2/tmrlib/src/tmr_robot_state.cpp -o CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.s

CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.o: CMakeFiles/tmrdriver.dir/flags.make
CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.o: /home/gy/tmr_ros2/tmrlib/src/tmr_tmpacket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gy/tmr_ros2/build/tmrlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.o -c /home/gy/tmr_ros2/tmrlib/src/tmr_tmpacket.cpp

CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gy/tmr_ros2/tmrlib/src/tmr_tmpacket.cpp > CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.i

CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gy/tmr_ros2/tmrlib/src/tmr_tmpacket.cpp -o CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.s

# Object files for target tmrdriver
tmrdriver_OBJECTS = \
"CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.o" \
"CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.o" \
"CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.o" \
"CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.o" \
"CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.o" \
"CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.o" \
"CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.o"

# External object files for target tmrdriver
tmrdriver_EXTERNAL_OBJECTS =

libtmrdriver.a: CMakeFiles/tmrdriver.dir/src/tmr_driver.cpp.o
libtmrdriver.a: CMakeFiles/tmrdriver.dir/src/tmr_command.cpp.o
libtmrdriver.a: CMakeFiles/tmrdriver.dir/src/tmr_tmsct_communication.cpp.o
libtmrdriver.a: CMakeFiles/tmrdriver.dir/src/tmr_tmsvr_communication.cpp.o
libtmrdriver.a: CMakeFiles/tmrdriver.dir/src/tmr_communication.cpp.o
libtmrdriver.a: CMakeFiles/tmrdriver.dir/src/tmr_robot_state.cpp.o
libtmrdriver.a: CMakeFiles/tmrdriver.dir/src/tmr_tmpacket.cpp.o
libtmrdriver.a: CMakeFiles/tmrdriver.dir/build.make
libtmrdriver.a: CMakeFiles/tmrdriver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gy/tmr_ros2/build/tmrlib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library libtmrdriver.a"
	$(CMAKE_COMMAND) -P CMakeFiles/tmrdriver.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tmrdriver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tmrdriver.dir/build: libtmrdriver.a

.PHONY : CMakeFiles/tmrdriver.dir/build

CMakeFiles/tmrdriver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tmrdriver.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tmrdriver.dir/clean

CMakeFiles/tmrdriver.dir/depend:
	cd /home/gy/tmr_ros2/build/tmrlib && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gy/tmr_ros2/tmrlib /home/gy/tmr_ros2/tmrlib /home/gy/tmr_ros2/build/tmrlib /home/gy/tmr_ros2/build/tmrlib /home/gy/tmr_ros2/build/tmrlib/CMakeFiles/tmrdriver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tmrdriver.dir/depend

