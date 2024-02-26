#ifndef UNTITLED2_PLANET_H
#define UNTITLED2_PLANET_H

#include "SpaceObject.h"
#include <string>

class Planet : public SpaceObject
{
    protected:
        //название
        std::string name;
        //температура
        //максимальная
        double T_max;
        //минимальная
        double T_min; 
        //длина суток (земные сутки)
        double time;
        //среднее расстояние от Солнца (а.е.)
        double distSun;
        //период обращения по орбите
        double T;
        //количество спутников
        unsigned int countSatellite;
    public:
        Planet(std::string name, double massa, double radius, double T_min, double T_max, double time, double distSun, double T, unsigned int countSatellite);
        //переписать температуру
        void setTemp(float T_max, float T_min);
        //получить температуру
        double getTemp();
        //получить длину суток
        double getTime();
        //получить расстояние от Солнца
        double getDistSun();
        //получить перилд обращения по орбите
        double getT();
        //переписать количество спутник
        void setCountSatellite(unsigned int count);
        //получить количество спутников
        unsigned int getCountSatellite();
        //виртуальный метод кринж
        virtual std::string hello() = 0;

};

#endif