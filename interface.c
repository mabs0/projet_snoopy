#include "functions.h"

void clear_interface(int x,int y) {
    int i, j;
    for (i=0;i<LARGEUR;i++) {
        for (j=0;j<LONGUEUR;j++) {
            gotoligcol(i,j);
            printf(" ");
        }
        printf("\n");
    }
    gotoligcol(y,x);
}

void interface_titre() {
    clear_interface(0,0);
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
}

void interface_erreur() {
    clear_interface(0,0);
    printf("\n\n\n....................\n....................\n.......ERREUR.......\n......VEUILLEZ......\n......CHOISIR.......\n.....UNE OPTION.....\n.....DISPONIBLE.....\n....................\n....................\n....................\n\n\n"); //affiche l'écran d'erreur
}


void interface_game_over() {
    clear_interface(0,0);
    printf("\n\n\n....................\n....................\n....................\n....................\n........GAME........\n........OVER........\n....................\n....................\n....................\n....................\n\n\n"); //affiche l'écran de GAME OVER
}

void interface_menu() {
    clear_interface(0,0);
    printf("\n\n\n....................\n........Menu........\n....................\n..1.Regles du jeu...\n..2.Nouvelle partie.\n..3.Charger.........\n..4.Mot de passe....\n..5.Scores..........\n..6.Quitter.........\n....................\n\n\n"); //affiche le menu
}

void interface_regles_du_jeu() {
    clear_interface(0,0);
    printf("\n\n\n....................\n....................\n.Le but de Snoopy...\n.est de recuperer...\n.4 oiseaux aux 4....\n.coins du niveau....\n.en un temps........\n..imparti...........\n....................\n....................\n\n\n");
    sleep(4);
    clear_interface(0,0);
    printf("\n\n\n....................\n....................\n.Pour cela, Snoopy..\n.va devoir utiliser.\n.tous les moyens....\n.a sa disposition...\n.et esquiver des....\n.obstacles..........\n....................\n....................\n\n\n");
    sleep(4);
    clear_interface(0,0);
    printf("\n\n\n....................\n....................\n.Snoopy peut........\n.deplacer et casser.\n.des blocs pour.....\n.atteindre les......\n.oiseaux a..........\n.recuperer..........\n....................\n....................\n\n\n");
    sleep(4);
    clear_interface(0,0);
    printf("\n\n\n....................\n....................\n.Mais il doit faire.\n.attention a la.....\n.balle et aux blocs.\n.pieges qui ont.....\n.pour but de........\n.l'arreter..........\n....................\n....................\n\n\n");
    sleep(4);
    clear_interface(0,0);
    printf("\n\n\n....................\n....................\n....................\n....................\n.......BONNE........\n.......CHANCE.......\n....................\n....................\n....................\n....................\n\n\n");
}

void interface_touches() {
    gotoligcol(14,0);
    printf("Les 0 representent des murs infranchisables, le S Snoopy, le X la balle, les 6 des blocs deplacables, les 9 des blocs casssables intacts et les 3 des abimes\nDeplacez-vous avec les fleches, sautez avec espace pour abîmer les blocs cassables aux alentours, mettez en pause avec p, sauvegardez avec s et quittez avec q\nOh est dernier conseil, mefiez vous des 2...");
}

void interface_victoire() {
    clear_interface(0,0);
    printf("\n....................\n....................\n....................\n....................\n......VICTOIRE......\n....................\n....................\n....................\n....................\n....................\n");
    sleep(3);
}
