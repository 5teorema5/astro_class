//
// Created by amali on 18.02.2024.
//

#ifndef UNTITLED2_BLACKHOLE_H
#define UNTITLED2_BLACKHOLE_H
#include "Star.h"

class BlackHole : Star {
private:
    double distance;
public:
    BlackHole(std::string type, double luminosity, double massa, double distance);
    double count_and_get_radius();
};


#endif //UNTITLED2_BLACKHOLE_H
