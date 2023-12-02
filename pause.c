#include "functions.h" // inclut la fonction "functions.h"

int pause() { // Cette fonction ne renvoie rien 
    if (_kbhit()) { // Vérifie s'il y a une frappe de touche dans la file d'attente du clavier.
        char key = _getch(); // Si une touche est frappée, la fonction _getch() récupère cette touche et la stocke dans la variable 'key'.
        if (key == 'p' || key == 'P') { // Si la touche frappée est 'p' ou 'P' , alors une pause du jeu est déclenchée.
            gotoligcol(13, 4); // Appelle une fonction qui déplace le curseur à la ligne 13 et à la colonne 4 sur la console.  
            printf("Jeu en pause"); // Affiche      
            while (_getch() != 'p' && _getch() != 'P') {} // Attend jusqu'à ce que la touche 'p' ou 'P' soit à nouveau enfoncée pour reprendre le jeu.
            printf("\033[2K"); // Efface la ligne actuelle dans la console.
        }
    }
}
