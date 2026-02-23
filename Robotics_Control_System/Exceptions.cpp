#include "Exceptions.hpp"

RobotException::RobotException(const string& message) : errorMessage(message) {}

const char* RobotException::what() const noexcept {
    return errorMessage.c_str();
}

BatteryLowException::BatteryLowException(const string& message) : RobotException(message) {}

MechanicalFailureException::MechanicalFailureException(const string& message) : RobotException(message) {}