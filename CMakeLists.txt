cmake_minimum_required(VERSION 3.23)
project(astro_class)

set(CMAKE_CXX_STANDARD 14)

add_executable(astro_class main.cpp Earth.cpp Earth.h Jupiter.cpp Jupiter.h Mercury.cpp Mercury.h Planet.cpp Planet.h SpaceObject.cpp SpaceObject.h)
