//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_SENSORREADEVENTOBSERVER_H
#define EVENTSC_SENSORREADEVENTOBSERVER_H


class SensorReadEvent;

class SensorReadEventObserver {

public:
    virtual void handle(SensorReadEvent* event) = 0;

};


#endif //EVENTSC_SENSORREADEVENTOBSERVER_H
