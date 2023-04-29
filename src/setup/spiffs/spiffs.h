#include <Arduino.h>
#include <SPIFFS.h>

#include "getSpiffsData/getDisplay.h"
#include "getSpiffsData/getImmobilizedVehicle.h"
#include "getSpiffsData/getMaxMotorSpeed.h"
#include "getSpiffsData/getPassword.h"
#include "getSpiffsData/getVehicleIdentifier.h"
#include "getSpiffsData/getWeightBike.h"

void spiffs(){
//On vérifie si le spiffs fonctionne/pas de problème
if(!SPIFFS.begin()){
    Serial.println("Erreur SPIFFS...");
    return;
  }

getDisplay();
getImmobilizedVehicle();
getMaxMotorSpeed();
getPassword();
getVehicleIdentifier();
getImmobilizedVehicle;
}