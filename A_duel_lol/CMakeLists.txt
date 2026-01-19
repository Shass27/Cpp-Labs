cmake_minimum_required(VERSION 4.0)
project(A_duel_lol)

set(CMAKE_CXX_STANDARD 20)

add_executable(A_duel_lol main.cpp
        Character.cpp
        Character.hpp
        Sorcerer.cpp
        Sorcerer.hpp
        Warrior.cpp
        Warrior.hpp)
