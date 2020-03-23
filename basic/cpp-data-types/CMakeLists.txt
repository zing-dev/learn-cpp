cmake_minimum_required(VERSION 3.2)
project(cpp-data-types)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES cpp-data-types.cpp)

add_executable(cpp-data-types ${SOURCE_FILES})
