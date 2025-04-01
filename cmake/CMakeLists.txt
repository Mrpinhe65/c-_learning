# C++项目通常由如下文件夹
# bin--可执行文件
# include--C++的 .h 和 .hpp文件
# src--C++的 .cpp 文件
# build--cmake生成的文件
# 创建 build目录，进入build目录，在build运行 cmake ..
# CMakeLists.txt 文件依然在 build 目录的上一级目录中

//声明cmake运行的最低版本
cmake_minimum_required(VERSION 3.10)

# 声明工程名称
project(itheima)

# bin 目录存放最后生成的可执行文件
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# src  所有源码文件保存自定义的SRC_LIST变量中(变量名可以自己定)
aux_source_directory(src SRC_LIST)

# include 头文件路径设置
include_directories(include)

add_executable(p500rand ${SRC_LIST})

#声明生成的目标文件和目标文件所依赖的代码文件
#add_executable(p500rand p500rand.cpp)
