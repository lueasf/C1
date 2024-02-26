#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep
#include <string.h> // pour les chaines de char

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

// reverse la chaîne
void tp4(){
    const int TAILLE = 10;
    char tab[TAILLE + 1];
    printf("chaine :");
    if (fgets(tab, 100, stdin)== NULL)
        printf("Erreur de lecture\n");
    int taille = strlen(tab); // retourne la taille de la chaine 
    // (sans le \0) donc on doit enlever 1 
    taille --;
    tab[taille] = '\0'; // on remplace le \n par \0
    printf("effet miroir :\n");
    printf("%s | ", tab);
    for (int i = (taille -1); i>=0 ; i --){
        putchar(tab[i]);
    }
    putchar('\n');
}

// creer la fonction strln
void tp6(){
    const int TAILLE = 100;
    char msg[TAILLE + 1]; // tableau
    printf("entre une chaine de char.\n");
    if (fgets (msg, TAILLE, stdin) ==  NULL)
        printf("chaine vide.\n");     
}


int main(){
    tp1();
    tp2();
    tp3();
    tp4();
    tp6();
    return 0;
}