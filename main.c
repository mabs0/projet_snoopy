#include <stdio.h>
#include <windows.h>
#include "functions.h"


//CONSTANTES :
#define LIGNES 20
#define COLONNES 10

//VARIABLES GLOBALES :
char partie[LIGNES][COLONNES];

//STRUCTURES
typedef struct {
    int Sniveau1,Sniveau2,Sniveau3,Stotal; //initialise le score total
}Score;

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
                switch (MDP()) {
                    case 1:
                        // ils faux lancer le niveau 1
                        break;
                    case 2:
                        // il faut lancer le niveau 2
                        break;
                    case 3:
                        // il faut lancer le niveau 3
                        break;
                    case 0:
                        printf("mauvais mot de passe ! ");
                        break;
                default:
                    printf("erreur");
                    break;
            }
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
