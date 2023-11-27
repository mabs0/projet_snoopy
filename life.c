#include <stdio.h>
#include "functions.h"
#include <unistd.h>

int life() {
    int vies=3;

    while (vies>=0) {
        printf("Points de vie restants : %d", vies);
        fflush(stdout);
        if (time() > 120) {
            vies -= 1;
            //variable qui recommence le niveau
        }
        if (variable de la balle qui touche snoopy) {
            vies -= 1;
        }
        if (variable des ennemis qui touchent snoopy) {
            vies -= 1;

        }
    }
    printf("Plus de vies, dommage !");

    return vies;
}
