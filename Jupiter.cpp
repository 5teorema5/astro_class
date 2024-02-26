#include "SpaceObject.h"
#include "Planet.h"
#include "Jupiter.h"
#include <cmath>

Jupiter::Jupiter(bool str) : Planet("Jupiter", 1.9 * pow(10, 27), 143760, -160+273, -160+273, 0.41, 149600000*5.2, 11.86, 16)
{ 
    this->Rings = str;
};
bool Jupiter::getRings()
{
    return this->Rings;
}
std::string Jupiter::hello()
{
    return "Hello, yupirchane";
};
