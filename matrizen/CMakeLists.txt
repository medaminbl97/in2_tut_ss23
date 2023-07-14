cmake_minimum_required(VERSION 3.20)
project(matrizen)

set(CMAKE_CXX_STANDARD 14)

add_executable(matrizen main.cpp vec3.cpp vec3.h mat3x3.cpp mat3x3.h triangle.cpp triangle.h Model3d.cpp Model3d.h)
