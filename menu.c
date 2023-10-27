#include <stdio.h>

int menu () {
    char choix;
    printf("\n\n          ....................\n          ........Menu........\n          ....................\n          ..1.Regles du jeu...\n          ..2.Nouvelle partie.\n"
           "          ..3.Charger.........\n          ..4.Mot de passe....\n          ..5.Scores..........\n          ..6.Quitter.........\n          ....................\n"); //affiche le menu
    fflush(stdin);
    scanf("          %c", &choix);
    return 0;
}
