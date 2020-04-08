cmake_minimum_required(VERSION 3.15)
project(sanguosha)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXE_LINKER_FLAGS "-static")

include_directories(src)

set(sgsAll src/main.cpp
           src/player.cpp
           src/card_info.cpp
        )

add_executable(sanguosha ${sgsAll})