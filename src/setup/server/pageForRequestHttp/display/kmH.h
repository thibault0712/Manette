#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void kmH(){
server.on("/kmH", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    display = "kmH";

    File file = SPIFFS.open("/display.txt", FILE_WRITE);
    file.print(display);
    file.close();
    
    Serial.println("Désormais les informations seront affichés en km/h");
    request->send(200);
  });
}