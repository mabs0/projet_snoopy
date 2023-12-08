#include "functions.h"

int niv_test[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int niv_1[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,5,1,1,1,1,1,0,1,8,1,0,1,1,1,1,1,1,5,0},{0,1,9,2,1,1,1,0,1,1,1,0,1,1,1,1,2,9,1,0},{0,1,2,1,1,1,1,0,9,6,9,0,1,1,1,1,1,2,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,0},{0,1,9,2,1,1,1,1,1,1,1,1,1,1,1,1,2,9,1,0},{0,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int niv_2[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,2,2,2,1,1,1,1,1,1,1,9,1,1,1,5,0,0,0,0},{0,2,5,9,1,1,1,1,1,1,1,6,1,1,1,1,0,1,0,0},{0,2,2,2,1,1,1,1,1,1,1,6,1,1,1,1,0,1,0,0},{0,1,1,1,1,1,1,1,1,1,1,9,1,1,1,1,1,6,1,0},{0,1,1,1,1,1,1,1,1,1,1,9,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,9,9,9,9,9,9,9,9,0},{0,0,0,0,0,0,1,1,1,1,1,6,1,1,1,1,1,1,8,0},{0,5,1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,5,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int niv_3[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0},{0,5,1,1,1,0,1,1,1,1,1,5,1,1,1,1,0,2,1,0},{0,1,1,1,1,9,1,1,1,1,1,1,1,1,1,1,0,1,1,0},{0,1,1,1,1,9,1,1,1,1,1,1,1,1,1,1,0,1,2,0},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,5,0,1,1,0},{0,5,1,1,8,0,0,0,0,0,9,9,9,0,0,0,0,2,1,0},{0,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int template_niv_1[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,5,1,1,1,1,1,0,1,8,1,0,1,1,1,1,1,1,5,0},{0,1,9,2,1,1,1,0,1,1,1,0,1,1,1,1,2,9,1,0},{0,1,2,1,1,1,1,0,9,6,9,0,1,1,1,1,1,2,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,0},{0,1,9,2,1,1,1,1,1,1,1,1,1,1,1,1,2,9,1,0},{0,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int template_niv_2[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,2,2,2,1,1,1,1,1,1,1,9,1,1,1,5,0,0,0,0},{0,2,5,9,1,1,1,1,1,1,1,6,1,1,1,1,0,1,0,0},{0,2,2,2,1,1,1,1,1,1,1,6,1,1,1,1,0,1,0,0},{0,1,1,1,1,1,1,1,1,1,1,9,1,1,1,1,1,6,1,0},{0,1,1,1,1,1,1,1,1,1,1,9,1,1,1,1,1,1,1,0},{0,1,1,1,1,1,1,1,1,1,1,9,9,9,9,9,9,9,9,0},{0,0,0,0,0,0,1,1,1,1,1,6,1,1,1,1,1,1,8,0},{0,5,1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,5,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int template_niv_3[COLONNES][LIGNES] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0},{0,5,1,1,1,0,1,1,1,1,1,5,1,1,1,1,0,2,1,0},{0,1,1,1,1,9,1,1,1,1,1,1,1,1,1,1,0,1,1,0},{0,1,1,1,1,9,1,1,1,1,1,1,1,1,1,1,0,1,2,0},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,5,0,1,1,0},{0,5,1,1,8,0,0,0,0,0,9,9,9,0,0,0,0,2,1,0},{0,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

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

int niveau (int niv[COLONNES][LIGNES], int x_depart_snoopy, int y_depart_snoopy, int x_depart_ball, int y_depart_ball,  int level_number, int t, int oiseaux) //affiche A a la ligne i et colone j
{
    clock_t temps_init = clock()/1000;
    int var = 1;
    int a = 0;
    int pv = 3;
    int l, c;
    int i = y_depart_snoopy;
    int j = x_depart_snoopy;
    int x = x_depart_ball;
    int x_test = 1;
    int y = y_depart_ball;
    int y_test = 1;

    clear_interface(j,i);
    timer(temps_init);
    interface_touches();
    affichage_niveau(niv,i,j);
    gotoligcol(i, j);
    printf("S");
    gotoligcol(y, x);
    printf("X");
    while (var!=0) {
        clock_t init_ball = clock();
        a = dghb();
        temps_init = pause(a, temps_init);
        if (a==115) { //sauvegarde
            sauvegarder(niv, t, x, y, i ,j,oiseaux,level_number);
        }

        if ((a == 77) && (niv[i][j + 1] != 0)) { // Si la direction de déplacement est vers la droite et qu'il n'y a pas de collision avec un mur
            if (niv[i][j+1] == 2) { //interaction bloc piégé
                gotoligcol(i, j + 1);
                printf(" ");
                niv[i][j + 1] = 1;
                pv = 0;
            }
            if ((niv[i][j + 1] == 6) && (niv[i][j + 2] == 1)) {//interaction bloc poussable
                // Si Snoopy rencontre un bloc poussable ('6') à côté de lui et qu'il y a un espace libre après le bloc :

                gotoligcol(i, j);
                printf(" ");
                j++;
                gotoligcol(i, j);
                printf("S");

                // Met à jour la position du bloc poussable et de Snoopy.
                niv[i][j] = 1;
                gotoligcol(i, j + 1);
                printf("0");
                niv[i][j + 1] = 0;
            }
            if (niv[i][j+1] == 5) {
                gotoligcol(i, j);
                printf(" ");
                j++;
                niv[i][j] = 1;
                oiseaux += 1;
                gotoligcol(i, j);
                printf("S");
                
            }
            if (niv[i][j+1] == 8) {
                gotoligcol(i, j);
                printf(" ");
                j++;
                niv[i][j] = 1;
                pv += 1;
                gotoligcol(i, j);
                printf("S");
                
            }
            if (niv[i][j + 1] == 1) { // Déplacement de base, si la prochaine position est libre ('1'), déplace Snoopy vers la droite.
                gotoligcol(i, j);
                printf(" ");
                j++;
                gotoligcol(i, j);
                printf("S");
                
            }
        }
        if ((a == 75)&&(niv[i][j-1] != 0)) { //gauche
            if (niv[i][j-1] == 2) { //interaction bloc piégé
                gotoligcol(i, j - 1);
                printf(" ");
                niv[i][j - 1] = 1;
                pv = 0;
            }
            if ((niv[i][j-1] == 6)&&(niv[i][j-2] == 1)) { //interaction avec bloc poussable
                gotoligcol(i, j);
                printf(" ");
                j--;
                gotoligcol(i, j);
                printf("S");
                niv[i][j] = 1;
                gotoligcol(i, j-1);
                printf("0");
                niv[i][j-1] = 0;
            }
            if (niv[i][j-1] == 5) {
                gotoligcol(i, j);
                printf(" ");
                j--;
                niv[i][j] = 1;
                oiseaux += 1;
                gotoligcol(i, j);
                printf("S");
                
            }
            if (niv[i][j-1] == 8) {
                gotoligcol(i, j);
                printf(" ");
                j--;
                niv[i][j] = 1;
                pv += 1;
                gotoligcol(i, j);
                printf("S");
                
            }
            if (niv[i][j-1] == 1) { //déplacement de base
                gotoligcol(i, j);
                printf(" ");
                j--;
                gotoligcol(i, j);
                printf("S");
                
            }
        }
        if ((a == 72)&&(niv[i-1][j] != 0)) { // haut
            if (niv[i-1][j] == 2) { //interaction bloc piégé
                gotoligcol(i - 1, j);
                printf(" ");
                niv[i - 1][j] = 1;
                pv = 0;
            }
            if ((niv[i-1][j] == 6)&&(niv[i-2][j] == 1)) { //interaction avec bloc poussable
                gotoligcol(i, j);
                printf(" ");
                i--;
                gotoligcol(i, j);
                printf("S");
                niv[i][j] = 1;
                gotoligcol(i-1, j);
                printf("0");
                niv[i-1][j] = 0;
            }
            if (niv[i-1][j] == 5) {
                gotoligcol(i, j);
                printf(" ");
                i--;
                niv[i][j] = 1;
                oiseaux += 1;
                gotoligcol(i, j);
                printf("S");
                
            }
            if (niv[i-1][j] == 8) {
                gotoligcol(i, j);
                printf(" ");
                i--;
                niv[i][j] = 1;
                pv += 1;
                gotoligcol(i, j);
                printf("S");
                
            }
            if (niv[i-1][j] == 1) { //déplacement de base
                gotoligcol(i, j);
                printf(" ");
                i--;
                gotoligcol(i, j);
                printf("S");
                
            }
        }
        if ((a == 80)&&(niv[i+1][j] != 0)) {   //bas
            if (niv[i+1][j] == 2) { //interaction bloc piégé
                gotoligcol(i + 1, j);
                printf(" ");
                niv[i + 1][j] = 1;
                pv = 0;
            }
            if ((niv[i+1][j] == 6)&&(niv[i+2][j] == 1)) { //interaction avec bloc poussable
                gotoligcol(i, j);
                printf(" ");
                i++;
                gotoligcol(i, j);
                printf("S");
                niv[i][j] = 1;
                gotoligcol(i+1, j);
                printf("0");
                niv[i+1][j] = 0;
            }
            if (niv[i+1][j] == 5) {
                gotoligcol(i, j);
                printf(" ");
                i++;
                niv[i][j] = 1;
                oiseaux += 1;
                gotoligcol(i, j);
                printf("S");
                
            }
            if (niv[i+1][j] == 8) {
                gotoligcol(i, j);
                printf(" ");
                i++;
                niv[i][j] = 1;
                pv += 1;
                gotoligcol(i, j);
                printf("S");
                
            }
            if (niv[i+1][j] == 1) { //déplacement de base
                gotoligcol(i, j);
                printf(" ");
                i++;
                gotoligcol(i, j);
                printf("S");
                
            }
        }
        if (a == 32) {
            if (niv[i][j+1] == 3) { //interaction avec bloc cassable fracturé à droite
                gotoligcol(i, j+1);
                printf(" ");
                niv[i][j+1] = 1;
            }
            if (niv[i][j+1] == 9) { //interaction avec bloc cassable intact à droite
                gotoligcol(i, j+1);
                printf("3");
                niv[i][j+1] = 3;
            }
            if (niv[i][j-1] == 3) { //interaction avec bloc cassable fracturé à gauche
                gotoligcol(i, j-1);
                printf(" ");
                niv[i][j-1] = 1;
            }
            if (niv[i][j-1] == 9) { //interaction avec bloc cassable intact à gauche
                gotoligcol(i, j-1);
                printf("3");
                niv[i][j-1] = 3;
            }
            if (niv[i-1][j] == 3) { //interaction avec bloc cassable fracturé en haut
                gotoligcol(i-1, j);
                printf(" ");
                niv[i-1][j] = 1;
            }
            if (niv[i-1][j] == 9) { //interaction avec bloc cassable intact en haut
                gotoligcol(i-1, j);
                printf("3");
                niv[i-1][j] = 3;
            }
            if (niv[i+1][j] == 3) { //interaction avec bloc cassable fracturé en bas
                gotoligcol(i+1, j);
                printf(" ");
                niv[i+1][j] = 1;
            }
            if (niv[i+1][j] == 9) { //interaction avec bloc cassable intact en bas
                gotoligcol(i+1, j);
                printf("3");
                niv[i+1][j] = 3;
            }
        }

        timer(temps_init);
        life(pv);

        if (clock_ball(init_ball)){
            if (niv[y+y_test][x+x_test]!=1) {
                do {
                    x_test = random_nb_between(-1, 1); // -1 ou 1
                    y_test = random_nb_between(-1, 1); // -1 ou 1
                } while (niv[y + y_test][x + x_test] != 1); // Collision
            }
            gotoligcol(y, x); // Déplace le curseur à la position actuelle et affiche un espace pour effacer la balle précédente.
            printf(" ");
            x = x+x_test;
            y = y+y_test;
            gotoligcol(y, x); // Déplace le curseur à la nouvelle position et affiche la balle ('X').
            printf("X");
        }
        t = temps_restant(temps_init);

        if ((y==i)&&(x==j)) { // interaction avec la balle
            pv-=1;
            gotoligcol(y, x); // Déplace le curseur à la position actuelle et affiche un espace pour effacer la balle précédente et y laisser Snoopy
            printf("S");
            do {x = x + random_nb_between(-1, 1); // -1 ou 1
                y = y + random_nb_between(-1, 1); // -1 ou 1
            } while (niv[y][x]!=1); // Collision
            gotoligcol(y, x); // Déplace le curseur à la nouvelle position et affiche la balle ('X').
            printf("X");
        }

        if (t==0) {// reboot du niveau
            pv-=1;
            for (c=0; c<COLONNES; c++) { //remise à zéro du niveau
                for (l=0; l<LIGNES; l++) {
                    if (level_number==1) {
                        niv_1[c][l]=template_niv_1[c][l];
                    }
                    if (level_number==2) {
                        niv_2[c][l]=template_niv_2[c][l];
                    }
                    if (level_number==3) {
                        niv_3[c][l]=template_niv_3[c][l];
                    }
                }
            }
            t = 120;
            oiseaux = 0;
            i = y_depart_snoopy;
            j = x_depart_snoopy;
            x = x_depart_ball;
            y = y_depart_ball;
            clear_interface(j,i);
            timer(temps_init);
            affichage_niveau(niv,i,j);
            gotoligcol(i, j);
            printf("S");
            gotoligcol(y, x);
            printf("X");
        }
        if (oiseaux==4) { // conditions de victoire
            if (level_number==1) {
                niveau(niv_2,17,2,17,8,2,120,0);
                var=0;  // Affecte 0 à la variable var ce qui met fin au niveau actuel
            }
            if (level_number==2) {
                niveau(niv_3,1,1,10,4,3,0,120);
                var=0; // Affecte 0 à la variable var ce qui met fin au niveau actuel
            }
            if (level_number==3) {
                interface_victoire();
                menu(); //Retour au menu
            }
        }
        var=game_over(pv);
        if (var==0) {
            for (c=0; c<COLONNES; c++) { //remise à zéro du niveau
                for (l=0; l<LIGNES; l++) {
                    if (level_number==1) {
                        niv_1[c][l]=template_niv_1[c][l];
                    }
                    if (level_number==2) {
                        niv_2[c][l]=template_niv_2[c][l];
                    }
                    if (level_number==3) {
                        niv_2[c][l]=template_niv_3[c][l];
                    }
                }
            }
        }
    }
    return 0;
}
