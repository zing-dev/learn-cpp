cmake_minimum_required(VERSION 3.2)
project(cpp-references)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES cpp-references.cpp)

add_executable(cpp-references ${SOURCE_FILES})
