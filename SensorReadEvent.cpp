//
// Created by Guillem Castro on 12/05/2017.
//

#include "SensorReadEvent.h"

std::vector<SensorReadEventObserver*> SensorReadEvent::observers = std::vector<SensorReadEventObserver*>();

SensorReadEvent::SensorReadEvent(Data* data) {
    this->data = data;
}

void SensorReadEvent::registerObserver(SensorReadEventObserver *observer) {
    observers.push_back(observer);
}

void SensorReadEvent::fire() {
    for(auto observer : observers) {
        observer->handle(this);
    }
}