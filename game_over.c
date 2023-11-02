#include <stdio.h>
#include "interface.h"

void game_over() {
    if (life()==0) {
        interface_game_over();
        /*retour au menu*/
    }
}
