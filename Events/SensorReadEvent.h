//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_SENSORREADEVENT_H
#define EVENTSC_SENSORREADEVENT_H


#include <vector>
#include "../Data.h"
#include "Event.h"
#include "../Observers/Observer.h"

class SensorReadEvent : public Event {

public:
    SensorReadEvent(Data* data);

    static void registerObserver(Observer<SensorReadEvent>* observer);

    virtual void fire();

    Data* getData() {
        return data;
    }

private:
    Data* data;

};


#endif //EVENTSC_SENSORREADEVENT_H
