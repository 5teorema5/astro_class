#include "SpaceObject.h"
#include "Planet.h"
#include "Earth.h"
#include <cmath>

Earth::Earth(unsigned int countPeople) : Planet("Earth", 5.976 * pow(10, 24), 12756, 58+273, -90+273, 1, 149600000*1, 1, 1)
{
    this->countPeople = countPeople;
};
void Earth::setCountPeople(unsigned int count)
{
    this->countPeople = count;
};
unsigned int Earth::getCountPeople()
{
    return this->countPeople;
};
std::string Earth::hello()
{
    return "Hello, earthlings";
};