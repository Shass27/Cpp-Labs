#ifndef ROBOT_CONTROL_CENTER_HPP
#define ROBOT_CONTROL_CENTER_HPP

#include <vector>
#include <iostream>
#include "Robot.hpp"
#include "Exceptions.hpp"

using namespace std;

class RobotControlCenter {
private:
    vector<Robot *> robotCollection;

    void logError(const string &errorMessage);

public:
    RobotControlCenter(int capacity);

    void addRobot(Robot *robot);

    void executeAllRobotTasks();
};

#endif // ROBOT_CONTROL_CENTER_HPP