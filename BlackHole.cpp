//
// Created by amali on 18.02.2024.
//

#include "BlackHole.h"
#include <cmath>

BlackHole::BlackHole(double distance) : Star("black hole",  0, 0, 0) {
    this->distance = distance;
}

double BlackHole::count_and_get_radius() {
    this->radius = sqrt(2 * 6.67 * pow(10, -11) * this->massa / pow((3 * pow(10, 8)), 2));
}
