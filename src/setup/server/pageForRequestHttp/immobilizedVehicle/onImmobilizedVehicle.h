#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void onImmobilizedVehicle(){
server.on("/onImmobilizedVehicle", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    immobilizedVehicle = "true";

    Serial.println("La remorque est désormais immobilisé");
    File file = SPIFFS.open("/immobilizedVehicle.txt", FILE_WRITE);
    file.print(immobilizedVehicle);
    file.close();

    request->send(200);
  });
}