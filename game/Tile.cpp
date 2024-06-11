#include "Tile.h"

Tile::Tile() : walkable(true) {}

bool Tile::isWalkable() const {
    return walkable;
}