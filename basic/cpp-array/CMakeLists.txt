cmake_minimum_required(VERSION 3.2)
project(cpp-array)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

add_executable(cpp-array ${SOURCE_FILES})
add_executable(cpp-array2 array.cpp)
