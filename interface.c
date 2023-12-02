#include "functions.h" // Inclut le fichier "functions.h" au programme

void clear_interface(int x, int y) {
    int i, j;
    // Boucle pour effacer l'interface
    for (i = 0; i < LARGEUR; i++) { // Parcourt les lignes 
        for (j = 0; j < LONGUEUR; j++) { // Parcourt les colonnes 
            gotoligcol(i, j); // Déplace le curseur à la position (i, j)
            printf(" "); // Affiche un espace pour effacer 
        }
        printf("\n"); // Passe à la ligne suivante après avoir effacé
    }
    gotoligcol(y, x); // Replace le curseur à une position spécifique après avoir effacé l'interface
}

void interface_titre() { // Affiche
    clear_interface(0,0); // clear l'interface 
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
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n....................\n.......ERREUR.......\n......VEUILLEZ......\n......CHOISIR.......\n.....UNE OPTION.....\n.....DISPONIBLE.....\n....................\n....................\n....................\n\n\n"); //affiche l'écran d'erreur
}

void interface_sauvegarde() {
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n...Sauvegardes :....\n....................\n...1.Sauvegarde 1...\n....................\n...2.Sauvegarde 2...\n.....................\n...3.Sauvegarde 3...\n....................\n....................\n\n\n"); //affiche l'écran de sauvegarde
}

void interface_game_over() {
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n....................\n....................\n....................\n........GAME........\n........OVER........\n....................\n....................\n....................\n....................\n\n\n"); //affiche l'écran de GAME OVER
}

void interface_menu() {
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n........Menu........\n....................\n..1.Regles du jeu...\n..2.Nouvelle partie.\n..3.Charger.........\n..4.Mot de passe....\n..5.Scores..........\n..6.Quitter.........\n....................\n\n\n"); //affiche le menu
}

void interface_regles_du_jeu() {
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n....................\n.Le but de Snoopy...\n.est de recuperer...\n.4 oiseaux aux 4....\n.coins du niveau....\n.en un temps........\n..imparti...........\n....................\n....................\n\n\n"); // Affiche
    sleep(4); // Attend 4 secondes 
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n....................\n.Pour cela, Snoopy..\n.va devoir utiliser.\n.tous les moyens....\n.a sa disposition...\n.et esquiver des....\n.obstacles..........\n....................\n....................\n\n\n"); // Affiche
    sleep(4); // Attend 4 secondes 
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n....................\n.Snoopy peut........\n.deplacer et casser.\n.des blocs pour.....\n.atteindre les......\n.oiseaux a..........\n.recuperer..........\n....................\n....................\n\n\n"); // Affiche
    sleep(4); // Attend 4 secondes 
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n....................\n.Mais il doit faire.\n.attention a la.....\n.balle et aux blocs.\n.pieges qui ont.....\n.pour but de........\n.l'arreter..........\n....................\n....................\n\n\n"); // Affiche
    sleep(4); // Attend 4 secondes 
    clear_interface(0,0); // clear l'interface 
    printf("\n\n\n....................\n....................\n....................\n....................\n.......BONNE........\n.......CHANCE.......\n....................\n....................\n....................\n....................\n\n\n"); // Affiche
}

void interface_victoire() {
    clear_interface(0,0); // clear l'interface 
    printf("\n....................\n....................\n......VICTOIRE......\n" // Affiche
           "....................\n....................\n");
}
