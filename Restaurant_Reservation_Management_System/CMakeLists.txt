cmake_minimum_required(VERSION 4.0)
project(Restaurant_Reservation_Management_System)

set(CMAKE_CXX_STANDARD 20)

add_executable(Restaurant_Reservation_Management_System main.cpp
        restaurant.cpp
        Restaurant.hpp
        Customer.cpp
        Customer.hpp
        Table.cpp
        Table.hpp
        removeElement.hpp)
