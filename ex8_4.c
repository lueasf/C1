#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// générateur de mot de passe

void generateurMDP(char* mdp, int nb_char, int min, int max)
{
    for(int i=0; i<nb_char; i++)
        mdp[i] = (rand() % (max - min + 1)) + min;
}


int main(){
    const MIN = 33;
    const MAX = 126;
    const int TAILLE_MAX = 100;
    char mdp[TAILLE_MAX + 1];
    int taille;

    srand(time(NULL));

    printf("Quelle taille pour votre mot de passe ? \n");
    scanf("%d", &taille);

    if (taille > TAILLE_MAX){
        taille = TAILLE_MAX;
    }

    generateurMDP(mdp, taille, MIN, MAX);
    mdp[taille] = '\0';
    printf("\t %s\n", mdp);

    return 0;
}



