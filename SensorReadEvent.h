//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_SENSORREADEVENT_H
#define EVENTSC_SENSORREADEVENT_H


#include <vector>
#include "Data.h"
#include "SensorReadEventObserver.h"


class SensorReadEvent {

public:
    SensorReadEvent(Data* data);
    static void registerObserver(SensorReadEventObserver* observer);
    virtual void fire();
    Data* getData() {
        return data;
    }

private:
    static std::vector<SensorReadEventObserver *> observers;
    Data* data;

};


#endif //EVENTSC_SENSORREADEVENT_H
