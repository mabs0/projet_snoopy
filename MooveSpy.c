#include "functions.h" // Inclusion du fichier d'en-tête functions.h qui contient des déclarations de fonctions

void gotoligcol(int lig, int col) {
    // Définition de la structure COORD pour stocker les coordonnées
    COORD mycoord;
    // Assignation des valeurs de ligne et colonne aux coordonnées
    mycoord.X = col;
    mycoord.Y = lig;
    // Déplacement du curseur à l'emplacement spécifié en utilisant les coordonnées
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), mycoord);
}

int dghb() {
    if (_kbhit()) { // Vérification de la saisie clavier
        int depl = getch(); // Lecture d'un caractère du clavier
        gotoligcol(1, 1); // Déplacement du curseur à la ligne 1, colonne 1
        return depl; // Renvoie la valeur du caractère lu
    } else {
        return 0; // Renvoie 0 si aucune saisie clavier n'est détectée
    }
}


