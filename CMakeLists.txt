cmake_minimum_required(VERSION 3.16)

project(cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(
        hello hello-world.cpp
        01-types.cpp
)