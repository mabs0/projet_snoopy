#include <stdio.h>
#include "functions.h"

void game_over() {
    if (life()==0) {
        interface_game_over();
        return menu();
    }
}
