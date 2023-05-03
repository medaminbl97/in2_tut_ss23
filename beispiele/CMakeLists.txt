cmake_minimum_required(VERSION 3.20)
project(beispiele)

set(CMAKE_CXX_STANDARD 14)

add_executable(beispiele main.cpp vec3d.cpp vec3d.h array.cpp array.h)
