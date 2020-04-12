cmake_minimum_required(VERSION 3.14)
project(sanguosha)

set(CMAKE_CXX_STANDARD 11)

add_compile_options(-std=c++11)

set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

set(sgsAll src/rule/identity_rule.cpp src/rule/identity_rule.h)

add_executable(sanguosha ${sgsAll} src/rule/identity_rule.cpp src/rule/identity_rule.h)

install(TARGETS sanguosha DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/test)

add_subdirectory(src)
