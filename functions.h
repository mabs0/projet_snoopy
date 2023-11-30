
/////BIBLIOTHEQUES ET CONSTANTES/////
#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie pour permettre l'utilisation des fonctions d'entrée/sortie standard comme printf et putchar.
#include <windows.h> // Inclusion de la bibliothèque Windows pour utiliser des fonctions spécifiques à Windows, telles que SetConsoleCursorPosition et GetStdHandle.
#include <unistd.h> // Inclusion de la bibliothèque UNIX pour utiliser la fonction sleep, qui suspend l'exécution du programme pendant le nombre de secondes spécifié.
#include <conio.h>
#include <time.h>
#define LIGNES 20
#define COLONNES 10
#define LONGUEUR 100
#define LARGEUR 30

/////STRUCTURES ET TABLEAUX/////
extern int structure_niv_test[COLONNES][LIGNES];
extern int structure_niv_1[COLONNES][LIGNES];
extern int structure_niv_2[COLONNES][LIGNES];
extern int structure_niv_3[COLONNES][LIGNES];

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


/////FONCTIONS/////
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
int MDP ();
int niveau (int niv[COLONNES][LIGNES], int x_depart_snoopy, int y_depart_snoopy, int x_depart_ball, int y_depart_ball);
void gotoligcol( int lig, int col );
int random_nb_between(int a, int b);
void moveball(int niv[COLONNES][LIGNES], int x, int y);
int clock_ball(clock_t init_ball);
int dghb();
int affichage_niveau(int niv[COLONNES][LIGNES], int x, int y) ;
void interface_erreur();
void interface_sauvegarde();
void interface_game_over();
void interface_menu();
void interface_regles_du_jeu();
void interface_victoire();
void interface_titre();
void clear_interface();
