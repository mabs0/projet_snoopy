#include <stdio.h>
#include <windows.h>
#include "scores.c"
#include "interface.h"
#define LIGNES 20
#define COLONNES 10
typedef struct {
    char partie[LIGNES][COLONNES];
    int time_rest1, time_rest2, time_rest3, PV;
    Score saved_score;
}Niveau;
Niveau sauvegarde1;
Niveau sauvegarde2;
Niveau sauvegarde3;
int reponse = 0;
void sauvegarder() {
    do{
        interface_sauvegarde();
        scanf("%d",&reponse);
        if ((reponse!=1)&&(reponse!=2)&&(reponse!=3)){
            interface_erreur();
        }
    } while ((reponse!=1)&&(reponse!=2)&&(reponse!=3));
    switch (reponse) {
        case 1 :
            sauvegarde1=current_game;
        case 2 :
            sauvegarde2=current_game;
        case 3 :
            sauvegarde3=current_game;
    }
}
