#include<stdio.h>
#include "functions.h"

    for (i = 0; i < 10; i++){
        printf("\n");
        for (j = 0; j < 20; j++){

            if (niv[i][j] == 1){
                printf(" ");

            }
            else{printf("%d",niv[i][j]);}
        }
    }
    sleep(1000);
    return 0;
}
