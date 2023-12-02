#include "functions.h" // Inclusion du fichier "functions.h"

int life() {
    int vies = 3; // Initialise le nombre de vies à 3

    while (vies >= 0) { // Boucle tant que le nombre de vies est supérieur ou égal à zéro 
        printf("Points de vie restants : %d", vies); // Affiche le nombre de vies restantes
        fflush(stdout); // Vide le tampon de sortie pour afficher le texte immédiatement

        // if (time() > 120) {
        //     vies -= 1;
        //     //variable qui recommence le niveau
        // }
        // if (/*variable de la balle qui touche snoopy*/) {
        //     vies -= 1;
        // }
        // if (/*variable des ennemis qui touchent snoopy*/) {
        //     vies -= 1;
        // }
    }

    printf("Plus de vies, dommage !"); // Affiche 

    return vies; // Retourne le nombre de vies restantes 
}
