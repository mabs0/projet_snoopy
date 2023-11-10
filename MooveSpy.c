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

        if (a == 'd') { //droite
            j++;
        }
        if (a == 'q') { //gauche
            j--;
        }
        if (a == 'z') { //haut
            i--;
        }
        if (a == 's') {   //bas
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
