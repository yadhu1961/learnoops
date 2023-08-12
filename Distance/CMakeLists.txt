cmake_minimum_required(VERSION 3.10)

project(distance
  VERSION
    1.0
  DESCRIPTION
    "distance implementation"
  LANGUAGES
    CXX
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(distance main.cpp Distance.cpp)

add_compile_options(-Wall -Wextra -Wpedantic, -fpermissive, -g)

add_custom_command(
    TARGET distance
    POST_BUILD
    COMMAND ${CMAKE_SOURCE_DIR}/bin/distance
    DEPENDS distance
    COMMENT "Running distance example implementation test"
)