//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_PARACHUTEFIREDEVENTOBSERVER_H
#define EVENTSC_PARACHUTEFIREDEVENTOBSERVER_H


class ParachuteFiredEvent;

class ParachuteFiredEventObserver {

public:
    virtual void handle(ParachuteFiredEvent* event) = 0;

};


#endif //EVENTSC_PARACHUTEFIREDEVENTOBSERVER_H
