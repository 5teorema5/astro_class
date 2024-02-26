#include "SpaceObject.h"
#include "Planet.h"
#include "Mercury.h"
#include <cmath>

Mercury::Mercury(unsigned int countGeyser) : Planet("mercury", 3.3 * pow(10, 23), 4870, 480+273, -180+273, 58.65, 149600000*0.387, 0.24, 0)
{
    this->countGeyser = countGeyser;
}
void Mercury::setCountGeyser(unsigned int count)
{
    this->countGeyser = count;
}
unsigned int Mercury::getCountGeyser()
{
    return this->countGeyser;
}
std::string Mercury::hello()
{
    return "Hello, Mercurians";
}