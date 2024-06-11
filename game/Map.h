#ifndef MAP_H
#define MAP_H

#include <vector>
#include "Tile.h"

class Map {
public:
    void loadMap(const std::string& filename);
    void update();

private:
    std::vector<std::vector<Tile>> tiles;
};

#endif // MAP_H