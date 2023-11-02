#include <stdio.h>
#include <windows.h>
#include "interface.h"


//CONSTANTES :
#define LIGNES 20
#define COLONNES 10

//VARIABLES GLOBALES :
char partie[LIGNES][COLONNES];

//STRUCTURES
typedef struct {
    int Sniveau1,Sniveau2,Sniveau3,Stotal; //initialise le score total
}Score;
typedef struct{
    char apparence; //se référer à la feuille
    int cassable, colision; //oui : 1, non : 0, errreur : autre
}Bloc;

int main() {

    int f;
    do {
        interface_menu();
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
