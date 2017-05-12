//
// Created by Guillem Castro on 12/05/2017.
//

#ifndef EVENTSC_DATA_H
#define EVENTSC_DATA_H


#include <string>

class Data {

private:
    std::string data;

public:

    Data(std::string data) {
        this->data = data;
    }

    std::string getData() {
        return data;
    }

};


#endif //EVENTSC_DATA_H
