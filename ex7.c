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

//Création de mot de passe
void tp5(){
    const int TAILLE = 100;
    const int MIN = 5;
    const int MAX = 10;
    char mdp[TAILLE + 1];
    int taille_mdp = 0;

    int valide = 0;
    do
    {
        printf("donnez un mdp: \n");
        if (fgets(mdp, 100, stdin) == NULL)
            printf("Erreur de lecture\n");
        taille_mdp = strlen(mdp) - 1; // on enlève le \n
        mdp[taille_mdp] = '\0'; // on remplace le \n par \0

        if (taille_mdp < MIN || taille_mdp > MAX)
            printf("le mdp doit [5-10] char.\n");
            continue; // comme un break, arrete l'execution de la boucle courante
        
        int maj = 0;
        int special = 0;
        int chiffre = 0;

        for (int i = 0; i<taille_mdp; i++){
            if (mdp[i] >= 'A' && mdp[i] <= 'Z')
                maj = 1;
            else if (mdp[i] >= '0' && mdp[i] <= '9')
                chiffre = 1;
            else if (mdp[i] < 'a' || mdp[i] > 'z')
                special = 1;    if (maj == 0)
        printf("le mdp doit contenie au moins 1 majuscule.\n");
        }

        if (maj == 0)
            printf("le mdp doit contenie au moins 1 majuscule.\n");
            continue;

        if (special == 0)
            printf("le mdp doit contenie au moins 1 char spécial.\n");
            continue;

        if (chiffre == 0)
            printf("le mdp doit contenie au moins 1 chiffre.\n");
            continue;
        valide == 1;
}while(valide == 0); // tant que valide = 0, on continue la boucle while
}

int main(){
    tp1();
    tp2();
    tp3();
    tp4();
    return 0;
}