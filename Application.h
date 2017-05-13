//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_APPLICATION_H
#define EVENTSC_APPLICATION_H


#include "Observers/Observer.h"
#include "Events/ParachuteFiredEvent.h"

class Application : Observer<ParachuteFiredEvent> {

public:

    void run();
    virtual void handle(ParachuteFiredEvent* event);

};


#endif //EVENTSC_APPLICATION_H
