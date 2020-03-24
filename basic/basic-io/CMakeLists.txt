cmake_minimum_required(VERSION 3.2)

project(basic-io)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp basic-io.cpp basic-io.h)

add_executable(basic-io ${SOURCE_FILES})