#include <Arduino.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void getMaxMotorSpeed(){
    File getMaxSpeedfile = SPIFFS.open("/maxMotorSpeed.txt", FILE_READ);
    maxMotorSpeed = getMaxSpeedfile.readString().toInt();
    getMaxSpeedfile.close();
    Serial.print("Utilisation du moteur : ");
    Serial.println(maxMotorSpeed);
}