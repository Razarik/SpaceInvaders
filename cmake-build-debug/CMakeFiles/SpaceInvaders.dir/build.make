# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Jonas\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-1\201.7846.88\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Jonas\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-1\201.7846.88\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Jonas\CLionProjects\SpaceInvaders

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SpaceInvaders.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SpaceInvaders.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SpaceInvaders.dir/flags.make

CMakeFiles/SpaceInvaders.dir/main.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/main.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SpaceInvaders.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\main.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\main.cpp

CMakeFiles/SpaceInvaders.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\main.cpp > CMakeFiles\SpaceInvaders.dir\main.cpp.i

CMakeFiles/SpaceInvaders.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\main.cpp -o CMakeFiles\SpaceInvaders.dir\main.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.obj: ../Game/Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\Entity.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Entity.cpp

CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Entity.cpp > CMakeFiles\SpaceInvaders.dir\Game\Entity.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Entity.cpp -o CMakeFiles\SpaceInvaders.dir\Game\Entity.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.obj: ../Game/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\Player.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Player.cpp

CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Player.cpp > CMakeFiles\SpaceInvaders.dir\Game\Player.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Player.cpp -o CMakeFiles\SpaceInvaders.dir\Game\Player.cpp.s

CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.obj: ../SDL/SDLPlayerShip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\SDL\SDLPlayerShip.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLPlayerShip.cpp

CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLPlayerShip.cpp > CMakeFiles\SpaceInvaders.dir\SDL\SDLPlayerShip.cpp.i

CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLPlayerShip.cpp -o CMakeFiles\SpaceInvaders.dir\SDL\SDLPlayerShip.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.obj: ../Game/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\Game.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Game.cpp

CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Game.cpp > CMakeFiles\SpaceInvaders.dir\Game\Game.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Game.cpp -o CMakeFiles\SpaceInvaders.dir\Game\Game.cpp.s

CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.obj: ../SDL/SDLFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\SDL\SDLFactory.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLFactory.cpp

CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLFactory.cpp > CMakeFiles\SpaceInvaders.dir\SDL\SDLFactory.cpp.i

CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLFactory.cpp -o CMakeFiles\SpaceInvaders.dir\SDL\SDLFactory.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.obj: ../Game/Enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\Enemy.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Enemy.cpp

CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Enemy.cpp > CMakeFiles\SpaceInvaders.dir\Game\Enemy.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Enemy.cpp -o CMakeFiles\SpaceInvaders.dir\Game\Enemy.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.obj: ../Game/Bonus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\Bonus.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Bonus.cpp

CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Bonus.cpp > CMakeFiles\SpaceInvaders.dir\Game\Bonus.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\Bonus.cpp -o CMakeFiles\SpaceInvaders.dir\Game\Bonus.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.obj: ../Game/EnemyBullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\EnemyBullet.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyBullet.cpp

CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyBullet.cpp > CMakeFiles\SpaceInvaders.dir\Game\EnemyBullet.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyBullet.cpp -o CMakeFiles\SpaceInvaders.dir\Game\EnemyBullet.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.obj: ../Game/EnemyShip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\EnemyShip.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyShip.cpp

CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyShip.cpp > CMakeFiles\SpaceInvaders.dir\Game\EnemyShip.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyShip.cpp -o CMakeFiles\SpaceInvaders.dir\Game\EnemyShip.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.obj: ../Game/PlayerBullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\PlayerBullet.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\PlayerBullet.cpp

CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\PlayerBullet.cpp > CMakeFiles\SpaceInvaders.dir\Game\PlayerBullet.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\PlayerBullet.cpp -o CMakeFiles\SpaceInvaders.dir\Game\PlayerBullet.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.obj: ../Game/PlayerShip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\PlayerShip.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\PlayerShip.cpp

CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\PlayerShip.cpp > CMakeFiles\SpaceInvaders.dir\Game\PlayerShip.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\PlayerShip.cpp -o CMakeFiles\SpaceInvaders.dir\Game\PlayerShip.cpp.s

CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.obj: ../SDL/SDLController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\SDL\SDLController.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLController.cpp

CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLController.cpp > CMakeFiles\SpaceInvaders.dir\SDL\SDLController.cpp.i

CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLController.cpp -o CMakeFiles\SpaceInvaders.dir\SDL\SDLController.cpp.s

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.obj: ../SDL/SDLEnemyShip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyShip.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyShip.cpp

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyShip.cpp > CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyShip.cpp.i

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyShip.cpp -o CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyShip.cpp.s

CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.obj: ../SDL/SDLPlayerBullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\SDL\SDLPlayerBullet.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLPlayerBullet.cpp

CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLPlayerBullet.cpp > CMakeFiles\SpaceInvaders.dir\SDL\SDLPlayerBullet.cpp.i

CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLPlayerBullet.cpp -o CMakeFiles\SpaceInvaders.dir\SDL\SDLPlayerBullet.cpp.s

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.obj: ../SDL/SDLEnemyBullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyBullet.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyBullet.cpp

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyBullet.cpp > CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyBullet.cpp.i

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyBullet.cpp -o CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyBullet.cpp.s

CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.obj: ../SDL/SDLBonus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\SDL\SDLBonus.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLBonus.cpp

CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLBonus.cpp > CMakeFiles\SpaceInvaders.dir\SDL\SDLBonus.cpp.i

CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLBonus.cpp -o CMakeFiles\SpaceInvaders.dir\SDL\SDLBonus.cpp.s

CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.obj: ../Game/EnemyBoss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\Game\EnemyBoss.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyBoss.cpp

CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyBoss.cpp > CMakeFiles\SpaceInvaders.dir\Game\EnemyBoss.cpp.i

CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\Game\EnemyBoss.cpp -o CMakeFiles\SpaceInvaders.dir\Game\EnemyBoss.cpp.s

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.obj: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.obj: CMakeFiles/SpaceInvaders.dir/includes_CXX.rsp
CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.obj: ../SDL/SDLEnemyBoss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyBoss.cpp.obj -c C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyBoss.cpp

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyBoss.cpp > CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyBoss.cpp.i

CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jonas\CLionProjects\SpaceInvaders\SDL\SDLEnemyBoss.cpp -o CMakeFiles\SpaceInvaders.dir\SDL\SDLEnemyBoss.cpp.s

# Object files for target SpaceInvaders
SpaceInvaders_OBJECTS = \
"CMakeFiles/SpaceInvaders.dir/main.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.obj" \
"CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.obj"

# External object files for target SpaceInvaders
SpaceInvaders_EXTERNAL_OBJECTS =

SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/main.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/Entity.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/Player.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerShip.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/Game.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/SDL/SDLFactory.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/Enemy.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/Bonus.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/EnemyBullet.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/EnemyShip.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/PlayerBullet.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/PlayerShip.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/SDL/SDLController.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyShip.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/SDL/SDLPlayerBullet.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBullet.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/SDL/SDLBonus.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/Game/EnemyBoss.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/SDL/SDLEnemyBoss.cpp.obj
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/build.make
SpaceInvaders.exe: C:/MinGW/lib/libSDL2.dll.a
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/linklibs.rsp
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/objects1.rsp
SpaceInvaders.exe: CMakeFiles/SpaceInvaders.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking CXX executable SpaceInvaders.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SpaceInvaders.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SpaceInvaders.dir/build: SpaceInvaders.exe

.PHONY : CMakeFiles/SpaceInvaders.dir/build

CMakeFiles/SpaceInvaders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SpaceInvaders.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SpaceInvaders.dir/clean

CMakeFiles/SpaceInvaders.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jonas\CLionProjects\SpaceInvaders C:\Users\Jonas\CLionProjects\SpaceInvaders C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug C:\Users\Jonas\CLionProjects\SpaceInvaders\cmake-build-debug\CMakeFiles\SpaceInvaders.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SpaceInvaders.dir/depend

