//
// Created by amali on 18.02.2024.
//

#include "BlackHole.h"
#include <cmath>

BlackHole::BlackHole(std::string type, double luminosity, double massa, double distance) : Star("black hole", luminosity, radius, massa) {
    this->distance = distance;
    this->type = "black hole";
    this->luminosity = luminosity;
    this->radius = 0;
    this->massa = massa;
}

double BlackHole::count_and_get_radius() {
    this->radius = sqrt(2 * 6.67 * pow(10, -11) * this->massa / pow((3 * pow(10, 8)), 2));
}
