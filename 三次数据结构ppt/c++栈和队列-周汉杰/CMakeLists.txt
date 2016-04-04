cmake_minimum_required(VERSION 3.3)
project(data_structures_)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp chainStack.h arrayStack.h)
add_executable(data_structures_ ${SOURCE_FILES})