#include <vector>
#include "Warrior.hpp"
#include "Sorcerer.hpp"

using namespace std;

int main() {
    vector<Character*> characters;
    characters.push_back(new Warrior("Warrior", 100, 10));
    characters.push_back(new Sorcerer("Sorcerer", 100, 10));
    Character* characterptr = characters[0];
    Warrior* warriorptr = dynamic_cast<Warrior*>(characterptr);
    int n = characters.size();
    for (int i=0; i<n; i++) {
        characters[i]->attack();
        characters[i]->displayInfo();
    }
    delete characterptr;
}