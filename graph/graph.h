#pragma once
#include <SFML/Graphics.hpp>

class Graph {
    public:
        Graph();
        void render();
        bool isOpen();

    private:
        sf::RenderWindow window;
};