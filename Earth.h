#ifndef UNTITLED2_EARTH_H
#define UNTITLED2_EARTH_H

#include "SpaceObject.h"
#include "Planet.h"
#include <string>

class Earth : public Planet 
{
    protected:
        //количество людей
        unsigned int countPeople;
    public:
        Earth(unsigned int countPeople);
        //переписать количество людей
        void setCountPeople(unsigned int count);
        //получить количество людей
        unsigned int getCountPeople();
        //реализация вирутального метода
        std::string hello();
};

#endif