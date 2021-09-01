#ifndef AUTOMAKER_H
#define AUTOMAKER_H

#include <iostream>
#include <string>
#include "Truck.h"
#include "Car.h"


using namespace std;

class Automaker
{
    private:
    double revenue;
    Car carList[100];
    int carCounter = 0;
    Truck truckList[100];
    int truckCounter = 0;

    public:
    Automaker();
    Automaker(double revenue);

    ~Automaker();

    double getRevenue();

    void addCar(Car& c);
    void printCar();
    void addTruck(Truck& t);
    void printTruck();
};

Automaker :: Automaker()
{
    this->revenue = 0;
}

Automaker :: Automaker(double revenue)
{
    this->revenue = revenue;
}

Automaker :: ~Automaker()
{

}

double Automaker :: getRevenue()
{
    return this->revenue;
}

void Automaker :: addCar(Car& c)
{
    this->carList[this->carCounter] = c;
    this->carCounter++;

    if(this->carCounter >= 100)
    {
        this->carCounter = 99;
    }
}

void Automaker::printCar()
{
    for (int i = 0; i < this->carCounter; i++)
    {
        cout << this->carList[i].getModel() << endl;
    }
}


void Automaker :: addTruck(Truck& t)
{
    this->truckList[this->truckCounter] = t;
    this->carCounter++;

    if(this->truckCounter >= 100)
    {
        this->truckCounter = 99;
    }
}

void Automaker::printTruck()
{
    for (int i = 0; i < this->truckCounter; i++)
    {
        cout << this->truckList[i].getLoad() << endl;
    }
}
#endif