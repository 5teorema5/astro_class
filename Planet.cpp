#include "SpaceObject.h"
#include "Planet.h"

Planet::Planet(std::string name, double massa, double radius, double T_min, double T_max, double time, double distSun, double T, unsigned int countSatellite)
{
    this->name = name;
    this->massa = massa;
    this->radius = radius;
    this->T_min = T_min;
    this->T_max = T_max;
    this->time = time;
    this->distSun = distSun;
    this->T = T;
    this->countSatellite = countSatellite;
}
void Planet::setTemp(float T_max, float T_min)
{
    this->T_min = T_min;
    this->T_max = T_max;
}
double Planet::getTemp()
{
    return this->T_min, this->T_max;
}
double Planet::getTime()
{
    return this->time;
}
double Planet::getDistSun()
{
    return this->distSun;
}
double Planet::getT()
{
    return this->T;
}
void Planet::setCountSatellite(unsigned int count)
{
    this->countSatellite = count;
}
unsigned int Planet::getCountSatellite()
{
    return this->countSatellite;
}

