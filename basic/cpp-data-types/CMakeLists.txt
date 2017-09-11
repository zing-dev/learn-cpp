cmake_minimum_required(VERSION 3.2)
project(cpp-variable-types)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES cpp-variable-types.cpp)

add_executable(cpp-variable-types ${SOURCE_FILES})
