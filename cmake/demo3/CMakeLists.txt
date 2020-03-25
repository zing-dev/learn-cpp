cmake_minimum_required(VERSION 3.2)

project(demo3)


# 查找目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加 math 子目录
add_subdirectory(math)

# 指定生成目标
add_executable(demo3 ${DIR_SRCS})

# 添加链接库
target_link_libraries(demo3 my-math)