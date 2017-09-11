cmake_minimum_required(VERSION 3.2)
project(basic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES cpp-references/cpp-references.cpp)

add_executable(basic ${SOURCE_FILES})
add_subdirectory(cpp-data-types)
add_subdirectory(cpp-references)
