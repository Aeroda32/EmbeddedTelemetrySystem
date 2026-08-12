#include <iostream>
#include "Sensor.h"

using namespace std;

int main()
{
    Sensor temp(1, "Temperatur", "C", 22.5);
    Sensor pressure(2, "Druck", "bar", 1.2);
    Sensor voltage(3, "Spannung", "V", 12.4);

    temp.printInfo();
    cout << endl;

    pressure.printInfo();
    cout << endl;

    voltage.printInfo();

    return 0;
}