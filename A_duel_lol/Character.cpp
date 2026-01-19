#include "Character.hpp"

using namespace std;

Character::Character(string name, int health, int power) : name(name), health(health), power(power){}

void Character::attack() {
    cout << "Basic Low Attack" << endl;
}

void Character::displayInfo() {
    cout << "Name: " << getName() << ", Health: " << health << ", Power: " << power << endl;
}
