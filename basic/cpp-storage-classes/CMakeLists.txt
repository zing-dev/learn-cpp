cmake_minimum_required(VERSION 3.2)
project(cpp-storage-classes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        cpp-storage-classes.cpp
        static.cpp static.h
        extern.cpp extern.h
        )

add_executable(cpp-storage-classes ${SOURCE_FILES})
