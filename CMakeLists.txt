cmake_minimum_required(VERSION 3.10)

project(OOPs
  VERSION
    1.0
  DESCRIPTION
    "Learn OOPs implementation"
  LANGUAGES
    CXX
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY build)

add_subdirectory(Animal Animal/bin)
add_subdirectory(Distance Distance/bin)
add_subdirectory(HelloWorld HelloWorld/bin)
add_subdirectory(Jatting Jatting/bin)
add_subdirectory(placement_new placement_new/bin)
add_subdirectory(Test_ANSI_cpp_support Test_ANSI_cpp_support/bin)