//
// Created by amali on 18.02.2024.
//
#include <cmath>
#include "Sirius.h"

Sirius::Sirius(double dist) : Star("blue giant", 25.4 * 3.828 * pow(10, 26), 1.7 * 695500, 3.98 * pow(10, 30)) {
    this->count_stars = 3;
    this->dist = dist;
}

double Sirius::get_m() {
    return -1.5;
}

