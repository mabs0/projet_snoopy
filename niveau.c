#include "functions.h"
int structure_niv_test[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int structure_niv_1[COLONNES][LIGNES]= {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,5,1,1,1,1,1,0,1,8,1,0,1,1,1,1,1,1,5,0},{0,1,9,2,1,1,1,0,1,1,1,0,1,1,1,1,2,9,1,0},{0,1,2,1,1,1,1,0,9,6,9,0,1,1,1,1,1,2,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,7,1,1,1,1,1,0},{0,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,0},{0,1,9,2,1,1,1,1,1,1,1,1,1,1,1,1,2,9,1,0},{0,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int structure_niv_2[COLONNES][LIGNES]= {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0},{0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0},{0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0},{0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int structure_niv_3[COLONNES][LIGNES]= {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0},{0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,0},{0,1,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

int affichage_niveau(int niv[COLONNES][LIGNES], int x, int y) { // prend en paramètres une matrice niv, ainsi que des coordonnées x et y 
    gotoligcol(0, 0); // Appelle une fonction qui déplace le curseur à la ligne 0 et à la colonne 0 sur la console.
    int i, j; // Déclare les variables de boucle i et j 
    for (i = 0; i < 10; i++) { // Boucle sur les lignes de la matrice.
        for (j = 0; j < 20; j++) { // Boucle sur les colonnes de la matrice.
            if (niv[i][j] == 1) { // Si la valeur dans la matrice à la position (i, j) est égale à 1 
                printf(" "); // Affiche un espace
            } 
            else {  // Sinon
                printf("%d", niv[i][j]); // Affiche la valeur présente dans la matrice à la position (i, j)
            }
        }
        printf("\n"); // Affiche un retour a la ligne
    }

    gotoligcol(x, y); // Déplace le curseur à la position spécifiée par les coordonnées x et y dans la console.
    return 0;
}
    

int niveau(int niv[COLONNES][LIGNES], int x_depart_snoopy, int y_depart_snoopy, int x_depart_ball, int y_depart_ball) { // prend en paramètres une matrice niv et les positions de départ de Snoopy et de la balle.
    clock_t temps_init = clock() / 1000; // Initialise une variable temps_init 

    int a = 0; // Variable pour stocker la direction de déplacement de Snoopy
    int t = 120; // Variable pour le temps total du niveau, initialisé à 120 secondes
    int i = y_depart_snoopy; // Position verticale de départ de Snoopy
    int j = x_depart_snoopy; // Position horizontale de départ de Snoopy
    int x = x_depart_ball; // Position horizontale de départ de la balle
    int y = y_depart_ball; // Position verticale de départ de la balle

    clear_interface(j, i); // Efface l'interface à la position de départ de Snoopy
    timer(temps_init); // Affiche le timer à partir du temps initial du niveau
    affichage_niveau(niv, i, j); // Affiche le niveau avec la position de départ de Snoopy
    gotoligcol(i, j); // Place le curseur à la position de départ de Snoopy dans le niveau
    printf("S"); // Affiche Snoopy à sa position de départ
    gotoligcol(y, x); // Place le curseur à la position de départ de la balle dans le niveau
    printf("X"); // Affiche la balle à sa position de départ

    while (t > 0) { // Boucle principale du niveau, basée sur le temps restant
        clock_t init_ball = clock(); // Enregistre le temps initial pour le mouvement de la balle
        a = dghb(); // direction de déplacement de Snoopy

        if ((a == 77) && (niv[i][j + 1] != 0)) { // Si la direction de déplacement est vers la droite et qu'il n'y a pas de collision avec un mur
            if (niv[i][j + 1] == 1) { // Si la prochaine position est libre ('1'), déplace Snoopy vers la droite.
                gotoligcol(i, j);
                printf(" ");
                j++;
                gotoligcol(i, j);
                printf("S");
            }

            if ((niv[i][j + 1] == 6) && (niv[i][j + 2] == 1)) {
                // Si Snoopy rencontre un bloc poussable ('6') à côté de lui et qu'il y a un espace libre après le bloc :

                gotoligcol(i, j);
                printf(" ");
                j++;
                gotoligcol(i, j);
                printf("S");

                // Met à jour la position du bloc poussable et de Snoopy.
                niv[i][j + 1] = 1;
                gotoligcol(i, j + 1);
                printf("6");
                niv[i][j + 1] = 6;
            }
            if (niv[i][j+1] == 3) { //interaction avec bloc cassable fracturé
                gotoligcol(i, j);
                printf(" ");
                j++;
                gotoligcol(i, j);
                printf("S");
                niv[i][j] = 1;
            }
            if (niv[i][j+1] == 9) { //interaction avec bloc cassable intact
                gotoligcol(i, j+1);
                printf("3");
                niv[i][j+1] = 3;
            }
        }
        if ((a == 75)&&(niv[i][j-1] != 0)) { //gauche
            if (niv[i][j-1] == 1) { //déplacement de base
                gotoligcol(i, j);
                printf(" ");
                j--;
                gotoligcol(i, j);
                printf("S");
            }
            if ((niv[i][j-1] == 6)&&(niv[i][j-2] == 1)) { //interaction avec bloc poussable
                gotoligcol(i, j);
                printf(" ");
                j--;
                gotoligcol(i, j);
                printf("S");
                niv[i][j-1] = 1;
                gotoligcol(i, j-1);
                printf("6");
                niv[i][j-1] = 6;
            }
            if (niv[i][j-1] == 3) { //interaction avec bloc cassable fracturé
                gotoligcol(i, j);
                printf(" ");
                j--;
                gotoligcol(i, j);
                printf("S");
                niv[i][j] = 1;
            }
            if (niv[i][j-1] == 9) { //interaction avec bloc cassable intact
                gotoligcol(i, j-1);
                printf("3");
                niv[i][j-1] = 3;
            }
        }
        if ((a == 72)&&(niv[i-1][j] != 0)) { //haut
            if (niv[i-1][j] == 1) { //déplacement de base
                gotoligcol(i, j);
                printf(" ");
                i--;
                gotoligcol(i, j);
                printf("S");
            }
            if ((niv[i-1][j] == 6)&&(niv[i-2][j] == 1)) { //interaction avec bloc poussable
                gotoligcol(i, j);
                printf(" ");
                i--;
                gotoligcol(i, j);
                printf("S");
                niv[i-1][j] = 1;
                gotoligcol(i-1, j);
                printf("6");
                niv[i-1][j] = 6;
            }
            if (niv[i-1][j] == 3) { //interaction avec bloc cassable fracturé
                gotoligcol(i, j);
                printf(" ");
                i--;
                gotoligcol(i, j);
                printf("S");
                niv[i][j] = 1;
            }
            if (niv[i-1][j] == 9) { //interaction avec bloc cassable intact
                gotoligcol(i-1, j);
                printf("3");
                niv[i-1][j] = 3;
            }
        }
        if ((a == 80)&&(niv[i+1][j] != 0)) {   //bas
            if (niv[i+1][j] == 1) { //déplacement de base
                gotoligcol(i, j);
                printf(" ");
                i++;
                gotoligcol(i, j);
                printf("S");
            }
            if ((niv[i+1][j] == 6)&&(niv[i+2][j] == 1)) { //interaction avec bloc poussable
                gotoligcol(i, j);
                printf(" ");
                i++;
                gotoligcol(i, j);
                printf("S");
                niv[i+1][j] = 1;
                gotoligcol(i+1, j);
                printf("6");
                niv[i+1][j] = 6;
            }
            if (niv[i+1][j] == 3) { //interaction avec bloc cassable fracturé
                gotoligcol(i, j);
                printf(" ");
                i++;
                gotoligcol(i, j);
                printf("S");
                niv[i][j] = 1;
            }
            if (niv[i+1][j] == 9) { //interaction avec bloc cassable intact
                gotoligcol(i+1, j);
                printf("3");
                niv[i+1][j] = 3;
            }
        }

        timer(temps_init);
        /*if (clock_ball(init_ball)){
            gotoligcol(y, x); // Déplace le curseur à la position actuelle et affiche un espace pour effacer la balle précédente.
            printf(" ");
            do {x = x + random_nb_between(-1, 1); // -1 ou 1
                y = y + random_nb_between(-1, 1); // -1 ou 1
            } while (niv[y][x]!=1); // Collision
            gotoligcol(y, x); // Déplace le curseur à la nouvelle position et affiche la balle ('X').
            printf("X");
        }*/
        t = temps_restant(temps_init); // Met à jour le temps restant en appelant la fonction temps_restant avec le temps initial
        if ((y == i) && (x == j)) { // Vérifie si la position actuelle de Snoopy (i, j) est égale à la position de la balle (y, x)
            clear_interface(); // Efface l'interface du jeu
            interface_game_over(); // Affiche l'écran de fin de jeu
            sleep(3); // Attend pendant 3 secondes pour afficher l'écran de fin de jeu
            t = 0; // Réinitialise le temps restant à zéro pour sortir de la boucle de jeu
        }
    }
    return 0;
}
