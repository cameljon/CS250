cmake_minimum_required(VERSION 3.6.2)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
set(CMAKE_BUILD_TYPE Debug)
project(lab14)
add_executable(lab14_main ${CMAKE_CURRENT_SOURCE_DIR}/lab14_main.cpp)
target_sources(lab14_main
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/lab14_Filesystem.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/StringUtil.hpp
)