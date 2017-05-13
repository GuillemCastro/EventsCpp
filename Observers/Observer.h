//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_OBSERVER_H
#define EVENTSC_OBSERVER_H


#include "ObserverBase.h"

template <class T> class Observer : public ObserverBase {

public:

    virtual void handle(T* event) = 0;

};


#endif //EVENTSC_OBSERVER_H
