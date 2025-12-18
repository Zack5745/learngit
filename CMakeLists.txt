cmake_minimum_required(VERSION 3.5.0)
project(vsgit VERSION 0.1.0 LANGUAGES C CXX)

# 设置包含目录
include_directories(include)

# 添加所有源文件
add_executable(vsgit 
    src/main.cpp
    src/Student.cpp
    src/StudentManager.cpp
)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
