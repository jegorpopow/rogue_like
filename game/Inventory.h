#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"

class Inventory {
public:
    void addItem(const Item& item);
    void removeItem(const Item& item);
    void useItem(const Item& item);

private:
    std::vector<Item> items;
};

#endif // INVENTORY_H