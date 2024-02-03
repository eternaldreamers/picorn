#include "event_manager.h"

EventManager::EventManager() {}

EventManager* EventManager::on(std::string event_name, void (*callback)(int)) {
    std::vector<void (*)(int)> *listeners = &events[event_name];

    if (std::find(listeners->begin(), listeners->end(), callback) != listeners->end()) {
        return this;
    }

    listeners->push_back(callback);

    return this;
}

bool EventManager::emit(std::string event_name, int arg) {
    std::vector<void (*)(int)> listeners = events[event_name];

    if (listeners.size() == 0) return false;

    for (int idx = 0; idx < listeners.size(); idx += 1) {
        listeners[idx](arg);
    }

    return true;
}