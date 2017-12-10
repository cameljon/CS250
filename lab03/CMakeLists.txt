cmake_minimum_required (VERSION 3.6.2)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)
project (lab03)
add_executable(lab03 ${CMAKE_CURRENT_SOURCE_DIR}/lab3_main.cpp) 
target_sources(lab03
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/lab3_SmartStaticArray.cpp" 
        "${CMAKE_CURRENT_SOURCE_DIR}/cuTEST/TesterBase.cpp"
)