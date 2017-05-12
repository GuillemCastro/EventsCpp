//
// Created by Guillem Castro on 12/05/2017.
//

#include <iostream>
#include "Application.h"
#include "Rocket.h"
#include "Sensor.h"

void Application::run() {
    ParachuteFiredEvent::registerObserver(this);
    Rocket rocket = Rocket();
    Sensor sensor = Sensor();
    sensor.run();
}

void Application::handle(ParachuteFiredEvent *event) {
    std::cout << "PARACHUTE FIRED" << std::endl;
}