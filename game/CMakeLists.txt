cmake_minimum_required(VERSION 3.22)
project(game)

set(CMAKE_CXX_STANDARD 17)

add_executable(game main.cpp Game.cpp Game.h GameManager.cpp GameManager.h Character.cpp Character.h Inventory.cpp Inventory.h Item.cpp Item.h Map.cpp Map.h Tile.cpp Tile.h UI.cpp UI.h)
