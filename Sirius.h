//
// Created by amali on 18.02.2024.
//

#ifndef UNTITLED2_SIRIUS_H
#define UNTITLED2_SIRIUS_H
#include "Star.h"

class Sirius : Star {
private:
    int count_stars;
    double dist;
public:
    Sirius(double dist);
    static double get_m();
};


#endif //UNTITLED2_SIRIUS_H
