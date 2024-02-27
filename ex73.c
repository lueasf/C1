#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep
#include <string.h> // pour les chaines de char

// Les chaines de char SUITE

// exercice palindrome

int main(){
    const int TAILLE = 100;
    char tab[TAILLE + 1];

    int taille = 0;
    int pal = 1; // flag pour savoir si c'est un pal

    printf("donnez un mot de maximum 100 charactères.\n");
    scanf("%s", tab);

    taille = strlen(tab);

    for (int i = 0; i<taille; i++){
        if (tab[i] != tab[taille - i - 1]){
            pal = 0;
            break;
        }
    }
    if (pal)
        printf("c'est un pal.\n");
    else
        printf("pas un pal.\n");
    return 0;
}