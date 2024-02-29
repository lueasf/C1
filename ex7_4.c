#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep
#include <string.h> // pour les chaines de char

// Les chaines de char SUITE

// exercice psous chaine

int main(){
    const int TAILLE = 100;
    char chaine[TAILLE];
    char sousch[TAILLE];

    int taille_chaine = 0;
    int taille_ssch = 0;

    int inclus = 0; // pas le cas pour l'instant

    printf("entrez une chaine de char.\n");
    if (fgets(chaine, TAILLE, stdin) == NULL){
        return -1;
    }

    printf("entrez une AUTRE chaine de char.\n");
    if (fgets(sousch, TAILLE, stdin) == NULL){
        return -1;
    }

    taille_chaine = strlen(chaine) -1;
    chaine[taille_chaine] = '\0';

    taille_ssch = strlen(sousch) -1;
    sousch[taille_ssch] = '\0';

    if (taille_ssch > taille_chaine){
        inclus = 0;
    }
    else{
        for (int i = 0; i <= (taille_chaine -taille_ssch) ; i++){
            if (chaine[i] == sousch[0]){
                inclus = 1;
                for (int j = 1; j < taille_ssch; j++){
                    if (chaine[i+j] != sousch[j]){
                        inclus = 0;
                        break;
                    }
                }
                if (inclus) 
                    break;
            }
        }
    }
    if (inclus)
        printf("la sous chaine \"%s\"  est incluse dans la chaine \"%s\".\n", sousch, chaine);
    else
        printf("la chaine n'est pas incluse.\n");
    return 0;
}