//
// Created by Guillem Castro on 12/05/2017.
//

#include "SensorReadEvent.h"

SensorReadEvent::SensorReadEvent(Data* data) {
    this->data = data;
}

void SensorReadEvent::registerObserver(Observer<SensorReadEvent> *observer) {
    Event::registerObserver("SensorReadEvent", observer);
}

void SensorReadEvent::fire() {
    std::vector<ObserverBase*> observers = Event::getObservers("SensorReadEvent");
    for(auto observer : observers) {
        ((Observer<SensorReadEvent> *)observer)->handle(this);
    }
}