cmake_minimum_required(VERSION 3.10)

project(helloworld
  VERSION
    1.0
  DESCRIPTION
    "helloworld implementation"
  LANGUAGES
    CXX
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(helloworld HelloWorld.cpp)

add_compile_options(-Wall -Wextra -Wpedantic, -fpermissive, -g)

add_custom_command(
    TARGET helloworld
    POST_BUILD
    COMMAND ${CMAKE_SOURCE_DIR}/bin/helloworld 1 2
    DEPENDS helloworld
    COMMENT "Running helloworld example implementation test"
)