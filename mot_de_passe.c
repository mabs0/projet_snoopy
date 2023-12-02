#include "functions.h" // Inclusion du fichier "functions.h"

int MDP() {
    char choixmdp[8]; // Déclaration d'une chaîne de caractères
    char mdp1[8] = "niveau1"; // Mot de passe pour le niveau 1
    char mdp2[8] = "niveau2"; // Mot de passe pour le niveau 2
    char mdp3[8] = "niveau3"; // Mot de passe pour le niveau 3

    printf("rentrez le mot mot de passe : "); // Affiche
    scanf("%s", choixmdp); // Attend la saisit du joueur 

    // Compare le mot de passe saisi avec les mots de passe prédéfinis pour les différents niveaux
    if (strcmp(mdp1, choixmdp) == 0) { // Si le mot de passe correspond au niveau 1
        printf("vous accedez au niveau 1"); // Affiche
        return 1; // Renvoie 1 pour indiquer l'accès au niveau 1
    } else if (strcmp(mdp2, choixmdp) == 0) { // Si le mot de passe correspond au niveau 2
        printf("vous accedez au niveau 2"); // Affiche
        return 2; // Renvoie 2 pour indiquer l'accès au niveau 2
    } else if (strcmp(mdp3, choixmdp) == 0) { // Si le mot de passe correspond au niveau 3
        printf("vous accedez au niveau 3"); // Affiche
        return 3; // Renvoie 3 pour indiquer l'accès au niveau 3
    } else { // Sinon 
        return 0; // Renvoie 0 si le mot de passe saisi ne correspond à aucun niveau
    }
}
