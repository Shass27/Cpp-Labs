cmake_minimum_required(VERSION 4.0)
project(Digital_Art_Gallery)

set(CMAKE_CXX_STANDARD 20)

add_executable(Digital_Art_Gallery main.cpp
        Exhibition.cpp
        Exhibition.hpp
        Gallery.cpp
        Gallery.hpp
        Artwork.cpp
        Artwork.hpp)
