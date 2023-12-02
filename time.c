#include "functions.h" // Inclut la fonction "functions.h"

int horloge(){
    clock_t temps; // Déclare une variable temps de type clock_t 
    temps = clock()/1000; // Récupère le temps actuel de l'horloge CPU 
    return temps; // Renvoie le temps actuel en secondes.
}

int temps_restant(int temps_init) { // prend un argument temps_init 
    int temps = 120 - (horloge() - temps_init); // Calcule le temps restant 
    return temps; // Renvoie le temps restant calculé.
}

void timer (int temps_init) {
    gotoligcol(11,0); // Appelle une fonction qui déplace le curseur à la ligne 11 et à la colonne 0 sur la console.
    printf("Temps restant : %d s.", temps_restant(temps_init)); // Affiche le temps restant en secondes en utilisant la fonction temps_restant()
}
