#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void readSpead(){
server.on("/readSpead", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    String stringSpeed = String(speed);
    request->send(200, "text/plain", stringSpeed);
  });
}