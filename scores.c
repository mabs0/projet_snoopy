#include "functions.h" // Inclut la fonction "functions.h"

int score_general() { // Cette fonction ne retourne rien 
    score score; // Déclare une variable de type score 
    current_score current_score; // Déclare une variable de type current_score 

    score.Sniveau1 = current_score.time_rest1 * 100; // Calcule le score pour le niveau 1 
    score.Sniveau2 = current_score.time_rest2 * 100; // Calcule le score pour le niveau 2 
    score.Sniveau3 = current_score.time_rest3 * 100; // Calcule le score pour le niveau 3 
    score.Stotal = score.Sniveau1 + score.Sniveau2 + score.Sniveau3; // Calcule le score total en additionnant les scores des trois niveaux.
    
}
