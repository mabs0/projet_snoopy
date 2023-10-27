#include <stdio.h>

int menu(char choix) {
    printf("Menu\n 1. Règles du jeu\n 2. QCM\n 3. Dessiner un carre\n 4. Dessiner un sablier\n 6. Quitter\n"); //affiche le menu
    printf("Veuillez choisir une des options :\n"); //demande à l'utilisateur de choisir une option dans le menu
    //scanf("%d", &choix); //scan le choix de l'utilisateur
    fflush(stdin);
    scanf("%c", &choix);
}
