#include "functions.h"

int game_over(int pv) {
    if (pv<=0) {
        clear_interface(); //Nettoie l'interface
        interface_game_over(); // Appelle la fonction d'interface pour afficher l'écran de fin de partie
        sleep(3);
        return 0; // Retuourne 0 à la variable var ce qui met fin au niveau
    }
    else {
        return 1; // Retuourne 1 à la variable var ce qui qui fait continuer le niveau
    }
}
