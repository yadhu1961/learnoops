cmake_minimum_required(VERSION 3.10)

project(placement_new
  VERSION
    1.0
  DESCRIPTION
    "placement_new implementation"
  LANGUAGES
    CXX
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(placement_new src/main.cpp)

add_compile_options(-Wall -Wextra -Wpedantic, -fpermissive, -g)

add_custom_command(
    TARGET placement_new
    POST_BUILD
    COMMAND ${CMAKE_SOURCE_DIR}/bin/placement_new
    DEPENDS placement_new
    COMMENT "Running placement new example implementation test"
)