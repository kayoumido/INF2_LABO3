cmake_minimum_required(VERSION 3.13)
project(Labo3)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wconversion -Wextra -pedantic")

add_executable(Labo3 main.cpp sort.h Date.cpp Date.h Point.cpp Point.h)