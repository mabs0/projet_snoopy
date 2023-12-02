#include "functions.h" // appel la bibliothèque functions.h

void gotoligcol(int lig, int col) { // Définition de la structure COORD pour stocker les coordonnées
    COORD mycoord;
    // Assignation des valeurs de ligne et colonne aux coordonnées
    mycoord.X = col;
    mycoord.Y = lig;
    
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), mycoord); // Déplace le curseur à l'emplacement spécifié en utilisant les coordonnées
}

int dghb() {
    if (_kbhit()) { // Vérification 
        int depl = getch(); // Lecture d'un caractère du clavier
        gotoligcol(1, 1); // Déplace le curseur à la ligne 1, colonne 1
        return depl; // Renvoie la valeur dep1
    } else {
        return 0; // Renvoie 0 
    }
}


