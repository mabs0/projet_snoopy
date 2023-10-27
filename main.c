#include <stdio.h>
#include <windows.h>
#include "functions.h"


//CONSTANTES :
#define LIGNES 20
#define COLONNES 10

//VARIABLES GLOBALES :
char partie[LIGNES][COLONNES];

int main() {

    int f;
    do {
        printf("\n\n....................\n........Menu........\n....................\n..1.Regles du jeu...\n..2.Nouvelle partie.\n"
               "..3.Charger.........\n..4.Mot de passe....\n..5.Scores..........\n..6.Quitter.........\n....................\n"); //affiche le menu
        fflush(stdin); // assure le scanf
        scanf("%d", &f);

        switch (f) {
            case 1:

                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6 :
                printf("A bientot ! ");
                break;

            default:
                printf("veuillez choisir une des options donnée :");
        }
    }while (f != 6);

    return 0;
}
