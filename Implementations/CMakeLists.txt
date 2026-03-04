cmake_minimum_required(VERSION 4.1)
project(Implementations)

set(CMAKE_CXX_STANDARD 20)

add_executable(Implementations src/main.cpp
        src/Graph.cpp
        include/Graph.h
        src/Algorithms.cpp
        include/Algorithms.h)
