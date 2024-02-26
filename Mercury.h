#ifndef UNTITLED2_MERCURY_H
#define UNTITLED2_MERCURY_H

#include "SpaceObject.h"
#include "Planet.h"
#include <string>

class Mercury : public Planet
{
    protected:
        //количество гейзеров
        unsigned int countGeyser;
    public:
        Mercury(unsigned int countGeyser);
        //переписать количество гейзеров
        void setCountGeyser(unsigned int count);
        //получить количество гейзеров
        unsigned int getCountGeyser();
        //реализация вирутального метода
        std::string hello();
};

#endif