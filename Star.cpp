//
// Created by amali on 18.02.2024.
//

#include "Star.h"
#include <string>

Star::Star(std::string type, unsigned long luminosity, long radius, unsigned long massa) {
    this->type = std::move(type);
    this->luminosity = luminosity;
    this->radius = radius;
    this->massa = massa;
}