#include "functions.h"

void gotoligcol( int lig, int col )
{
// def ligne colone
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

int dghb(){
    if (_kbhit()) {
        int depl = getch();
        gotoligcol(1, 1);
        return depl;
    }
    else {
        return 0;
    }
}


