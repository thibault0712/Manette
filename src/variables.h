#include <Arduino.h>
#include <U8g2lib.h>
#include <RF24.h>
#include <ESPAsyncWebServer.h>

#define VARIABLES_H
#define pinCE  4
#define pinCSN 5

byte adresse[13];

RF24 radio(pinCE, pinCSN);

// Initialisation de l'écran OLED
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

// Initialisation du serveur web sur le port 80 (port par defaut pour site http)
AsyncWebServer server(80);

const char *ssid = "Manette";
const int speedSensor = A6;
int maxMotorSpeed; //On ne défini pas la valeur car elle va etre recup dans spiffs
String immobilizedVehicle; //A changer String en bool mais pas tout de suite
String display; //idem
int weightBike; //idem
String passwordInSpiffs;
int sensorValue = 0;
int speed = 0;
int sendSpeedToMotor;
float radiusSmallBike = 0.055;
float radiusBigike = 0.25;

