#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Character.h"
#include "Map.h"
#include "UI.h"

class GameManager {
public:
    GameManager();
    void startGame();
    bool isRunning() const;
    void update();
    void render();

private:
    bool running;
    Character player;
    Map gameMap;
    UI gameUI;
};

#endif // GAMEMANAGER_H