//On bloque speed à 0 donc on affichera 0 sur l'écran
#include <U8g2lib.h>

#ifdef VARIABLES_H
#define VARIABLES_H
#endif

void writeBlockedDisplay(){
    u8g2.clearBuffer(); // Effacer le buffer d'affichage
    u8g2.setFont(u8g2_font_fub30_tn); // Choisir la police d'écriture
    speed = 0;
    int centerX = (120 - u8g2.getStrWidth(String(speed).c_str())) / 2;
    u8g2.setCursor(centerX, 45);
    u8g2.print(String(speed));
    u8g2.sendBuffer();
}