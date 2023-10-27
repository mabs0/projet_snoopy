#include <stdio.h>

int scores() {
    int Sniveau1; //initialise le score du niveau 1
    int Sniveau2; //initialise le score du niveau 2
    int Sniveau3; //initialise le score du niveau 3
    int time_rest1; //initialise le temps restant pour le niveau 1
    int time_rest2; //initialise le temps restant pour le niveau 2
    int time_rest3; //initialise le temps restant pour le niveau 3
    int Stotal; //initialise le score total

    //faire fonction scanf pour temps restants et la mettre la
    Sniveau1 = time_rest1 * 100;
    Sniveau2 = time_rest2 * 100;
    Sniveau3 = time_rest3 * 100;

    Stotal = Sniveau1 + Sniveau2 + Sniveau3;

    printf("Le score total du joueur est : %d", Stotal);
}