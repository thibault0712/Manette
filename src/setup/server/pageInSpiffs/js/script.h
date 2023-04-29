#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void script(){
server.on("/script.js", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    request->send(SPIFFS, "/script.js", "text/javascript");
  });
}