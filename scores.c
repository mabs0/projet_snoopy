#include "functions.h"

int score_general() {

    score score;
    current_score current_score;

    //faire fonction scanf pour temps restants et la mettre la
    score.Sniveau1 = current_score.time_rest1 * 100;
    score.Sniveau2 = current_score.time_rest2 * 100;
    score.Sniveau3 = current_score.time_rest3 * 100;

    score.Stotal = score.Sniveau1 + score.Sniveau2 + score.Sniveau3;
}
