#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include "Motor.h"

using namespace std;

class Vehicle
{
    private:
    string plate;
    int year;
    Motor motorList[1];
    int motorCounter = 0;

    public:
    Vehicle();
    Vehicle(string plate, int year);

    ~Vehicle();

    string getPlate();
    int getYear();

    void setPlate(string plate);
    void setYear(int year);
    void addMotor(Motor& m);
    void printMotor();

};

Vehicle :: Vehicle()
{
    this->plate = "noPlate";
    this->year = 2020;
}

Vehicle :: Vehicle(string plate, int year)
{
    this->plate = plate;
    this->year = year;
}

Vehicle :: ~Vehicle()
{

}

string Vehicle :: getPlate()
{
    return this->plate;
}

int Vehicle :: getYear()
{
    return this->year;
}

void Vehicle :: setPlate(string plate)
{
    this->plate = plate;
}

void Vehicle :: setYear(int year)
{
    this->year = year;
}

void Vehicle :: addMotor(Motor& m)
{
    this->motrList[this->motorCounter] = m;
    this->motorCounter++;
    if (this->motorCounter >= 1)
    {
        this->motorCounter = 0;
    }
}
void Vehicle :: printMotor()
{
    for (int i = 0; i < this-> motorCounter; i++)
    {
        cout << this->motrList[i].getCylinders() << endl;
        cout << this->motrList[i].getPower() << endl;
    }
}
#endif
