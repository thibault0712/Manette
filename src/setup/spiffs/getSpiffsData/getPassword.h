#include <Arduino.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void getPassword(){
    File getPasswordfile = SPIFFS.open("/password.txt", FILE_READ);
    String passwordString = getPasswordfile.readString();
    passwordInSpiffs = passwordString; //Obliger de le mettre ici... Pas trouve moyen de mettre dans variables.h
    getPasswordfile.close();
    Serial.print("Mot de passe wifi : ");
    Serial.println(passwordString);
}