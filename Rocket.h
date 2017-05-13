//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_ROCKET_H
#define EVENTSC_ROCKET_H


#include "Data.h"
#include "Events/SensorReadEvent.h"
#include "Events/ParachuteFiredEvent.h"

class Rocket : public Observer<SensorReadEvent> {

public:

    Rocket();
    virtual void handle(SensorReadEvent* event);

};


#endif //EVENTSC_ROCKET_H
