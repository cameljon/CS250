cmake_minimum_required(VERSION 3.6.2)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-g -Wall -std=c++11")
project(lab09)
set(SOURCE_FILES lab9_main.cpp lab9_Character.cpp)
add_executable(lab9_main lab9_main.cpp lab9_Character.cpp)