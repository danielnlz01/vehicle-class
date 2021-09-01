#ifndef MOTOR_H
#define MOTOR_H


#include <iostream>
#include <string>

using namespace std;

class Motor
{
    private:
    int cylinders, power;

    public:
    Motor();
    Motor(int cylinders, int power);

    ~Motor();

    int getCylinders();
    int getPower();

    void setCylinders(int cylinders);
    void setPower(int power);
};

Motor :: Motor()
{
    this->cylinders = 0;
    this->power =  0;
}

Motor :: Motor(int cylinders, int power)
{
    this->cylinders = cylinders;
    this->power = power;
}

Motor :: ~Motor()
{

}

int Motor :: getCylinders()
{
    return this->cylinders;
}

int Motor :: getPower()
{
    return this->power;
}

void Motor :: setCylinders(int cylinders)
{
    this->cylinders = cylinders;
}

void Motor :: setPower(int power)
{
    this->power = power;
}


#endif
