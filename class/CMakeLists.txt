cmake_minimum_required(VERSION 3.2)

project(class)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(class-member-functions class-member-functions.cpp)
add_executable(cpp-overloading cpp-overloading.cpp)
add_executable(cpp-overloading2 cpp-overloading2.cpp)
add_executable(polymorphism polymorphism.cpp)
add_executable(call-operator-overloading call-operator-overloading.cpp)
add_executable(data-abstraction data-abstraction.cpp)
add_subdirectory(cpp-class)
add_subdirectory(cpp-inheritance)

