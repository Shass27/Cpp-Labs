#ifndef RESTAURANT_RESERVATION_MANAGEMENT_SYSTEM_TABLE_HPP
#define RESTAURANT_RESERVATION_MANAGEMENT_SYSTEM_TABLE_HPP

class Table {
private:
    int number;
    bool isAvailable;

public:
    Table(int num);
    void reserve();
    void release();
    bool getIsAvailable() const;
    int getNumber() const;
};

#endif