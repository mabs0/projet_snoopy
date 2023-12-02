#include "functions.h" // Inclusion du fichier "functions.h"

int menu() {
    interface_titre(); // Affiche le titre du jeu

    int f, g; // Déclaration de variables 

    do {
        interface_menu(); // Affiche le menu principal du jeu

        fflush(stdin); // Nettoie le tampon d'entrée avant d'utiliser scanf
        scanf("%d", &f); // Attend une entrée utilisateur 

        switch (f) {
            case 1: // Affiche les règles du jeu
                interface_regles_du_jeu();
                break; // sort de la case

            case 2: // Lance un nouveau jeu à partir du niveau 1
                clear_interface(); // Efface l'interface
                niveau(structure_niv_1, 9, 8, 5, 9); // Lance le niveau 1
                break; // sort de la case

            case 3: // Charge une partie sauvegardée
                interface_sauvegarde();
                break; // sort de la case

            case 4: // Demande un mot de passe pour accéder à un niveau spécifique
                switch (MDP()) { // Appelle la fonction MDP() pour obtenir un mot de passe
                    case 1:
                        // Lancer le niveau 1
                        break; // sort de la case
                    case 2:
                        // Lancer le niveau 2
                        break; // sort de la case
                    case 3:
                        // Lancer le niveau 3
                        break; // sort de la case
                    case 0:
                        printf("mauvais mot de passe ! "); // Affiche
                        break; // sort de la case
                    default:
                        printf("erreur"); // Affiche
                        break; // sort de la case
                }
                break; // sort de la case

            case 5: // Affiche les scores
                break; // sort de la case

            case 6: // Quitte le jeu
                printf("A bientot ! "); // Affiche
                break; // sort de la case
 
            default: // Si l'option n'est pas valide
                printf("veuillez choisir une des options donnée :");
        }
    } while (f != 6); // Répète le menu jusqu'à ce que l'utilisateur choisisse de quitter (option 6)

    return 0; // Retourne 0 à la fin de la fonction
}
