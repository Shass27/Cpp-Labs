#include "RobotControlCenter.hpp"
#include "DeliveryRobot.hpp"
#include "MaintenanceRobot.hpp"

using namespace std;

int main() {
    try {
        RobotControlCenter controlCenter(5);
        DeliveryRobot* dr1 = new DeliveryRobot("dr1", 50);
        DeliveryRobot* dr2 = new DeliveryRobot("dr2", 10);
        MaintenanceRobot* mr1 = new MaintenanceRobot("mr1", 80);
        MaintenanceRobot* mr2 = new MaintenanceRobot("mr2", 20);

        controlCenter.addRobot(dr1);
        controlCenter.addRobot(dr2);
        controlCenter.addRobot(mr1);
        controlCenter.addRobot(mr2);

        controlCenter.executeAllRobotTasks();
    }
    catch (const exception &error) {
        cout << error.what() << endl;
    }
    catch (...) {
        cout << "unknown exception" << endl;
    }
    cout << "Program terminated" << endl;
    return 0;
}