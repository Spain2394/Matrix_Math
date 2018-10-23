cmake_minimum_required(VERSION 3.7)
project(_Project1)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES p1.cpp Matrix.cpp Matrix.h)
add_executable(_Project1 ${SOURCE_FILES})