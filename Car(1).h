#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Vehicle.h"


using namespace std;

class Car: public Vehicle
{
    private:
    int numberP;
    string color, model;

    public:
    Car();
    Car(string plate, int year, int numberP, string color, string model);

    ~Car();

    int getNumberP();
    string getColor();
    string getModel();

    void setNumberP(int numberP);
    void setColor(string color);
    void setModel(string model);
};

Car :: Car(): Vehicle()
{
    this->numberP = 0;
    this->color = "noColor";
    this->model = "noModel";
}

Car :: Car(string plate, int year, int numberP, string color, string model): Vehicle(plate, year)
{
    this->numberP = numberP;
    this->color = color;
    this->model = model;
}

int Car :: getNumberP()
{
    return this->numberP;
}

string Car :: getColor()
{
    return this->color;
}

string Car :: getModel()
{
    return this->model;
}

void Car :: setNumberP(int numberP)
{
    this->numberP = numberP;
}

void Car :: setColor(string color)
{
    this->color = color;
}

void Car :: setModel(string model)
{
    this->model = model;
}
#endif