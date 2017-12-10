cmake_minimum_required(VERSION 3.6.2)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
set(CMAKE_BUILD_TYPE Debug)
project(Project03)
add_executable(program_main ${CMAKE_CURRENT_SOURCE_DIR}/program_main.cpp)
target_sources(program_main
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/BinarySearchTree.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/Employee.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/EmployeeManager.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/EmployeeManager.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/Timer.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/Timer.hpp"
)
add_executable(test_main ${CMAKE_CURRENT_SOURCE_DIR}/test_main.cpp)
target_sources(test_main
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/BinarySearchTree.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/Tester.hpp"
)
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/cuTEST")