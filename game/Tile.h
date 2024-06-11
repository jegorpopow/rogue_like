#ifndef TILE_H
#define TILE_H

class Tile {
public:
    Tile();
    bool isWalkable() const;

private:
    bool walkable;
};

#endif // TILE_H