#include "functions.h"

int random_nb_between(int a, int b) // Déclaration de la fonction random_nb_between qui génère un nombre aléatoire entre a et b inclus.
{
    int choix = rand() % 2; // Génération d'un nombre aléatoire entre 0 et 1 pour faire un choix entre a et b.
    if (choix == 0) // Retourne a si le choix est 0.
    {
        return a;
    }
    if (choix == 1) // Retourne b si le choix est 1.
    {
        return b;
    }
}

int clock_ball(clock_t init_ball){
    if ((init_ball/500)!=(clock()/500)){
        return 1;
    }
    else {
        return 0;
    }
}

void moveball(int niv[COLONNES][LIGNES], int x, int y) { // Déclaration de la fonction ballmoove qui simule le mouvement d'une balle dans la console.
    int a = 0; // Initialisation des variables pour contrôler le déplacement de la balle.
    gotoligcol(y, x); // Déplace le curseur à la position actuelle et affiche un espace pour effacer la balle précédente.
    printf(" ");
    x=0;
    y=0;
    do {x = x + random_nb_between(-1, 1); // -1, 0 ou 1
        y = y + random_nb_between(-1, 1); // -1, 0 ou 1
    } while (niv[x][y]!=1);
    // Génère un déplacement aléatoire d'une case en x et y.
    x = x + random_nb_between(-1, 1); // -1, 0 ou 1
    y = y + random_nb_between(-1, 1); // -1, 0 ou 1
    gotoligcol(x, y); // Déplace le curseur à la nouvelle position et affiche la balle ('X').
    printf("X");
}
