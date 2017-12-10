cmake_minimum_required(VERSION 3.6.2)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
set(CMAKE_BUILD_TYPE Debug)
project(project1)
add_executable(project1_main ${CMAKE_CURRENT_SOURCE_DIR}/project1_main.cpp)
target_sources(project1_main
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/project1_CustomerData.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/project1_CustomerData.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/project1_LinkedList.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/project1_LinkedList.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/project1_program.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/project1_program.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/project1_Tester.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/cuTEST/Menu.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/cuTEST/StringUtil.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/cuTEST/TesterBase.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/cuTEST/TesterBase.hpp"
)