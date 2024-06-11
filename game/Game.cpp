#include "Game.h"

Game::Game() : gameManager() {}

void Game::run() {
    gameManager.startGame();
    while (gameManager.isRunning()) {
        gameManager.update();
        gameManager.render();
    }
}