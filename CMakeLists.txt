cmake_minimum_required(VERSION 3.14)
project(sanguosha)

set(CMAKE_CXX_STANDARD 11)

add_compile_options(-std=c++11)

set(CMAKE_EXE_LINKER_FLAGS "-static")

include_directories(src)

set(sgsAll src/main.cpp
           src/player.cpp
           src/card_info.cpp
    )

add_executable(sanguosha ${sgsAll})