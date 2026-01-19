#ifndef A_DUEL_LOL_CHARACTER_HPP
#define A_DUEL_LOL_CHARACTER_HPP

#include <string>
#include <iostream>

using namespace std;
class Character {
    private:
        string name;
        int health;
        int power;
    public:
        Character(string name, int health, int power);
        string getName() { return name; }
        virtual void attack();
        virtual void displayInfo();
};

#endif