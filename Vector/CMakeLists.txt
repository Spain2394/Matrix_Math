cmake_minimum_required(VERSION 3.7)
project(Vector)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Vector.cpp Vector.h)
add_executable(Vector ${SOURCE_FILES})