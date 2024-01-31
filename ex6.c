#include <stdio.h>
#include <stdlib.h>

// Les tableaux en C
// en C, le nom du tableau correspond à l'adresse de sa première case

// afficher un tableau
void tp0(){
    int tab[5] = {1,2,3,4,5};
    int tab2[5];
    for (int i = 4; i>=0; i--)
        tab2[4 -i] = *(tab + i);
    printf("tab = {");
    for (int i = 0; i < 5; i++)
        printf("%d, ", tab[i]);
    printf("}\n");
    printf("tab2 = {");
    for (int i = 0; i < 5; i++)
        printf("%d, ", tab2[i]);
    printf("}\n");
}


// tableau et adresse
void tp1(){
    char tab[5] = {'c','a','c','a','o'};
    for (int i =  0; i<5; i++){
        printf("tab[%d] = %c (%p)\n", i, tab[i], &tab[i] );
    }
}

// pareil mais avec la syntaxe du pointeur
void tp2(){
    char tab[5] = {'c','a','c','a','o'};
    for (int i =  0; i<5; i++){
        printf("tab[%d] = %c (%p)\n", i, tab[i], &tab[i] );
    }
}

int main(){
    tp0();
    tp1();
    tp2();
    return 0;
}