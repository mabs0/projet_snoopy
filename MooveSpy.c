#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoligcol( int lig, int col )
{
// def ligne colone
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

int dghb(){
    char depl;
    depl = getch();
    gotoligcol(17,0);
    printf("Veuillez jouer avec les fleches");
    gotoligcol(0, 0);
    return depl;
}

int maina () //affiche A a la ligne i et colone j
{
    char a = 0;
    int i = 0;
    int j = 0;

    while (a != 6) {
        a = dghb();

        gotoligcol(i, j);
        printf(" ", a);

        if (a == 77) { //droite
            j++;
        }
        if (a == 75) { //gauche
            j--;
        }
        if (a == 72) { //haut
            i--;
        }
        if (a == 80) {   //bas
            i++;
        }

        gotoligcol(i, j);
        printf("A");
    }
    return 0;
}

int main() {
    while(1) maina();
}
