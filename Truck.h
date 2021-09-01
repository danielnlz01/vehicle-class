#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
#include "Vehicle.h"


using namespace std;

class Truck: public Vehicle
{
    private:
    double load, weight;

    public:
    Truck();
    Truck(string plate, int year, double load, double weight);

    ~Truck();

    double getLoad();
    double getWeight();

    void setLoad(double load);
    void setWeight(double weight);
};

Truck :: Truck(): Vehicle()
{
    this->load = 0;
    this->weight = 0;
}

Truck :: Truck(string plate, int year, double load,double weight): Vehicle(plate, year)
{
    this->load = load;
    this->weight = weight;
}

double Truck :: getLoad()
{
    return this->load;
}

double Truck :: getWeight()
{
    return this->weight;
}

void Truck :: setLoad(double load)
{
    this->load = load;
}

void Truck :: setWeight(double weight)
{
    this->weight = weight;
}

#endif
