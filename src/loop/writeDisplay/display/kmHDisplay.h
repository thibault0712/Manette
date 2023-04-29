#include <Arduino.h>
#include <U8g2lib.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void kmHDisplay(){
    float roundPerMinuteSmall = ((sendSpeedToMotor / 255.0) * 350 * 60)/((weightBike + 10) * 9.81 * radiusSmallBike * 2 * PI);
    float roundPerMinuteBig = (radiusSmallBike * 2)/(radiusBigike * 2)*roundPerMinuteSmall;
    speed = 0.12 * PI * radiusBigike * roundPerMinuteBig;
    int centerX = (120 - u8g2.getStrWidth(String(speed).c_str())) / 2;
    u8g2.setCursor(centerX, 45);
    u8g2.print(String(speed));
}