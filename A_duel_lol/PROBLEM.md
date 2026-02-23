# Character Duel

Build a turn-based character duel system in C++ using inheritance and polymorphism. Define a base `Character` class with health and attack power attributes, then derive `Warrior` and `Sorcerer` subclasses that each override the `attack()` and `displayInfo()` methods. Store all characters in a vector of base-class pointers and use `dynamic_cast` to safely downcast when needed. Demonstrate runtime polymorphism by invoking overridden methods through base-class pointers in a battle loop.
