#include "functions.h"

int MDP () {
    char choixmdp[8];
    char mdp1[8] = "niveau1";
    char mdp2[8] = "niveau2";
    char mdp3[8] = "niveau3";

    printf("rentrez le mot mot de passe : ");
    scanf("%s",choixmdp);

    if ( strcmp(mdp1,choixmdp ) == 0){
        printf("vous accedez au niveau 1");
        return 1;
    }
    else if ( strcmp(mdp2,choixmdp )==0 ){
        printf("vous accedez au niveau 2");
        return 2;
    }
    else if ( strcmp(mdp3,choixmdp )==0 ){
        printf("vous accedez au niveau 3");
        return 3;
    }
    else {
        return 0;
    }

}
