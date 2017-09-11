# cmake_minimum_required(VERSION <specify CMake version here>)
project(learn_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

add_executable(learn_cpp ${SOURCE_FILES})