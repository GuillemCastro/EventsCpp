//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_ROCKET_H
#define EVENTSC_ROCKET_H


#include "SensorReadEventObserver.h"
#include "Data.h"
#include "SensorReadEvent.h"
#include "ParachuteFiredEvent.h"

class Rocket : public SensorReadEventObserver {

public:

    Rocket();
    virtual void handle(SensorReadEvent* event);

};


#endif //EVENTSC_ROCKET_H
