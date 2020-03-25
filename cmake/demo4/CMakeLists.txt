cmake_minimum_required(VERSION 3.2)

# 项目信息
project (demo4)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

# 是否使用自己的 MathFunctions 库
option (USE_MY_MATH "Use provided math implementation" OFF)

# 加入一个配置头文件，用于处理 CMake 对源码的设置
configure_file (
        "${PROJECT_SOURCE_DIR}/config.h.in"
        "${PROJECT_BINARY_DIR}/config.h"
)

# 是否加入 MathFunctions 库
if (USE_MY_MATH)
    include_directories ("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory (math)
    set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MY_MATH)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable (demo4 ${DIR_SRCS})
target_link_libraries (demo4  ${EXTRA_LIBS})