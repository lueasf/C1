#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//les opérateurs en C


// conversion monétaires
void tp1(){
    float montant_euro, montant_dollar;
    const float taux = 1.18;

    printf("Donnez un montant en euros:");
    scanf("%f", &montant_euro);

    // conversion en dollars
    montant_dollar = montant_euro * taux;

    printf("le taux de change entre l'euro et le dollar est de %f\n", taux);
    printf("le montant en dollars est de %.2f\n", montant_dollar);
}


// inversion de deux variables
void tp2(){
    int var1 = 123;
    int var2 = 18;
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("var1 = %d, var2 = %d\n", var1, var2);
}

// calcul de moyenne
void tp3(){
    int entier1, entier2, entier3;
    printf("Donnez trois entiers:");
    scanf("%d %d %d", &entier1, &entier2, &entier3);
    printf("la moyenne de ces 3 entiers est %f\n", (float)(entier1 + entier2 + entier3)/3);
}

// calcul de cercle
void tp4(){
    float rayon;
    float pi = 3.141562;
    printf("donner le rayon d'un cercle:");
    scanf("%f", &rayon);
    printf("le diamètre de ce cercle est de %f\n", rayon*2);
    printf("la circonférence de ce cercle est de %f\n", 2*pi*rayon);
    printf("l'aire du cercle est de %.3f\n", pi* pow(rayon, 2)); // pow pour puissance
}

// conversion majuscule

void tp5(){
    char lettre;
    const int DEC = 'A'-'a'; //-32
    printf("%d\n", DEC);
    printf("donnez une lettre minuscule:");
    scanf("%c", &lettre);
    printf("%c\n", (lettre + DEC) );
}

int main() {
    tp1();
    tp2();
    tp3();
    tp4();
    tp5();
    return 0;
}
