cmake_minimum_required(VERSION 3.20)
project(conways-game-of-life)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(renderer ${CMAKE_SOURCE_DIR}/renderer.h ${CMAKE_SOURCE_DIR}/renderer.cpp)

add_executable(main ${CMAKE_SOURCE_DIR}/main.cpp)

target_link_libraries(main renderer)
