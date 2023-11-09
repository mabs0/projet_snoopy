#include <stdio.h>
void interface_erreur() {
    printf("\n\n\n....................\n....................\n.......ERREUR.......\n......VEUILLEZ......\n......CHOISIR.......\n.....UNE OPTION.....\n.....DISPONIBLE.....\n....................\n....................\n....................\n\n\n"); //affiche l'écran d'erreur
}

void interface_sauvegarde() {
    printf("\n\n\n....................\n...Sauvegardes :....\n....................\n...1.Sauvegarde 1...\n....................\n...2.Sauvegarde 2...\n.....................\n...3.Sauvegarde 3...\n....................\n....................\n\n\n"); //affiche l'écran de sauvegarde
}

void interface_game_over() {
    printf("\n\n\n....................\n....................\n....................\n....................\n........GAME........\n........OVER........\n....................\n....................\n....................\n....................\n\n\n"); //affiche l'écran de GAME OVER
}

void interface_menu() {
    printf("\n\n\n....................\n........Menu........\n....................\n..1.Regles du jeu...\n..2.Nouvelle partie.\n..3.Charger.........\n..4.Mot de passe....\n..5.Scores..........\n..6.Quitter.........\n....................\n\n\n"); //affiche le menu
}

void regles_du_jeu() {
    printf("\n\n\n....................\n....................\n.Le but de Snoopy...\n.est de recuperer...\n.4 oiseaux aux 4....\n.coins du niveau....\n.en un temps........\n..imparti...........\n....................\n....................\n\n\n");
    sleep(4);
    printf("\n\n\n....................\n....................\n.Pour cela, Snoopy..\n.va devoir utiliser.\n.tous les moyens....\n.a sa disposition...\n.et esquiver des....\n.obstacles..........\n....................\n....................\n\n\n");
    sleep(4);
    printf("\n\n\n....................\n....................\n.Snoopy peut........\n.deplacer et casser.\n.des blocs pour.....\n.atteindre les......\n.oiseaux a..........\n.recuperer..........\n....................\n....................\n\n\n");
    sleep(4);
    printf("\n\n\n....................\n....................\n.Mais il doit faire.\n.attention a la.....\n.balle et aux blocs.\n.pieges qui ont.....\n.pour but de........\n.l'arreter..........\n....................\n....................\n\n\n");
    sleep(4);
    printf("\n\n\n....................\n....................\n....................\n....................\n.......BONNE........\n.......CHANCE.......\n....................\n....................\n....................\n....................\n\n\n");
}
