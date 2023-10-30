void gotoligcol( int lig, int col )
{
// def ligne colone 
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

int dghb(){
    int a;
    gotoligcol(10, 1);
    printf("1: droite");
    gotoligcol(11, 1);
    printf("2: gauche");
    gotoligcol(12, 1);
    printf("3: haut");
    gotoligcol(13, 1);
    printf("4: bas");
    gotoligcol(14, 1);
    scanf("%d", &a);
    printf("%d", a);
    gotoligcol(0, 0);
    return a;
}

int maina () //affiche A a la ligne i et colone j
{
    int a = 0;
    int i = 0;
    int j = 0;

    while (a != 6) {
        a = dghb();

        gotoligcol(i, j);
        printf(" ");

        if (a == 1) { //droite
            j++;
        }
        if (a == 2) { //gauche
            j--;
        }
        if (a == 3) { //haut
            i--;
        }
        if (a == 4) {   //bas
            i++;
        }

        gotoligcol(i, j);
        printf("A");

    }
    return 0;
}

/*
int affich(){ // verif, affiche char a l'indice donnée
    int i;
    int j;
    gotoligcol(0, 0);
    printf("i : ");
    scanf("%d", &i);
    printf("j : ");
    scanf("%d", &j);
    printf("char : ");
    char c;
    fflush(stdin);
    scanf("%c", &c);
    gotoligcol(i, j);
    printf("%c", c);

}
*/

int main() {
    while (1) maina();
}




