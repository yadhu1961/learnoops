cmake_minimum_required(VERSION 3.10)

project(Test_ANSI_cpp_support
  VERSION
    1.0
  DESCRIPTION
    "Test_ANSI_cpp_support implementation"
  LANGUAGES
    CXX
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(Test_ANSI_cpp_support Test_ANSI_cpp_support.cpp)

add_compile_options(-Wall -Wextra -Wpedantic, -fpermissive, -g)

add_custom_command(
    TARGET Test_ANSI_cpp_support
    POST_BUILD
    COMMAND ${CMAKE_SOURCE_DIR}/bin/Test_ANSI_cpp_support
    DEPENDS Test_ANSI_cpp_support
    COMMENT "Running Test_ANSI_cpp_support example implementation test"
)