target_link_libraries(sanguosha ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB CUR_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
target_sources(sanguosha PRIVATE ${CUR_SRC})

add_subdirectory(hero)
add_subdirectory(card)
add_subdirectory(rule)
add_subdirectory(player)
