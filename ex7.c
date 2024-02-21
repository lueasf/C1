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


// Maj
void tp3(){
    char chaine[101];
    int index = 0;
    printf("Entrez une chaine de char de maximum 100 charactères:\n");
    // pas de scanf car il s'arrête au premier espace
    fgets(chaine, 100, stdin); // (tab ou on va stoquer la chaine, 
    // entier = nb max de char à lire, source = stdin (lecture clavier)
    if (fgets(chaine, 100, stdin) == NULL){
        printf("Erreur de lecture\n");
    }
    while(chaine[index] != '\0' && index<100){
        if (chaine[index] >= 'a' && chaine[index] <= 'z'){
            chaine[index] = chaine[index] - 32;
        }
        index++;
    }
    printf("%s\n", chaine);
}

int main(){
    tp1();
    tp2();
    tp3();
    return 0;
}