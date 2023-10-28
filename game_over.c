#include <stdio.h>
#include "functions.h"

char interface_game_over() {
    printf("\n\n\n....................\n........GAME........\n"
           "....................\n........OVER........\n....................\n\n");
}

void game_over() {
    if (life()==0) {
        printf("%c",interface_game_over());
        /*retour au menu*/
    }
}
