cmake_minimum_required(VERSION 3.2)

project(demo2)

#aux_source_directory(<dir> <variable>)
#查找当前目录下的所有源文件
aux_source_directory(. DIR_SOURCES)
#并将名称保存到 DIR_SRCS 变量
add_executable(demo2 ${DIR_SOURCES})

#add_executable(demo2 main.cpp my-math.cpp my-math.h)
