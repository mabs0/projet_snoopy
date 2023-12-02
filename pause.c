#include "functions.h"

int pause() {
    if (_kbhit()) {
        char key = _getch();
        if (key == 'p' || key == 'P') {
            // Mettre en pause
            gotoligcol(13, 4);
            printf("Jeu en pause");
            while (_getch() != 'p' && _getch() != 'P') {} // Attendre jusqu'à ce que 'p' soit enfoncé à nouveau
            printf("\033[2K");  // Efface la ligne actuelle
        }
    }
}
