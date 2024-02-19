#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep

// Les chaines de char

// transfromer un tableau de char en str:
void tp1(){
    char chaine[] = {'c', 'o', 'u', 'c', 'o', 'u', '\0'};
    printf("- %s\n", chaine); // en effet on affiche que coucou car le \0 est le caractère de fin de chaine
}

// Carte ID
void tp2(){
    const int TAILLE = 100; // donc 99 char max car il y a /0
    char date[TAILLE];
    char nom[TAILLE];
    char prenom[TAILLE];
    printf("Entrez votre date de naissance au format jj/mm/aaaa, nom et prénom:");
    scanf("%s %s %s", date, nom, prenom);
    printf("Date de naissance : %s\nNom : %s\nPrénom : %s\n", date, nom, prenom);
}

int main(){
    tp1();
    tp2();
    return 0;
}