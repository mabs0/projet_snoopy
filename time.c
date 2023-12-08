#include "functions.h"

int horloge(){
    clock_t temps;
    temps = clock()/1000;
    return temps;
}

int temps_restant(int temps_init) {
    int temps = 120 - (horloge() - temps_init);
    return temps;
}

void timer (int temps_init) {
    gotoligcol(11,0);
    printf("Temps restant : %ds       ", temps_restant(temps_init));
}
