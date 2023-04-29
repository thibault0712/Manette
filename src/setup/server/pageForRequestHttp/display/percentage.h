#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void percentage(){
server.on("/percentage", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    display = "percentage";

    File file = SPIFFS.open("/display.txt", FILE_WRITE);
    file.print(display);
    file.close();

    Serial.println("Désormais les informations seront affichés en pourcentage");
    request->send(200);
  });
}