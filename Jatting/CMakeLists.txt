cmake_minimum_required(VERSION 3.10)

project(jatting
  VERSION
    1.0
  DESCRIPTION
    "jatting implementation"
  LANGUAGES
    CXX
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(jatting main.cpp)

add_compile_options(-Wall -Wextra -Wpedantic, -fpermissive, -g)

add_custom_command(
    TARGET jatting
    POST_BUILD
    COMMAND ${CMAKE_SOURCE_DIR}/bin/jatting
    DEPENDS jatting
    COMMENT "Running jatting example implementation test"
)