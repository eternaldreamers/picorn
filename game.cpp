#include "game.h"

Game::Game() {}

void Game::run() {
    while(graph.isOpen()) {
        core.update();
        graph.render();
    }
}
