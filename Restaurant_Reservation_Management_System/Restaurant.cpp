#include "Restaurant.hpp"
#include "Customer.hpp"
#include "removeElement.hpp"

#include <iostream>

using namespace std;

Restaurant::Restaurant(int initialTableCount) {
    for (int i = 1; i <= initialTableCount; i++) {
        tables.push_back(std::make_unique<Table>(1));
    }
}
bool Restaurant::reserveTable(std::shared_ptr<Customer> &customer) {
    for (auto &table : tables) {
        if (table->getIsAvailable()) {
            table->reserve();
            activeCustomers.push_back(customer);
            return true;
        }
    }
    waitlist.push_back(customer);
    return false;
}

void Restaurant::printWaitlist() {
    std::cout << "The following people are waiting for a table: " << std::endl;
    for (const auto& wcustomer : waitlist) {
        if (auto customer = wcustomer.lock()) {
            std::cout << customer->getName() << std::endl;
        }
        else {
            std::cout << "NULL" << std::endl;
        }
    }
}

void Restaurant::releaseTable(int tableNumber) {
    for (auto& table: tables) {
        if (table->getNumber() == tableNumber && !table->getIsAvailable()) {
            table->release();
        }
    }
    notifyWaitlist();
}

void Restaurant::notifyWaitlist() {
    if (waitlist.empty()) return;
    std::shared_ptr<Customer> customer;
    if (auto fcustomer = waitlist[0].lock()) {
        customer = fcustomer;
        reserveTable(customer);
        removeElement(waitlist, customer);
    }
    else {
        std::cout << "NULL" << std::endl;
    }
}