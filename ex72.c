#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep
#include <string.h> // pour les chaines de char

// Les chaines de char SUITE

// AFFICHER le nb de char et de mots

int main(){
    const int TAILLE = 100;
    char tab[TAILLE + 1];
    int mots = 1;
    int charac = 0;
    int index = 0;

    printf("rentrez une phrase de maximum 100 char. \n");
    if (fgets(tab, TAILLE, stdin) == NULL)
        return -1;

    while (tab[index] != '\0'){
        if(tab[index]==' '){
            mots++;
        }
        charac++;
        index++;
    }
    charac--;
    printf("le nombre de charactères est %d.\n", charac);
    printf("le nombre de mots est %d.\n", mots);
    return 0;
}