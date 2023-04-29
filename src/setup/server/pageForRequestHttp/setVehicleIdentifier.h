#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

void setVehicleIdentifier(){
  server.on("/setVehicleIdentifier", HTTP_GET, [](AsyncWebServerRequest * request) {
    if (request->hasParam("vehicleIdentifier")) {
      AsyncWebParameter* vehicleIdentifierParam = request->getParam("vehicleIdentifier");
      String vehicleIdentifier = vehicleIdentifierParam->value();

      File file = SPIFFS.open("/vehicleIdentifier.txt", FILE_WRITE);
      file.print(vehicleIdentifier);
      file.close();

      Serial.println("Changement d\'identifiant de la remorque et redémarrage");
      ESP.restart();

      request->send(200);
    }else{
      request->send(400);
    }
  });
}