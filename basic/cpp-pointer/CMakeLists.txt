cmake_minimum_required(VERSION 3.2)
project(cpp-pointer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

add_executable(cpp-pointer-main ${SOURCE_FILES})
add_executable(cpp-pointer pointer.cpp)
