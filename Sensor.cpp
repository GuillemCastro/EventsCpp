//
// Created by Guillem Castro on 12/05/2017.
//

#include <zconf.h>
#include "Sensor.h"
#include "Data.h"
#include "SensorReadEvent.h"

void Sensor::run() {
    for (int i = 0; i < 10; ++i) {
        Data* data = new Data("LEL");
        SensorReadEvent event = SensorReadEvent(data);
        event.fire();
        sleep(1);
    }
    Data* data = new Data("FIRE");
    SensorReadEvent event = SensorReadEvent(data);
    event.fire();
}