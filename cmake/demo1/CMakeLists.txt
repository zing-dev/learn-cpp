#指定运行此配置文件所需的 CMake 的最低版本；
cmake_minimum_required(VERSION 3.2)

#表示项目的名称是 Demo1
project(demo1)

#将名为 main.cpp 的源文件编译成一个名称为 Demo 的可执行文件。
add_executable(demo1 main.cpp)
