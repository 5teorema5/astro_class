//
// Created by amali on 18.02.2024.
//

#ifndef UNTITLED2_COMET_H
#define UNTITLED2_COMET_H
#include "SpaceObject.h"
#include <string>

class Comet : SpaceObject {
private:
    std::string name;
    double min_distance;
    double tail;
public:
    Comet(std::string name, double min_distance, double tail);
    double get_speed();
};


#endif //UNTITLED2_COMET_H
