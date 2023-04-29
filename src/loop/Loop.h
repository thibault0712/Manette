#include <Arduino.h>
#include <U8g2lib.h>

#include "sendData/sendData.h"
#include "writeDisplay/writeDisplay.h"
#include "writeDisplay/writeBlockedDisplay.h"
#include "delayLoop.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void Loop(){
  if (immobilizedVehicle != "true"){
    sensorValue = analogRead(A6);
    sendSpeedToMotor = map(sensorValue, 830, 2980, 0, maxMotorSpeed);
    sendData();
    writeDisplay();
  }else{
    writeBlockedDisplay();

  }
  delayLoop();
}