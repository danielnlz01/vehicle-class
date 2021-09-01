#include <iostream>
#include <string>
#include "Automaker.h"
#include "Car.h"
#include "Truck.h"
#include "Motor.h"
#include "Vehicle.h"

using namespace std;

int main()
{
    Vehicle *v = new Vehicle ("ABC657", 2016);
    cout << "Vehicle plate: " << v->getPlate() << endl;
    cout << "Vehicle model: " << v->getYear() << endl;
    
    Car *c = new Car ("ABC657", 2016, 4, "Red", "Audii");
    cout << "Vehicle plate: " << c->getPlate() << endl;
    cout << "Vehicle model: " << c->getYear() << endl;
    cout << "Number of passengers: " << c->getNumberP() << endl;
    cout << "Color: " << c->getColor() << endl;
    cout << "Model: " << c->getModel() << endl;
    
    return 0;
}
