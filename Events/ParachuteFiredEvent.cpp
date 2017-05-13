//
// Created by Guillem Castro on 12/05/2017.
//

#include "ParachuteFiredEvent.h"

ParachuteFiredEvent::ParachuteFiredEvent() {

}

void ParachuteFiredEvent::registerObserver(Observer<ParachuteFiredEvent> *observer) {
    Event::registerObserver("ParachuteFiredEvent", observer);
}

void ParachuteFiredEvent::fire() {
    std::vector<ObserverBase*> observers = Event::getObservers("ParachuteFiredEvent");
    for(auto observer : observers) {
        ((Observer<ParachuteFiredEvent>*) observer)->handle(this);
    }
}