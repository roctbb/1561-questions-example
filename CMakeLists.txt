cmake_minimum_required(VERSION 3.26)
project(train)

set(CMAKE_CXX_STANDARD 17)

add_executable(train main.cpp
        Question.cpp
        Question.h)
