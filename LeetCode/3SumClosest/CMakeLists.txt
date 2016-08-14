# 设置所需要的cmake最小版本
cmake_minimum_required(VERSION 2.8) 

# 设置C++版本
add_definitions(-std=c++11)


# 设置项目名称
# TODO
PROJECT (3SumClosest)

# 设置项目安装路径
# SET(CMAKE_INSTALL_PREFIX /project/to/install/path)

# 设置编译选项
ADD_DEFINITIONS(-g -Wall -Werror)

# 设置包含头文件路径，每行单独一个路径
INCLUDE_DIRECTORIES(
	#TODO
	"./include"
	)

# 设置待链接的库文件路径
LINK_DIRECTORIES(
	
	)

# 将当前目录下的源代码文件列表赋给变量SRC_LIST
# TODO
SET(SRC_DIR ./src)
SET(SRC_LIST ${SRC_DIR}/Solution.cpp ${SRC_DIR}/test.cpp)
#AUX_SOURCE_DIRECTORY(${SRC_DIR}/test.cpp SRC_LIST)
#MESSAGE(STATUS "This is SOURCE dir "${HELLO_SOURCE_DIR})

# 添加动态库
# ADD_LIBRARY(xxx SHARED ${SRC_LIST})

# 设置依赖关系，如果当前库是最底层的共享库，则不需要设置
# ADD_DEPENDENCIES(xxx dependlib1 ...)

# 添加要链接的共享库
#TARGET_LINK_LIBRARIES(xxx ......)

# 添加可执行程序
ADD_EXECUTABLE(3SumClosest ${SRC_LIST})

# 安装可执行程序文件
# INSTALL(TARGETS xxx RUNTIME DESTINATION xxx)

MESSAGE(STATUS "**************************")
MESSAGE(STATUS "CMAKE SUCCESS!")
MESSAGE(STATUS "**************************")
