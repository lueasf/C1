#include <stdio.h>
#include <stdlib.h>

// l'allocation dynamique

int ex1();
int ex2();

int main(){
    ex1();
    ex2();
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
        printf("tab[%d] = ?", i);
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