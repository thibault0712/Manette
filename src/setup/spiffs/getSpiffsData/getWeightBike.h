#include <Arduino.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void getWeightBike(){
    File getWeightBikefile = SPIFFS.open("/weightBike.txt", FILE_READ);
    weightBike = getWeightBikefile.readString().toInt();
    getWeightBikefile.close();
    Serial.print("Poids du vélo : ");
    Serial.println(weightBike);
}