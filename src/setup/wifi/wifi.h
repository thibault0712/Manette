#include <Arduino.h>
#include <WiFi.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void wifi(){
  const char* password = passwordInSpiffs.c_str();
  WiFi.softAP(ssid, password);
  Serial.print("Adresse IP: ");
  Serial.println(WiFi.softAPIP());
}