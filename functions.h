/////BIBLIOTHEQUES ET CONSTANTES/////
#include <stdio.h> // Fonctions standard
#include <windows.h> // Fonctions spécifiques à Windows
#include <unistd.h> // Fonctions UNIX 
#include <conio.h> // Fonction pour interagire avec la console
#include <time.h> // Fonctions gestion du temps
#define LIGNES 20 // constante LIGNES avec 20 valeurs
#define COLONNES 10 // constante COLONNES avec 10 valeurs
#define LONGUEUR 100 // constante LONGUEUR avec 100 valeurs
#define LARGEUR 30 //  constante LARGEUR avec 30 valeurs

/////STRUCTURES ET TABLEAUX/////
// Déclaration de tableaux externes pour les différentes structures de niveaux
extern int structure_niv_test[COLONNES][LIGNES];
extern int structure_niv_1[COLONNES][LIGNES];
extern int structure_niv_2[COLONNES][LIGNES];
extern int structure_niv_3[COLONNES][LIGNES];

// Définition de la structure Score pour gérer les scores
typedef struct {
    int Sniveau1, Sniveau2, Sniveau3, Stotal; // Scores pour chaque niveau et le score total
} Score;

// Définition de la structure Bloc pour représenter les différents élements du jeu
typedef struct {
    char apparence; // Apparence du bloc
    int cassable, collision; // Propriétés de collision et de cassabilité
} Bloc;

// Définition de la structure Niveau pour représenter un niveau du jeu
typedef struct {
    char partie[LIGNES][COLONNES]; // Partie du niveau
    int time_rest1, time_rest2, time_rest3, PV; // Temps restant et points de vie
    Score saved_score; // Score sauvegardé
} Niveau;

// Définition des structures Score et Current_score (en lien avec Score)
typedef struct Score score;
struct Score {
    int Sniveau1; // Score du niveau 1
    int Sniveau2; // Score du niveau 2
    int Sniveau3; // Score du niveau 3
    int Stotal; // Score total
};
typedef struct Current_score current_score;
struct Current_score {
    int time_rest1; // Temps restant pour le niveau 1
    int time_rest2; // Temps restant pour le niveau 2
    int time_rest3; // Temps restant pour le niveau 3
};

/////FONCTIONS/////
// Déclare les différentes fonctions du jeu

void game_over();
void victoire();
int score_general();
void erreur();
void sauvegarder(/*current_game*/);
int life();
void timer(int temps_init);
int temps_restant(int temps_init);
int horloge();
int menu();
int MDP();
int niveau(int niv[COLONNES][LIGNES], int x_depart_snoopy, int y_depart_snoopy, int x_depart_ball, int y_depart_ball);
void gotoligcol(int lig, int col);
int random_nb_between(int a, int b);
void moveball(int niv[COLONNES][LIGNES], int x, int y);
int clock_ball(clock_t init_ball);
int dghb();
int affichage_niveau(int niv[COLONNES][LIGNES], int x, int y);
void interface_erreur();
void interface_sauvegarde();
void interface_game_over();
void interface_menu();
void interface_regles_du_jeu();
void interface_victoire();
void interface_titre();
void clear_interface();
