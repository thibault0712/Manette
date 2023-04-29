#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void offImmobilizedVehicle(){
server.on("/offImmobilizedVehicle", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    immobilizedVehicle = "false";

    Serial.println("Le remorque n\'est plus immobilisé");
    File file = SPIFFS.open("/immobilizedVehicle.txt", FILE_WRITE);
    file.print(immobilizedVehicle);
    file.close();

    request->send(200);
  });
}