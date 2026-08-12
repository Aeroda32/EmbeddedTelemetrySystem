#include<iostream>
#include "Sensor.h"

using namespace std;

Sensor::Sensor(int id, std::string name, std::string unit, double value){
    this->id = id;      // this ist ein Zeiger auf das OBjekt in der KLasse und id wird zu diesem Objekt übergeben
    this->name = name;
    this->unit = unit;
    this->value = value;
}

int Sensor::getId()const{
    return id;
}

string Sensor::getName()const{
    return name;
}

string Sensor::getUnit()const{
    return unit;
}

double Sensor::getValue()const{
    return value;
}

void Sensor::setValue(double value){
    this->value=value;
}

void Sensor::printInfo() const
{
    cout << "Sensor ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Value: " << value << " " << unit << endl;
}




