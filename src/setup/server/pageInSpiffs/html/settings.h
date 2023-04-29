#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void settings(){
server.on("/settings.html", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    request->send(SPIFFS, "/settings.html", "text/html");
  });
}