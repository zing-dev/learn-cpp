cmake_minimum_required(VERSION 3.2)
project(cpp-data-types)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES cpp-data-types.cpp )
add_executable(cpp-data-types cpp-data-types.cpp)
add_executable(fixed-width-integers-and-size-t fixed-width-integers-and-size-t.cpp)
add_executable(floating-point-numbers floating-point-numbers.cpp)
add_executable(boolean-values boolean-values.cpp)
add_executable(chars chars.cpp)
add_executable(literals literals.cpp)
add_executable(const const.cpp)
