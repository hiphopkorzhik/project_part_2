cmake_minimum_required(VERSION 3.23)
project(git_project_part_2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -fopenmp")
add_executable(git_project_part_2 main.cpp ./internal/methods.h)
add_executable(doFiles files/doFiles.cpp)
