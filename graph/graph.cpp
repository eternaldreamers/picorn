#include "graph.h"

Graph::Graph() : window(sf::VideoMode(800, 600), "Game") {}

void Graph::render() {
    window.clear();
    window.display();
}

bool Graph::isOpen() {
    return window.isOpen();
}