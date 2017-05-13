//
// Created by Guillem Castro on 12/05/2017.
//

#include "Event.h"

std::unordered_map<std::string, std::vector<ObserverBase *> > Event::observers = std::unordered_map<std::string, std::vector<ObserverBase *> >();
