#pragma once
#include "core/core.h"
#include "graph/graph.h"

class Game {
    public:
        Game();
        void run();

    private:
        Graph graph;
        Core core;
};