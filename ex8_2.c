#include <stdlib.h> // pour les fonctions exit, malloc, free, ...
#include <math.h> // pour les fonctions mathématiques comme sqrt, pow, ...
#include <stdio.h> // pour les fonctions d'entrée/sortie comme printf, scanf, stdin 
#include <unistd.h> // pour sleep (en millisecondes)
#include <string.h> // pour les chaines de char ( strlen, strcpy, strcat, strcmp, ...)
#include <time.h> // pour les fonctions comme time, rand, srand, ...

// Les fonctions
// minimum 

void stat(int *tab, int taille, int *p_min){
    if (taille <= 0){
        *p_min = 0;
        return;
    }
    *p_min = tab[0];
    for (int i = 0; i<taille; i++){
        if(tab[i]< *p_min){
            *p_min = tab[i];
        }
    }
}

int main(){
    const int TAILLE = 5;
    int test[] = {12,8,1,6,2};
    int min;

    stat(test, TAILLE, &min); //adresse de min

    putchar('[');
    for (int i = 0; i<TAILLE; i++){
        printf("%d ", test[i]);
    }
    putchar(']');

    printf("   min : %d.\n", min);
    return 0;
}