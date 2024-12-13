cmake_minimum_required(VERSION 3.20)
project(conways-game-of-life)

message("Creating build at ${CMAKE_BINARY_DIR}/bin")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(renderer renderer.h renderer.cpp)
add_executable(main main.cpp)

target_link_libraries(main renderer)
