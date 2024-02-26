#ifndef UNTITLED2_JUPITER_H
#define UNTITLED2_JUPITER_H

#include "SpaceObject.h"
#include "Planet.h"
#include <string>

class Jupiter : public Planet 
{
    protected:
        //наличие колец
        bool Rings;
    public:
        Jupiter(bool Rings);
        //получить количество людей
        bool getRings();
        //реализация вирутального метода
        std::string hello();
};

#endif