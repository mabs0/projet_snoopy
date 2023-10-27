#include <stdio.h>

int menu(char choix) {
    printf("Menu\n 1. Regles du jeu\n 2. Lancer un nouveau jeu a partir du niveau\n "
           "3. Charger une partie\n 4. Mot de passe\n 5. Scores\n 6. Quitter\n"); //affiche le menu
    printf("Veuillez choisir une des options :\n"); //demande à l'utilisateur de choisir une option dans le menu
    fflush(stdin);
    scanf("%c", &choix);
}
