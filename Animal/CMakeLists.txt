cmake_minimum_required(VERSION 3.10)

project(animal
  VERSION
    1.0
  DESCRIPTION
    "animal implementation"
  LANGUAGES
    CXX
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(animal main.cpp Animal.cpp)

add_compile_options(-Wall -Wextra -Wpedantic, -fpermissive, -g)

add_custom_command(
    TARGET animal
    POST_BUILD
    COMMAND ${CMAKE_SOURCE_DIR}/bin/animal
    DEPENDS animal
    COMMENT "Running animal example implementation test"
)