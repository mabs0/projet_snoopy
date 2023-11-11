#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie pour permettre l'utilisation des fonctions d'entrée/sortie standard comme printf et putchar.
#include <windows.h> // Inclusion de la bibliothèque Windows pour utiliser des fonctions spécifiques à Windows, telles que SetConsoleCursorPosition et GetStdHandle.
#include <unistd.h> // Inclusion de la bibliothèque UNIX pour utiliser la fonction sleep, qui suspend l'exécution du programme pendant le nombre de secondes spécifié.

void gotoligcol(int lig, int col) // Déclaration de la fonction gotoligcol qui déplace le curseur de la console à une position spécifiée par les arguments lig (ligne) et col (colonne).
{
    // ressources
    COORD ballcoord; // Déclaration d'une structure COORD pour stocker les coordonnées du curseur de la console.
    ballcoord.X = col; // Attribution des valeurs col et lig aux propriétés X et Y de la structure COORD.
    ballcoord.Y = lig;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ballcoord); // Déplacement du curseur de la console à la position spécifiée par ballcoord.
}

int random_nb_between(int a, int b) // Déclaration de la fonction random_nb_between qui génère un nombre aléatoire entre a et b inclus.
{
    int choix = rand() % 2; // Génération d'un nombre aléatoire entre 0 et 1 pour faire un choix entre a et b.
    if (choix == 0) // Retourne a si le choix est 0.
    {
        return a;
    }
    if (choix == 1) // Retourne b si le choix est 1.
    {
        return b;
    }
}

int ballmoove() // Déclaration de la fonction ballmoove qui simule le mouvement d'une balle dans la console.
{
    int a = 0; // Initialisation des variables pour contrôler le déplacement de la balle.
    int x = 20;
    int y = 20;

    while (a != 6) // Début d'une boucle while qui continue tant que a n'est pas égal à 6.
    {
        gotoligcol(x, y); // Déplace le curseur à la position actuelle et affiche un espace pour effacer la balle précédente.
        putchar(' ');

        // Génère un déplacement aléatoire d'une case en x et y.
        x = x + random_nb_between(-1, 1); // -1, 0 ou 1
        y = y + random_nb_between(-1, 1); // -1, 0 ou 1

        gotoligcol(x, y); // Déplace le curseur à la nouvelle position et affiche la balle ('X').
        putchar('X');
        sleep(1); // Pause d'une seconde pour ralentir le mouvement.
        a++; // Incrémentation de a pour contrôler le nombre d'itérations de la boucle.
    }
}

int main() // Déclaration de la fonction principale main.
{
    ballmoove(); // Appel de la fonction ballmoove.
    return 0; // Fin du programme avec un code de retour 0.
}
