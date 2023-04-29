#include <U8g2lib.h>

#include "display/kmHDisplay.h"
#include "display/percentageDisplay.h"

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void writeDisplay(){
    u8g2.clearBuffer(); // Effacer le buffer d'affichage
    u8g2.setFont(u8g2_font_fub30_tn); // Choisir la police d'écriture
    if (display == "percentage"){
        percentageDisplay();
    }else{
        kmHDisplay();
    }
    u8g2.sendBuffer();
}