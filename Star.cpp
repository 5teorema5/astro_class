//
// Created by amali on 18.02.2024.
//

#include "Star.h"
#include <string>
#include <cmath>

Star::Star(std::string type, double luminosity, double radius, double massa) {
    this->type = std::move(type);
    this->luminosity = luminosity;
    this->radius = radius;
    this->massa = massa;
}

