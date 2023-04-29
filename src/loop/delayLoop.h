#include <Arduino.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void delayLoop(){
  if (maxMotorSpeed == 255){
    delay(100);
  }else{
    delay(300);
  }

}