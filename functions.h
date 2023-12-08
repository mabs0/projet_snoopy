/////BIBLIOTHEQUES ET CONSTANTES/////
#include <stdio.h> // Fonctions standard
#include <windows.h> // Fonctions spécifiques à Windows
#include <unistd.h> // Fonctions UNIX
#include <conio.h> // Fonction pour interagire avec la console
#include <time.h> // Fonctions gestion du temps
#define LIGNES 20 // constante LIGNES avec 20 valeurs
#define COLONNES 10 // constante COLONNES avec 10 valeurs
#define LONGUEUR 200 // constante LONGUEUR avec 100 valeurs
#define LARGEUR 30 //  constante LARGEUR avec 30 valeurs

/////TABLEAUX/////
// Déclaration de tableaux externes pour les différentes structures de niveaux
extern int niv_test[COLONNES][LIGNES];
extern int template_niv_1[COLONNES][LIGNES];
extern int template_niv_2[COLONNES][LIGNES];
extern int template_niv_3[COLONNES][LIGNES];
extern int niv_1[COLONNES][LIGNES];
extern int niv_2[COLONNES][LIGNES];
extern int niv_3[COLONNES][LIGNES];


/////FONCTIONS/////
int game_over(int pv);
void victoire();
int score_general();
void erreur();
void life(int pv);
void timer(int temps_init);
int temps_restant(int temps_init);
int horloge();
int menu();
int MDP ();
int niveau (int niv[COLONNES][LIGNES], int x_depart_snoopy, int y_depart_snoopy, int x_depart_ball, int y_depart_ball, int level_number, int t, int oiseaux);
void gotoligcol( int lig, int col );
int random_nb_between(int a, int b);
int clock_ball(clock_t init_ball);
int dghb();
int pause(char key, int temps_init);
int affichage_niveau(int niv[COLONNES][LIGNES], int x, int y) ;
void interface_erreur();
void interface_game_over();
void interface_menu();
void interface_regles_du_jeu();
void interface_victoire();
void interface_titre();
void interface_touches();
void clear_interface();
void sauvegarder(int niv[COLONNES][LIGNES], int t, int x, int y, int i, int j, int oiseaux, int level_number);
void charger(int niv[COLONNES][LIGNES], int t, int x, int y, int i, int j, int oiseaux, int level_number);
