#ifndef CHARACTER_H
#define CHARACTER_H

#include "Inventory.h"

class Character {
public:
    Character();
    void initialize();
    void update();

private:
    int health;
    int attackPower;
    Inventory inventory;
};

#endif // CHARACTER_H