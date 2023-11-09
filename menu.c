#include <stdio.h>
#include "functions.h"
#include "interface.h"

void menu() {
    int f;
    do {
        interface_menu();
        fflush(stdin); // assure le scanf
        scanf("%d", &f);

        switch (f) {
            case 1:

                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6 :
                printf("A bientot ! ");
                break;

            default:
                printf("veuillez choisir une des options donnée :");
        }
    }while (f != 6);
}
