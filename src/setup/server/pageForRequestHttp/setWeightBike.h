#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

void setWeightBike(){
  server.on("/setWeightBike", HTTP_GET, [](AsyncWebServerRequest * request) {
    if (request->hasParam("weight")) {
      AsyncWebParameter* weightBikeParam = request->getParam("weight");
      String weightBike = weightBikeParam->value();

      File file = SPIFFS.open("/weightBike.txt", FILE_WRITE);
      file.print(weightBike);
      file.close();

      Serial.print("Nouveau poids du vélo défini !");
      Serial.println(weightBike);

      request->send(200);
    }
    else {
      request->send(400);
    }
  });
}