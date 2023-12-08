#include "functions.h" // inclut la fonction "functions.h"

int pause(char key, int temps_init) { // Cette fonction ne renvoie rien
    int t1, t2;
        if (key == 'p') { // Si la touche frappée est 'p', alors une pause du jeu est déclenchée.
            t1=horloge();
            gotoligcol(13, 4); // Appelle une fonction qui déplace le curseur à la ligne 13 et à la colonne 4 sur la console.
            printf("Jeu en pause"); // Affiche
            while (_getch() != 'p') {} // Attend jusqu'à ce que la touche 'p' ou 'P' soit à nouveau enfoncée pour reprendre le jeu.
            printf("\033[2K"); // Efface la ligne actuelle dans la console.
            t2=horloge();
            return temps_init+(t2-t1);
        }
        else {
            return temps_init;
        }
}
