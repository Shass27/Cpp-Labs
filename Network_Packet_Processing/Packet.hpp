#include <string>
#include "PacketType.hpp"
#include "Protocol.hpp"
#include "Status.hpp"

using namespace std;

class Packet {
private:
    string getPacketTypeName() const;
    string getStatusName() const;


public:
    string getProtocolName();
    void validatePacket();
    bool isError();
    void displayInfo();
};
