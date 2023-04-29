#include <Arduino.h>
#include <U8g2lib.h>
#include <RF24.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif
void moduleInitialisation(){
    pinMode(speedSensor, INPUT);
    u8g2.begin();
    radio.begin();
}
