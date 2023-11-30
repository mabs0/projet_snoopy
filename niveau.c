#include "functions.h"
int structure_niv_test[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int structure_niv_1[COLONNES][LIGNES]= {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,5,1,1,1,1,1,0,1,8,1,0,1,1,1,1,1,1,5,0},{0,1,9,2,1,1,1,0,1,1,1,0,1,1,1,1,2,9,1,0},{0,1,2,1,1,1,1,0,9,6,9,0,1,1,1,1,1,2,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,7,1,1,1,1,1,0},{0,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,0},{0,1,9,2,1,1,1,1,1,1,1,1,1,1,1,1,2,9,1,0},{0,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int structure_niv_2[COLONNES][LIGNES]= {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0},{0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0},{0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0},{0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int structure_niv_3[COLONNES][LIGNES]= {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0},{0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,0},{0,1,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

int affichage_niveau(int niv[COLONNES][LIGNES], int x, int y) {
    gotoligcol(0,0);
    int i, j;
    for (i = 0; i < 10; i++){

        for (j = 0; j < 20; j++){

            if (niv[i][j] == 1){
                printf(" ");
            }
            else{
                printf("%d",niv[i][j]);
            }
        }
        printf("\n");
    }
    gotoligcol(x,y);
    return 0;
}

int niveau (int niv[COLONNES][LIGNES], int x_depart_snoopy, int y_depart_snoopy, int x_depart_ball, int y_depart_ball) //affiche A a la ligne i et colone j
{
    clock_t temps_init = clock()/1000;
    int a = 0;
    int t = 120;
    int i = y_depart_snoopy;
    int j = x_depart_snoopy;
    int x = x_depart_ball;
    int y = y_depart_ball;

    clear_interface(j,i);
    timer(temps_init);
    affichage_niveau(niv,i,j);
    gotoligcol(i, j);
    printf("S");
    gotoligcol(y, x);
    printf("X");
    while (t>0) {
        clock_t init_ball = clock();
        a = dghb();

        if ((a == 77)&&(niv[i][j+1] != 0)) { //droite
            if (niv[i][j+1] == 1) { //déplacement de base
                gotoligcol(i, j);
                printf(" ");
                j++;
                gotoligcol(i, j);
                printf("S");
            }
            if ((niv[i][j+1] == 6)&&(niv[i][j+2] == 1)) { //interaction avec bloc poussable
                gotoligcol(i, j);
                printf(" ");
                j++;
                gotoligcol(i, j);
                printf("S");
                niv[i][j+1] = 1;
                gotoligcol(i, j+1);
                printf("6");
                niv[i][j+1] = 6;
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
        t = temps_restant(temps_init);
        if ((y==i)&&(x==j)) {
            clear_interface();
            interface_game_over();
            sleep(3);
            t=0;
        }
    }
    return 0;
}
