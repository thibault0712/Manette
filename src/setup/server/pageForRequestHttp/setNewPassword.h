#include "SPIFFS.h"
#include "ESPAsyncWebServer.h"

void setNewPassword(){
    server.on("/setNewPassword", HTTP_GET, [](AsyncWebServerRequest * request) {
        if (request->hasParam("password")) {
            AsyncWebParameter* passwordParam = request->getParam("password");
            String password = passwordParam->value();

            File file = SPIFFS.open("/password.txt", FILE_WRITE);
            file.print(password);
            file.close();

            Serial.println("Un nouveau mot de passe a été défini, redémarrage du système");
            ESP.restart();

            request->send(200);
        }
        else {
            request->send(400);
        }
    });
}