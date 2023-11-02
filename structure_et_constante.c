//CONSTANTES


#define LIGNES 20
#define COLONNES 10


// STRUCTURES
typedef struct {
    int Sniveau1,Sniveau2,Sniveau3,Stotal; //initialise le score total
}Score;

typedef struct{
    char apparence; //se référer à la feuille
    int cassable, colision; //oui : 1, non : 0, errreur : autre
}Bloc;

typedef struct {
    char partie[LIGNES][COLONNES];
    int time_rest1, time_rest2, time_rest3, PV;
    Score saved_score;
}Niveau;
