cmake_minimum_required(VERSION 3.6.2)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
set(CMAKE_BUILD_TYPE Debug)
project(lab2)
add_executable(lab2_main ${CMAKE_CURRENT_SOURCE_DIR}/lab2_main.cpp)
target_sources(lab2_main
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/lab2_RecordManager.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/lab2_RecordManager.hpp"
)