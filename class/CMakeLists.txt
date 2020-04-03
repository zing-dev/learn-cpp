cmake_minimum_required(VERSION 3.2)

project(class)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(class-member-functions class-member-functions.cpp)
add_subdirectory(cpp-class)
add_subdirectory(cpp-inheritance)

