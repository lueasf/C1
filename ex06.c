#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// jeu du mastermind
// 2 joueurs, une combinaisond e 4 couleurs, un joueur essaye de
// la deviner et l'autre joueur indique quelles couleurs sont ou non
// bien placé.


int main()
{
    printf("Jeu du mastermind\n");
    const int MAX_TENT = 3;
    const int NB_COUL = 5;
    const char COULEURS[] = {'R','V','B','J','O'}; // TABLEAU CONSTANT
    const int TAILLE = 4;

    char code[TAILLE];
    char saisie[TAILLE];

    // GENERERATION ALÉATOIRE
    srand(time(NULL)); // IMPORTANT
    for (int i = 0; i<4; i ++)
    {
        int index = rand()%  NB_COUL -1;
        code[i] = COULEURS[index];
    }

    for (int nb_tent = 1; nb_tent <= MAX_TENT; nb_tent++)
    {
        printf("Donnez un code de 4 couleurs parmi R,V,B,J et O.\n");
        fflush(stdin);
        scanf("%c%c%c%c", saisie, (saisie+1), (saisie+2), (saisie+3));

        int nb_couleurs = 0; // pas de couleurs bien placé au début
        int nb_présente = 0;

        for (int i=0; i<TAILLE; i++)
        {
            short couleur_presente = 0 ;
            for (int j = 0; j<TAILLE; j++)// parcours du tableau
            {
                if (code[i] == saisie[j]) // couleur présente
                {
                    couleur_presente = 1;
                    if ( i == j ){
                        nb_couleurs++;
                        break;
                    }
                }
            }
            nb_présente += couleur_presente;
        }
        if (nb_couleurs == TAILLE){
            printf("Bravo, code trouvé en %d tentatives.\n", nb_tent);
            break;
        }
        else if(nb_tent >= MAX_TENT){
            printf("Dommage, trop de tentatives.\n");
            printf("le bon code est %c%c%c%c.\n", code[0], code[1], code[2], code[3]);
        }
        else 
        {
            printf("\t Tentative %d/%d.\n", nb_tent, MAX_TENT);
            printf("Couleur(s) bien placée(s) : %d\n\n", nb_couleurs);
            printf("Couleur mal placée(s) : %d\n", nb_présente - nb_couleurs);
        }
        printf("\t Tentative %d/%d\n", nb_tent, MAX_TENT);
    }
    return 0;
}