#include "DeliveryRobot.hpp"

void DeliveryRobot::performTask() {
    if (batteryLevel < 20) {
        throw BatteryLowException("Battery level is too low!");
    }
    else {
        cout << "DeliveryRobot is delivering" << endl;
        batteryLevel -= 10;
        cout << "Delivery done" << endl;
    }
}

