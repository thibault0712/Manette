#include <Arduino.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void getVehicleIdentifier(){
    File getVehicleIdentifierfile = SPIFFS.open("/vehicleIdentifier.txt", FILE_READ);
    String vehicleIdentifier = getVehicleIdentifierfile.readString();
    getVehicleIdentifierfile.close();
    byte identifierBytes[vehicleIdentifier.length()];
    // Convertir la variable String en un tableau de bytes
    for (int i = 0; i < vehicleIdentifier.length(); i++) {
      identifierBytes[i] = vehicleIdentifier.charAt(i);
    }

    for (int i = 0; i < 13; i++) {
      if (i < vehicleIdentifier.length()) {
        adresse[i] = identifierBytes[i];
      } else {
        adresse[i] = 0; // Remplir les éléments restants avec des zéros
      }
    }
    Serial.print("Tunnel de connexion : ");
    Serial.println(vehicleIdentifier);
}