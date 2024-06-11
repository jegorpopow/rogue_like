#ifndef GAME_H
#define GAME_H

#include "GameManager.h"

class Game {
public:
    Game();
    void run();

private:
    GameManager gameManager;
};

#endif // GAME_H