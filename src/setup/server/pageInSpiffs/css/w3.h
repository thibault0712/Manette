#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void w3(){
server.on("/w3.css", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    request->send(SPIFFS, "/w3.css", "text/css");
  });
}