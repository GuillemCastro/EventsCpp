//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_PARACHUTEFIREDEVENT_H
#define EVENTSC_PARACHUTEFIREDEVENT_H


#include <vector>
#include "Event.h"
#include "ParachuteFiredEventObserver.h"


class ParachuteFiredEvent {

public:
    ParachuteFiredEvent();
    static void registerObserver(ParachuteFiredEventObserver* observer);
    virtual void fire();

private:
    static std::vector<ParachuteFiredEventObserver*> observers;


};


#endif //EVENTSC_PARACHUTEFIREDEVENT_H
