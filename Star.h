//
// Created by amali on 18.02.2024.
//

#ifndef UNTITLED2_STAR_H
#define UNTITLED2_STAR_H


#include <string>
#include "SpaceObject.h"

class Star : public SpaceObject {
protected:
    Star(std::string type, double luminosity, double radius, double massa);
    std::string type;
    double luminosity;
public:
};


#endif //UNTITLED2_STAR_H
