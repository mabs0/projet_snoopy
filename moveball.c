#include <stdio.h>
#include <windows.h>
#include <unistd.h>

void gotoligcol( int lig, int col )
{
// ressources
    COORD ballcoord;
    ballcoord.X = col;
    ballcoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), ballcoord );
}

int random_nb_between(int a,int b) {
    int choix = rand()%2;
    if (choix == 0) {
        return a; }
    if (choix == 1) {
        return b; }
}

int ballmoove () {
    int a = 0;
    int x = 0;
    int y = 0;

    while (a != 6) {
        gotoligcol(x, y);
        putchar(' ');
        // Génère un déplacement aléatoire d'une case en diagonale.
        x = x + random_nb_between(-1,1); // -1, 0 ou 1
        y = y + random_nb_between(-1,1); // -1, 0 ou 1


        gotoligcol(x, y);
        putchar('X');
        sleep(1);

    }
}


int main () {

    ballmoove();

    return 0;
}
