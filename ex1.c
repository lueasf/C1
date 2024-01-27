#include <stdio.h>
#include <stdlib.h>

// Les bases en C

void tp1(){int age = 19;
    float taille = 1.68;
    char note = 'A';
    printf("age = %d, taille = %f, note = %c\n", age, taille, note);}

void tp2(){
    int a = 5;
    long b = 65000;
    short c = 32;
    float d = 20.5;
    double e = 25.5;
    char f = 'A';
    printf("a = %d, b = %ld, c = %d, d = %f, e = %f, f = %c\n", a, b, c, d, e, f);
    printf("a prends en memoire %ld octets\n", sizeof(a));
}
/*%d pour digits (int et short), %ld pour long unsigned, %f pour float et double
%d pour char */

void tp3(){
    int age;
    float taille;
    char prenom, nom;
    // lecture des données utilisateurs :
    printf("Donnez votre age et votre taille: ");
    scanf("%d %f", &age, &taille); // permet la lecture de la saisie utilisateur
    // &age sont les addresses mémoires des variables

    fflush(stdin); // permet de vider le buffer de lecture pour pas avoir des retour à la ligne inutiles

    printf("Quel sont vos initiales: ");
    scanf(" %c%c", &prenom, &nom);

    printf("Vous avez %d ans et mesurez %.2f mètres\n", age, taille); // %.2f pour 2 chiffres après la virgule
    printf("Vos initiales sont %c.%c\n", prenom, nom);
}


void tp4(){
    char lettre;
    printf("donnez une lettre:");
    scanf("%c", &lettre);

    printf("\t %d en décimal\n", (int)lettre);
    printf("\t %x en hexadécimal\n", (int)lettre);    // %x pour hexadécimal
}

int main(){
    tp1();
    tp2();
    tp3();
    tp4();
    return 0;
}