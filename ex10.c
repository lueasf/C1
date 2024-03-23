#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100
#define MIN 0
#define MAX 100

// l'allocation dynamique

int ex1();
int ex2();
int ex3();
int ex4();

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    return 0;
}


int ex1(){
    int *age = (int *)malloc(sizeof(int)); // alocation dynamique

    //gestion dse erreurs:
    if (age == NULL) return -1;

    printf("Quel est votre âge ?\n");
    scanf("%d", age); // age est deja le pointeur
    printf("Vous etes né(e) en %d.\n", 2024 -*age);


    free(age);
}

int ex2(){
    int taille;
    printf("Taille de votre tableau ?\n");
    scanf("%d", &taille);

    if (taille<0) return -1;
    int *tab = (int *)malloc(sizeof(int)*taille);

    if (tab == NULL)return -2;

    for (int i = 0; i<taille; i++){
        printf("tab[%d] = ? ", i);
        scanf("%d", tab + i);

    }
    printf("tab = [");
    for (int i = 0; i<taille; i++) {
        if (i<taille -1)
            printf("%d,",*(tab + i));
        else
        printf("%d]\n",*(tab + i));
    }
    return 0;

}

int ex3(){
    int taille = TAILLE_MAX;
    char* nom = (char*)malloc(sizeof(char)*taille);

    if (nom == NULL)return -2;

    printf("Entrez votre nom\n");
    if (fgets(nom, TAILLE_MAX, stdin) == NULL) return -1;

    taille = strlen(nom) -1;// pour enlever le \n
    nom[taille] = '\0';

    nom = realloc(nom, sizeof(char)*(taille+1));

    printf("\t-%s\n", nom);
    printf("\t-%d char\n", taille);
    printf("\t-%ld octets\n", sizeof(char)*(taille+1));


    return 0;
}

int ex4(){
    int taille = 0;
    int saisie;
    int *tab = NULL;

    int z =0;
    printf("entrez des entiers entre %d et %d.\n", MIN,MAX);
    do{
        scanf("%d", &saisie);

        if(saisie >= MIN && saisie <= MAX){
            taille++;
            tab = (int*)realloc(tab, sizeof(int)*taille);

            for (int i = (taille-1); i>0; i--){
                tab[i] = tab[i-1];
                if (tab[i] <= saisie) break;
            }
            tab[z] = saisie;
        }
    }while(saisie>=MIN && saisie <= MAX);

    printf("tab = [");
    for (int j=0; j<taille; j++){
        printf("%d,", tab[j]);
    }
    return 0;
}