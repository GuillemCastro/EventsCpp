//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_PARACHUTEFIREDEVENT_H
#define EVENTSC_PARACHUTEFIREDEVENT_H


#include <vector>
#include "Event.h"
#include "../Observers/Observer.h"


class ParachuteFiredEvent : public Event {

public:
    ParachuteFiredEvent();
    static void registerObserver(Observer<ParachuteFiredEvent>* observer);
    virtual void fire();

};


#endif //EVENTSC_PARACHUTEFIREDEVENT_H
