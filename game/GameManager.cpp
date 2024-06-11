#include "GameManager.h"

GameManager::GameManager() : running(true), player(), gameMap(), gameUI() {}

void GameManager::startGame() {
    // Инициализация игры
    gameMap.loadMap("default_map.txt");
    player.initialize();
    gameUI.initialize();
}

bool GameManager::isRunning() const {
    return running;
}

void GameManager::update() {
    // Логика обновления игры
    player.update();
    gameMap.update();
    // Добавьте логику взаимодействия
}

void GameManager::render() {
    // Отображение игрового интерфейса
    gameUI.render();
}