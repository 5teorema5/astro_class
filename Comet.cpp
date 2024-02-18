//
// Created by amali on 18.02.2024.
//

#include "Comet.h"
#include <cmath>
#include <utility>

Comet::Comet(std::string name, double min_distance, double tail) {
    this->name = std::move(name);
    this->min_distance = min_distance;
    this->tail = tail;
}

double Comet::get_speed() {
    return sqrt(2 * 6.67 * pow(10, -11) * 2 * pow(10, 30) / this->min_distance / 1000);
}
