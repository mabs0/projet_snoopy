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
