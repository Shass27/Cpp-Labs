cmake_minimum_required(VERSION 4.0)
project(Network_Packet_Processing)

set(CMAKE_CXX_STANDARD 20)

add_executable(Network_Packet_Processing main.cpp
        Packet.cpp
        Packet.hpp
        PacketType.hpp
        Protocol.hpp
        Status.hpp)
