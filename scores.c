#include <stdio.h>

typedef struct Score score;
struct Score{
    int Sniveau1; //initialise le score du niveau 1
    int Sniveau2; //initialise le score du niveau 2
    int Sniveau3; //initialise le score du niveau 3
    int Stotal; //initialise le score total
};
typedef struct Current_score current_score;
struct Current_score{
    int time_rest1; //initialise le temps restant pour le niveau 1
    int time_rest2; //initialise le temps restant pour le niveau 2
    int time_rest3; //initialise le temps restant pour le niveau 3
};

int score_general() {

    score score;
    current_score current_score;
    
    //faire fonction scanf pour temps restants et la mettre la
    score.Sniveau1 = current_score.time_rest1 * 100;
    score.Sniveau2 = current_score.time_rest2 * 100;
    score.Sniveau3 = current_score.time_rest3 * 100;

    score.Stotal = score.Sniveau1 + score.Sniveau2 + score.Sniveau3;
}
