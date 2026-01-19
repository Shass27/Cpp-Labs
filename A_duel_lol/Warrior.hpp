#ifndef A_DUEL_LOL_WARRIOR_HPP
#define A_DUEL_LOL_WARRIOR_HPP

#include "Character.hpp"
#include "Warrior.hpp"

class Warrior : public Character {
    public:
        Warrior(string name, int health, int power);
    void attack() override;
    void specialAttack();
};

#endif