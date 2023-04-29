#include <Arduino.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void getDisplay(){
    File getDisplayfile = SPIFFS.open("/display.txt", FILE_READ);
    display = getDisplayfile.readString();
    getDisplayfile.close();
    Serial.print("Affichage actuel : ");
    Serial.println(display);
}
