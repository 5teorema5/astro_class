#include <iostream>
#include "SpaceObject.h"
#include "Planet.h"
#include "Mercury.h"
#include "Earth.h"
#include "Jupiter.h"


int main()
{
    Mercury m(5);
    std::cout << m.hello() << '\n';
    Earth e(72);
    std::cout << e.hello() << '\n';
    Jupiter j(true);
    std::cout << j.hello() << '\n';

    return 0;
}