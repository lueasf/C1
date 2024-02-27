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
    int index = 0;

    printf("entre une chaine de char.\n");
    if (fgets (msg, TAILLE, stdin) ==  NULL)
        printf("chaine vide.\n");     

    // calcul :
    while( msg[index] != '\0'){
        index ++;
    }

    printf("taille de la chaine : %d.\n", index);
    // on aura un char de plus avec le \n
}

//créer la fonction strcmp (ORDRE LEXICOGRAPHIQUE)
void tp7(){
    const int TAILLE = 100;
    char msg[TAILLE + 1]; // tableau
    const char  CODE[] = "CODEUR";
    int index = 0;
    int res = 0; // les deux chaines sont égales.

    printf("entre une chaine de char en majuscule.\n");
    scanf("%s", msg); 

    while( msg[index] != '\0' && CODE[index] != '\0' ){
        if (msg[index] < CODE[index]){
            res = -1; // msg est plus proche ds l'ordre lexicographique
            break; // permet de sortir de la boucle 
        }
        else if (msg[index] > CODE[index]){
            res = 1; // msg est plus loin dans l'ordre alphabétique
            break;
        }
        index ++;
    }
    printf("%s ", msg);
    if (res > 0 )
        putchar('>');
    else if (res < 0)
        putchar('<');
    printf(" %s.\n", CODE);
}

// fonction strtol
// convertir un nombre ecrit en str sous forme de nb
// RAPPEL : LE '\0', C'EST POUR LES STR, PAS LES TABLEAUX
void tp8(){
    char prix[100];
    int index = 0;
    const int CHAR_TO_INT = '0';
    int euro = 0;

    printf("donnez un prix (nb) en euro : \n");
    scanf("%s", prix);

    // conversion en entier de la saisie:
    while (prix[index] != '\0')
    {
            if (prix[index] >= '0' && prix[index] <='9')
            {
                int entier = prix[index] - CHAR_TO_INT;
                euro = 10*euro + entier;
            }
            else{
                break;
            }
        index ++;
    }
    printf("votre entier : %d.\n", euro);
}


//enlever les espaces d'une chaîne.
// MARCHE PO
void tp9(){
    const int TAILLE = 100;
    char chaine[TAILLE];

    printf("donnez une chaine de char avec espaces : \n");
    if (fgets(chaine, TAILLE, stdin) == NULL){
        printf("chaine vide.\n");
    }

    // ON RETIRE LE \n
    int taille_msg = strlen(chaine) -1;
    chaine[taille_msg] = '\0';

    for (int i= 0; i<taille_msg; i++){
        if (chaine[i] == ' '){
            strcpy(chaine + i, chaine + i + 1); // on copie 
            // le char à la case i+1 ds la case i
            i--;
            taille_msg--;
        }
    }
    printf("sans espaces : %s.\n", chaine);
}


// calcul de la taille d'un tableau d'entier : 
// int tab[] = {1, 2, 3, 4, 5};
//     int taille = sizeof(tab) / sizeof(tab[0]);

int main(){
    tp1();
    tp2();
    tp3();
    tp4();
    tp6();
    tp7();
    tp8();
    tp9();
    return 0;
}