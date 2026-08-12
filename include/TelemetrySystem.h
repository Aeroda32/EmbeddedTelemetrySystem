#ifndef TELEMETRYSYTEM_H
#define TELEMETRYSYSTEM_H
#include "Sensor.h"

class TelemetrySystem{
    private:
    std::vectro<Sensor> sensors;

    public:
     void addSensor(const Sensor& sensor);
     void printAllSensors() const;
};
