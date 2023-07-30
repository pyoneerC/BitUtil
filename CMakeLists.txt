cmake_minimum_required(VERSION 3.25)
project(bitslibrary)

set(CMAKE_CXX_STANDARD 23)

add_library(bitslibrary BitUtil.cpp)

add_executable(bitslibrary_test BitUtil.cpp)

target_link_libraries(bitslibrary_test PRIVATE bitslibrary)
