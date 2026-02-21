#include "Packet.hpp"
#include <iostream>

using namespace std;

Packet::Packet(PacketType pType, Protocol prtcl) : type(pType), protocol(prtcl) {}

string Packet::getPacketTypeName() const {
    switch (type) {
        case PacketType::UNKNOWN: return "Unknown";
            break;
        case PacketType::DATA: return "Data";
            break;
        case PacketType::CONTROL: return "Control";
            break;
        case PacketType::ERROR: return "Error";
            break;
            default: return "Unknown Error";
    }
    return "Unknown";
}

string Packet::getStatusName() const {

}

string Packet::getProtocolName() {
    switch (protocol) {
        case Protocol::TCP: return "TCP";
            break;
        case Protocol::UDP: return "UDP";
            break;
        case Protocol::HTTP: return "HTTP";
            break;
        case Protocol::FTP: return "FTP";
            break;
    }
    return "Unknown";
}

void Packet::validatePacket() {

}

bool Packet::isError() {

}

void Packet::displayInfo() {

}

void Packet::setType(PacketType newType) {
    type = newType;
}