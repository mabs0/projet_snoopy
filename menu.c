#include "functions.h"

int menu() {
    interface_titre();
    int f,g;
    do {
        interface_menu();
        fflush(stdin); // assure le scanf
        scanf("%d", &f);

        switch (f) {
            case 1: //Règles du jeu
                interface_regles_du_jeu();
                break;

            case 2: //Lancer un nouveau Jeu à partir du niveau 1
                clear_interface();
                niveau(structure_niv_1, 9, 8, 5, 9);
                break;

            case 3: //Charger une partie
                interface_sauvegarde();
                break;

            case 4: //Mot de passe

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

            case 5: //Scores
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
