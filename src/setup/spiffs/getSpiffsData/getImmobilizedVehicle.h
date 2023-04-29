#include <Arduino.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void getImmobilizedVehicle(){
    File getImmobilizedVehiclefile = SPIFFS.open("/immobilizedVehicle.txt", FILE_READ);
    immobilizedVehicle = getImmobilizedVehiclefile.readString();
    getImmobilizedVehiclefile.close();
    Serial.print("Véhicule bloqué : ");
    Serial.println(immobilizedVehicle);
}
