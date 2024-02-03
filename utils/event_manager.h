#pragma once
#include <algorithm>
#include <vector>
#include <map>

class EventManager {
    private:
        std::map<std::string, std::vector<void (*)(int)>> events;

    public:
        EventManager() {}

        EventManager *on(std::string event_name, void (*callback)(int));

        bool emit(std::string event_name, int arg);
}