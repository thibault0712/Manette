#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>
#include <WiFi.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <RF24.h>

#include "variables.h"
#include "setup/Setup.h"
#include "loop/Loop.h"

void setup()
{
  Setup();
}

void loop()
{
  Loop();
}