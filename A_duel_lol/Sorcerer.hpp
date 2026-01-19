#ifndef A_DUEL_LOL_SORCERER_HPP
#define A_DUEL_LOL_SORCERER_HPP

#include "Character.hpp"
#include "Sorcerer.hpp"

class Sorcerer : public Character {
public:
    Sorcerer(string name, int health, int power);
    void attack() override;
};

#endif