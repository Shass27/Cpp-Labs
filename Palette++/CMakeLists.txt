cmake_minimum_required(VERSION 4.0)
project(Palette__)

set(CMAKE_CXX_STANDARD 20)

add_executable(Palette__ main.cpp
        Color.cpp
        Color.hpp
        ColorUtility.cpp
        ColorUtility.hpp)
