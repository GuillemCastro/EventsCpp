//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_EVENT_H
#define EVENTSC_EVENT_H

#include "../Observers/ObserverBase.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

class Event {

private:

    static std::unordered_map<std::string, std::vector<ObserverBase*> > observers;

protected:

    static void registerObserver(std::string type, ObserverBase* observer) {
        if(Event::observers.find(type) != Event::observers.end()) {
            Event::observers.at(type).push_back(observer);
        }
        else {
            observers[type] = std::vector<ObserverBase*>();
            Event::observers.at(type).push_back(observer);
        }
    }

    static std::vector<ObserverBase*> getObservers(std::string type) {
        return observers[type];
    }

public:

    virtual void fire() = 0;

};


#endif //EVENTSC_EVENT_H
