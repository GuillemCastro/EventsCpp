cmake_minimum_required(VERSION 3.6)
project(EventsC__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Application.cpp Application.h SensorReadEvent.cpp SensorReadEvent.h ParachuteFiredEvent.cpp ParachuteFiredEvent.h Sensor.cpp Sensor.h Rocket.cpp Rocket.h ParachuteFiredEventObserver.cpp ParachuteFiredEventObserver.h Data.cpp Data.h SensorReadEventObserver.cpp SensorReadEventObserver.h)
add_executable(EventsC__ ${SOURCE_FILES})