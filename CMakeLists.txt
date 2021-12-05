cmake_minimum_required(VERSION 3.20)
project(HelloClion)

set(CMAKE_CXX_STANDARD 14)


# spdlog
add_subdirectory(spdlog)
include_directories(spdlog/include)
link_libraries(spdlog)

# MyLib
add_subdirectory(MyLib)
include_directories(MyLib/include)
link_libraries(MyLib)


add_executable(HelloClion main.cpp)
