cmake_minimum_required(VERSION 4.0)
project(Robotics_Control_System)

set(CMAKE_CXX_STANDARD 20)

add_executable(Robotics_Control_System main.cpp
        Exceptions.cpp
        Robot.hpp
        DeliveryRobot.cpp
        RobotControlCenter.cpp
        MaintenanceRobot.cpp)
