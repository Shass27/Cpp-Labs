#include "MaintenanceRobot.hpp"

void MaintenanceRobot::performTask() {
    if (mechanicalIntegrity < 30) {
        throw MechanicalFailureException("Low mechanical integrity");
    }
    else {
        cout << "Performing maintanance task" << endl;
        mechanicalIntegrity-=15;
    }
}