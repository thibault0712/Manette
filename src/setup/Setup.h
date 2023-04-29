#include "serial/serial.h"
#include "moduleInitialization/moduleInitialization.h"
#include "spiffs/spiffs.h"
#include "wifi/wifi.h"
#include "server/webServer.h"

void Setup(){
    serial(); //Chargemen port série
    moduleInitialisation(); //chargement de tous les composants electronique
    spiffs(); //chargment du spiffs (permet de stocker les fichiers dans esp32)
    wifi(); //chargement du wifi
    webServer(); //chargement du serveur web

    Serial.println("Serveur actif!");
}


