#include <nRF24L01.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void sendData(){
    radio.openWritingPipe(adresse);
    radio.stopListening();
    if (sendSpeedToMotor > maxMotorSpeed){
      sendSpeedToMotor = maxMotorSpeed;
    }else if(sendSpeedToMotor < 0){
      sendSpeedToMotor = 0;
    }
    radio.write(&sendSpeedToMotor, sizeof(sendSpeedToMotor));
    Serial.print("Envoi : ");
    Serial.println(sendSpeedToMotor);
}