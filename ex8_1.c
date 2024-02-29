#include <stdlib.h> // pour les fonctions exit, malloc, free, ...
#include <math.h> // pour les fonctions mathématiques comme sqrt, pow, ...
#include <stdio.h> // pour les fonctions d'entrée/sortie comme printf, scanf, stdin 
#include <unistd.h> // pour sleep (en millisecondes)
#include <string.h> // pour les chaines de char ( strlen, strcpy, strcat, strcmp, ...)
#include <time.h> // pour les fonctions comme time, rand, srand, ...

// Les fonctions

//signature
int poww(int,int);

int main(){
    printf("%d puissance %d vaut %d.\n", 2, 3, poww(2,3));
    return 0;
}

//déclaration
int poww(int a,int b){
    int res = 1;
    for (int i = 0; i<b; i++){
        res *= a;
    }
    return res;
}