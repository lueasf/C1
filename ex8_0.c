#include <stdlib.h> // pour les fonctions exit, malloc, free, ...
#include <math.h> // pour les fonctions mathématiques comme sqrt, pow, ...
#include <stdio.h> // pour les fonctions d'entrée/sortie comme printf, scanf, stdin 
#include <unistd.h> // pour sleep (en millisecondes)
#include <string.h> // pour les chaines de char ( strlen, strcpy, strcat, strcmp, ...)
#include <time.h> // pour les fonctions comme time, rand, srand, ...

// Les fonctions


//signature
int tp1(int, int);
int maxx(int, int);

int main(){
    int nb1 = 12, nb2 = 9913;
    int min = tp1(nb1, nb2);
    int max = maxx(nb1, nb2);
    printf("Le minimum de %d et %d est %d.\n", nb1, nb2, min);
    printf("Le maximum de %d et %d est %d.\n", nb1, nb2, max);
    return 0;
}

//déclaration de fonction
int tp1(int nb1, int nb2){
    if (nb1 > nb2) return nb2;
    else return nb1;
}

int maxx(int nb1, int nb2){
    if (nb1 < nb2) return nb2;
    else return nb1;
}