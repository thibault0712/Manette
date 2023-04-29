#include "display/kmH.h"
#include "display/percentage.h"
#include "immobilizedVehicle/offImmobilizedVehicle.h"
#include "immobilizedVehicle/onImmobilizedVehicle.h"
#include "lowBattery/offLowBattery.h"
#include "lowBattery/onLowBattery.h"
#include "readSpead.h"
#include "setNewPassword.h"
#include "setVehicleIdentifier.h"
#include "setWeightBike.h"

void pageForRequestHttp(){
    kmH();
    percentage();
    offImmobilizedVehicle();
    onImmobilizedVehicle();
    offLowBatrry();
    onLowBatrry();
    readSpead();
    setNewPassword();
    setVehicleIdentifier();
    setWeightBike();
}