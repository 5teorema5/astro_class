//
// Created by amali on 18.02.2024.
//

#ifndef UNTITLED2_STAR_H
#define UNTITLED2_STAR_H


#include <string>
#include "SpaceObject.h"

class Star : public SpaceObject {
private:
    Star(std::string type, unsigned long luminosity, long radius, unsigned long massa);

    std::string type;
    unsigned long luminosity;
public:
};


#endif //UNTITLED2_STAR_H
