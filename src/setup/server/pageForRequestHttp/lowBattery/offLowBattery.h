#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void offLowBatrry(){
server.on("/offLowBattery", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    maxMotorSpeed = 255;

    Serial.println("Le moteur utilisera toute sa puissance !");
    File file = SPIFFS.open("/maxMotorSpeed.txt", FILE_WRITE);
    file.print(maxMotorSpeed);
    file.close();

    request->send(200);
  });
}