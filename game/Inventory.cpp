#include "Inventory.h"

void Inventory::addItem(const Item& item) {
    items.push_back(item);
}

void Inventory::removeItem(const Item& item) {
    // Логика удаления предмета из инвентаря
}

void Inventory::useItem(const Item& item) {
    // Логика использования предмета
}