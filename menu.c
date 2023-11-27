#include <stdio.h>
#include "tkt.h"
#include<windows.h>

int main() {

    int f,g;
    int niv[10][20];

    printf("=================================================================================================\n");
    printf("|    .____             __________                                 .__                           |\n");
    printf("|    |    |   _____    \\______   \\ _______  ______    ____   ____ |  |__   ____                 |\n");
    printf("|    |    |   \\__  \\    |       _// __ \\  \\/ |__  \\  /    \\_/ ___\\|  |  \\_/ __ \\                |\n");
    printf("|    |    |___ / __ \\_  |    |   \\  ___/\\   / / __ \\|   |  \\  \\___|   Y  \\  ___/                |\n");
    printf("|    |_______ (____  /  |____|_  /\\___  >\\_/ (____  /___|  /\\___  >___|  /\\___  >               |\n");
    printf("|            \\/    \\/          \\/     \\/          \\/     \\/     \\/     \\/     \\/                |\n");
    printf("|        .___         _________                                                                 |\n");
    printf("|      __| _/____    /   _____/ ____   ____   ____ ______ ___.__.                               |\n");
    printf("|     / __ |/ __ \\   \\_____  \\ /    \\ /  _ \\ /  _ \\\\____ <   |  |                               |\n");
    printf("|    / /_/ \\  ___/   /        \\   |  (  <_> |  <_> )  |_> >___  |                               |\n");
    printf("|    \\____ |\\___  > /_______  /___|  /\\____/ \\____/|   __// ____|                               |\n");
    printf("|         \\/    \\/          \\/     \\/              |__|   \\/                                    |\n");
    printf("=================================================================================================\n");
    Sleep(5000);


    do {
        printf("\n\n....................\n........Menu........\n....................\n..1.Regles du jeu...\n..2.Nouvelle partie.\n"
               "..3.Charger.........\n..4.Mot de passe....\n..5.Scores..........\n..6.Quitter.........\n....................\n"); //affiche le menu
        fflush(stdin); // assure le scanf
        scanf("%d", &f);

        switch (f) {
            case 1: //Règles du jeu

                break;

            case 2: //Lancer un nouveau Jeu à partir du niveau 1
                niveau(niv);
                dghb();
                mooveS(niv);
                break;

            case 3: //Charger une partie
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

