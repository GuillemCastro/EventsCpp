//
// Created by Guillem Castro on 12/05/2017.
//

#include <iostream>
#include "Rocket.h"

Rocket::Rocket() {
    SensorReadEvent::registerObserver(this);
}

void Rocket::handle(SensorReadEvent *event) {
    Data* data = event->getData();
    std::cout << "SENSOR READ: " << data->getData() << std::endl;
    if (data->getData() == "FIRE") {
        ParachuteFiredEvent event1 = ParachuteFiredEvent();
        event1.fire();
    }
}