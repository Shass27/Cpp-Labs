#ifndef RESTAURANT_RESERVATION_MANAGEMENT_SYSTEM_REST_HPP
#define RESTAURANT_RESERVATION_MANAGEMENT_SYSTEM_REST_HPP

#include <vector>
#include <memory>
#include "Table.hpp"
#include "Customer.hpp"


class Restaurant {
private:
    void notifyWaitlist();

public:
    std::vector<std::unique_ptr<Table>> tables;
    std::vector<std::shared_ptr<Customer>> activeCustomers;
    std::vector<std::weak_ptr<Customer>> waitlist;
    Restaurant(int initialTableCount);
    bool reserveTable(std::shared_ptr<Customer>& customer);
    void printWaitlist();
    void releaseTable(int tableNumber);
};

#endif