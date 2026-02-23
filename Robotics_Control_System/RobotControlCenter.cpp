#include "RobotControlCenter.hpp"
using namespace std;

RobotControlCenter::RobotControlCenter(int capacity) {
    if (capacity < 0) throw RobotException("robot capacity is negative");
    else {
        cout << "Control center was created" << endl;
    }
}

void RobotControlCenter::addRobot(Robot *robot) {
    robotCollection.push_back(robot);
}

void RobotControlCenter::logError(const string &errorMessage) {
    cout << "Error: " << errorMessage << endl;
}

void RobotControlCenter::executeAllRobotTasks() {
    try {
        for (Robot* robot : robotCollection) {
            robot->performTask();
        }
    }
    catch (const BatteryLowException& e) {
        logError(e.what());
    }
    catch (const MechanicalFailureException& e) {
        logError(e.what());
    }
    catch (const RobotException& e) {
        logError(e.what());
    }
    catch (...) {
        logError("Unknown robot error");
        throw;
    }
}