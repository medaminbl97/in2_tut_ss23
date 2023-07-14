cmake_minimum_required(VERSION 3.20)
project(virtual_copy_constructor)

set(CMAKE_CXX_STANDARD 14)

add_executable(virtual_copy_constructor main.cpp person.cpp person.h Uni.cpp Uni.h)
