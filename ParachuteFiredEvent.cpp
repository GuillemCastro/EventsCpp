//
// Created by Guillem Castro on 12/05/2017.
//

#include "ParachuteFiredEvent.h"

std::vector<ParachuteFiredEventObserver*> ParachuteFiredEvent::observers = std::vector<ParachuteFiredEventObserver*>();

ParachuteFiredEvent::ParachuteFiredEvent() {

}

void ParachuteFiredEvent::registerObserver(ParachuteFiredEventObserver *observer) {
    observers.push_back(observer);
}

void ParachuteFiredEvent::fire() {
    for(auto observer : observers) {
        observer->handle(this);
    }
}