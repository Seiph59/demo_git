#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ( int argc, char** argv )
{
    int continuerPartie = 1;
    while (continuerPartie)
    {
        int nombreMystere = 0, nombreEntre = 0;
        int MAX = 100, MIN = 1;
        int compteur = 0;
        int choixMenu =1;
        
       do // Menu avec retour au menu si choix different de 1,2 ou 3
       {
    
            printf(" ________________________________________\n");
            printf("| Bienvenue sur le jeu du Plus ou Moins !|\n");
            printf("|________________________________________|\n\n");
            printf("Choisissez votre niveau de difficulte :\n ");
            printf("----------------------------------------\n");
            printf(" 1. Nombre mystere compris entre 1 et 100\n");
            printf(" 2. Nombre mystere compris entre 1 et 1000\n");
            printf(" 3. Nombre mystere compris entre 1 et 10000\n");
            printf(" Selectionnez votre choix entre 1,2 et 3 \n");
            scanf("%d", &choixMenu);
        
            switch(choixMenu) //choix menu avec initialisation de la variable MAX selon niveau
            {
                case 1: 
                    printf("Vous avez choisi le niveau 1 (nombre entre 1 et 100)\n");
                    break;
                case 2:
                    MAX = 1000; 
                    printf("Vous avez choisi le niveau 2 (nombre entre 1 et 1000)\n");
                    break; 
                case 3:
                    MAX = 10000;
                    printf("Vous avez choisi le niveau 3 (nombre entre 1 et 10000)\n");
                    break;
                default:
                    printf("Votre choix est incorrect, merci de faire un choix entre 1,2 et 3\n");
                    break;
            }
       }while (choixMenu == 0 || choixMenu > 3);
       
       
       
        srand(time(NULL));                                      //génère nombre aléatoire
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        
        
        do  // Debut du jeu 
        {
            compteur++;
            printf("\nQuel est le nombre ? ");
            scanf("%d", &nombreEntre);
            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
                printf ("Bravo, vous avez trouve le nombre mystere en %d coups\n\n", compteur);
                

        } while (nombreEntre != nombreMystere);
        printf (" Voulez-vous faire une autre partie ? (1 = Oui/ 0 = Non)\n\n\n");
        scanf("%d", &continuerPartie);
    }

    return 0;

    
     
}
