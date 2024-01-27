#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//les conditions en C

// int resultat = (2*6 == 32);
// printf(“%d”, resultat);
// ce programme renvoie 0 car 12 != 32

// rappel : 0 est faux et tous les autres sont vrai

void tp1(){
    int age;
    const int maj = 18;

    printf("age:");
    scanf("%d", &age);

    if   (age >= maj)
        printf("vous etes majeurs\n");
    else 
        printf("vous etes mineurs\n");
}

// comparaison de nombre
void tp2(){
    int nb1, nb2;
    printf("donnez deux nombres:");
    scanf("%d %d", &nb1, &nb2);
}

int main(){
    tp1();
    tp2();
    return 0;
}