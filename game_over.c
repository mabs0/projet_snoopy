#include "functions.h" // Inclut le fichier "functions.h" au programme

void game_over() {
    if (life() == 0) { // Vérifie si la fonction life() retourne 0
        interface_game_over(); // Appelle la fonction d'interface pour afficher l'écran de fin de partie
    }
}
