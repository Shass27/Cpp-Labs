#include <iostream>
#include "Restaurant.hpp"

using namespace std;
int main() {
    Restaurant restaurant(2);
    std::shared_ptr<Customer> c1 = make_shared<Customer>("c1");
    std::shared_ptr<Customer> c2 = make_shared<Customer>("c2");
    std::shared_ptr<Customer> c3 = make_shared<Customer>("c3");
    std::shared_ptr<Customer> c4 = make_shared<Customer>("c4");
    if (restaurant.reserveTable(c1)) {
        std::cout << "Reserving table for " << c1->getName() << ": Success" << std::endl;
    }
    else {
        std::cout << "Reserving table for " << c1->getName() <<": Added to waitlist!"<< std::endl;
    }
    if (restaurant.reserveTable(c2)) {
        std::cout << "Reserving table for " << c2->getName() << ": Success" << std::endl;
    }
    else {
        std::cout << "Reserving table for " << c2->getName() <<": Added to waitlist!"<< std::endl;
    }
    if (restaurant.reserveTable(c3)) {
        std::cout << "Reserving table for " << c3->getName() << ": Success" << std::endl;
    }
    else {
        std::cout << "Reserving table for " << c3->getName() <<": Added to waitlist!"<< std::endl;
    }
    if (restaurant.reserveTable(c4)) {
        std::cout << "Reserving table for " << c4->getName() << ": Success" << std::endl;
    }
    else {
        std::cout << "Reserving table for " << c4->getName() <<": Added to waitlist!"<< std::endl;
    }
    restaurant.releaseTable(1);
    restaurant.printWaitlist();
    return 0;
}