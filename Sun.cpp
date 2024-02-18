//
// Created by amali on 18.02.2024.
//

#include "Sun.h"
#include <cmath>

bool Sun::is_in_gold_zone(double distance) {
    return distance - this->gold_zone < 0.3 * 1.496 * 100000000;
}

Sun::Sun() : Star("main_sequence", 3.828 * pow(10, 26), 695500, 2 * pow(10, 30)) {
    this->radius = 695500;
    this->massa = 2 * pow(10, 30);
    this->gold_zone = 1.496 * pow(10, 8);
    this->luminosity = 3.828 * pow(10, 26);
    this->type = "main sequence";
    this->planets_around = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uran", "Neptune"};
}
