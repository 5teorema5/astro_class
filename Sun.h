//
// Created by amali on 18.02.2024.
//

#ifndef UNTITLED2_SUN_H
#define UNTITLED2_SUN_H

#include <vector>
#include "Star.h"

class Sun : Star {
private:
    std::vector<std::string> planets_around;
    double gold_zone;
public:
    Sun();
    bool is_in_gold_zone(double distance);
};


#endif //UNTITLED2_SUN_H
