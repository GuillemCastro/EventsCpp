cmake_minimum_required(VERSION 3.6)
project(EventsC__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Application.cpp Application.h Events/SensorReadEvent.cpp Events/SensorReadEvent.h Events/ParachuteFiredEvent.cpp Events/ParachuteFiredEvent.h Sensor.cpp Sensor.h Rocket.cpp Rocket.h Data.cpp Data.h Observers/Observer.cpp Observers/Observer.h Events/Event.cpp Events/Event.h Observers/ObserverBase.cpp Observers/ObserverBase.h)
add_executable(EventsC__ ${SOURCE_FILES})