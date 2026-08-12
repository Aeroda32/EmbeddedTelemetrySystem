#ifndef SENSOR_H
#define SENSOR_H

#include <string>   // Wird benötigt, damit wir std::string benutzen können

// Klasse Sensor
// Diese Klasse beschreibt einen allgemeinen Sensor
class Sensor
{
private:
    // Eindeutige ID des Sensors
    int id;

    // Name des Sensors, z.B. "Temperatur"
    std::string name;

    // Einheit des Messwerts, z.B. "C", "bar" oder "%"
    std::string unit;

    // Aktueller Messwert des Sensors
    double value;


public:
    // Konstruktor
    // Wird aufgerufen, wenn ein neues Sensor-Objekt erstellt wird
    // Beispiel:
    // Sensor temp(1, "Temperatur", "C", 20.0);
    Sensor(int id, std::string name, std::string unit, double value);


    // Getter für die Sensor-ID
    // Gibt die gespeicherte ID zurück
    int getId() const;


    // Getter für den Namen
    // Gibt den Namen des Sensors zurück
    std::string getName() const;


    // Getter für die Einheit
    // Gibt z.B. "C" oder "bar" zurück
    std::string getUnit() const;


    // Getter für den aktuellen Messwert
    // Gibt den gespeicherten value zurück
    double getValue() const;


    // Setter für den Messwert
    // Damit kann ein neuer Messwert gespeichert werden
    // Beispiel:
    // temp.setValue(25.3);
    void setValue(double value);


    // Gibt Informationen über den Sensor aus
    // Beispiel:
    // Sensor ID: 1
    // Name: Temperatur
    // Value: 25.3 C
    void printInfo() const;
};

#endif