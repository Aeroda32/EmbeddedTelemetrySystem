#include<iostream>
#include"TelemetrySystem.h"
#include"Sensor.h"

void TelemetrySytem::addSensor(const Sensor& sensor)
{
     sensors.push_back(sensor);
}