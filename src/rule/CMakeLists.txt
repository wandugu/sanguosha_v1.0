target_include_directories(sanguosha PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB CUR_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
target_sources(sanguosha PRIVATE ${CUR_SRC})

