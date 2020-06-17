cmake_minimum_required(VERSION 3.15)
project(SpaceInvaders)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(SpaceInvaders main.cpp Game/Entity.cpp Game/Entity.h Game/Player.cpp Game/Player.h Game/PlayerShip.h SDL/SDLPlayerShip.cpp SDL/SDLPlayerShip.h Game/Game.cpp Game/Game.h Game/AbstractFactory.h SDL/SDLFactory.cpp SDL/SDLFactory.h Game/Enemy.cpp Game/Enemy.h Game/PlayerBullet.h Game/EnemyBullet.h Game/EnemyShip.h Game/Bonus.cpp Game/Bonus.h Game/EnemyBullet.cpp Game/EnemyShip.cpp Game/PlayerBullet.cpp Game/PlayerShip.cpp Game/Controller.cpp Game/Controller.h SDL/SDLController.cpp SDL/SDLController.h SDL/SDLEnemyShip.cpp SDL/SDLEnemyShip.h GameConstants.h SDL/SDLPlayerBullet.cpp SDL/SDLPlayerBullet.h SDL/SDLEnemyBullet.cpp SDL/SDLEnemyBullet.h SDL/SDLBonus.cpp SDL/SDLBonus.h)
target_link_libraries(SpaceInvaders ${SDL2_LIBRARY} -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer)