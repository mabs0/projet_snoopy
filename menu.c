#include "functions.h"


int menu() {
    interface_titre();
    int f,g,c,l;
    int niv[COLONNES][LIGNES]={{0}};
    char sauvegardes[20] = "sauvegardes.txt";
    int t = 120;
    int x=0, y=0, i=0, j=0, oiseaux=0, level_number=0;
    do {
        interface_menu();
        fflush(stdin); // assure le scanf
        scanf("%d", &f);
        for (c=0; c<COLONNES; c++) { //remise à zéro des niveau
            for (l=0; l<LIGNES; l++) {
                niv_1[c][l]=template_niv_1[c][l];
                niv_2[c][l]=template_niv_2[c][l];
                niv_3[c][l]=template_niv_3[c][l];
            }
        }
        switch (f) {
            case 1: //Règles du jeu
                interface_regles_du_jeu();
                break;

            case 2: //Lancer un nouveau Jeu à partir du niveau 1
                clear_interface();
                niveau(niv_1, 9, 8, 9, 5, 1, 120, 0);
                break;

            case 3: //Charger une partie
                charger(niv, t, x, y, i, j, oiseaux, level_number);
                niveau(niv, x, y, j,i, level_number, t, oiseaux);
                break;

            case 4: //Mot de passe

                switch (MDP()) {
                    case 1:
                        niveau(niv_1, 9, 8, 5, 9, 1, 120,0);
                        break;
                    case 2:
                        niveau(niv_2,17,2,17,8,2,120,0);
                        break;
                    case 3:niveau(niv_3,1,1,10,4,3, 120,0);
                        break;
                    case 0:
                        printf("mauvais mot de passe ! ");
                        break;
                    default:
                        printf("erreur");
                        break;
                }

                break;

            case 5: //Scores
                interface_erreur();
                break;

            case 6 : //Quitter
                printf("A bientot ! ");
                break;

            default:
                printf("veuillez choisir une des options donnée :");
        }
    }while (f != 6);

    return 0;
}
