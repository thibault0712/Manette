#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void onLowBatrry(){
server.on("/onLowBattery", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    maxMotorSpeed = 170;

    Serial.println("Le moteur n\'utilise pas toute sa puissance !");
    File file = SPIFFS.open("/maxMotorSpeed.txt", FILE_WRITE);
    file.print(maxMotorSpeed);
    file.close();

    request->send(200);
  });
}