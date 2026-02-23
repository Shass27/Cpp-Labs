#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>
#include <string>

using namespace std;

class RobotException : public std::exception {
    private:
    string errorMessage;
public:
    RobotException(const string& message);
    const char* what() const noexcept override;
};

class BatteryLowException : public RobotException {
    public:
    BatteryLowException(const string& message);
};

class MechanicalFailureException : public RobotException {
    public:
    MechanicalFailureException(const string& message);
};

#endif // EXCEPTIONS_HPP