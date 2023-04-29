#include <Arduino.h>
#include <U8g2lib.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void percentageDisplay(){
    speed = (sendSpeedToMotor / 255.0) * 100;
    int centerX = (120 - u8g2.getStrWidth(String(speed).c_str())) / 2;
    u8g2.setCursor(centerX, 45);
    u8g2.print(String(speed));
}