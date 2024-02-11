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
        printf("*(tab + %d) = %c (%d)\n", i, *(tab + i), *(tab + i ));
    }
}


// statistiques ( demander 5 entiers, renvoyer le min et max, et la moy)
void tp3(){
    const int TAILLE = 5;
    int tab[TAILLE];
    printf("Donnez %d entiers positifs (à ranger dans un tableu)\n", TAILLE);
    for (int i = 0; i< TAILLE; i ++){
        printf("tab[%d] = ", i);
        scanf("%d", tab+i ); // car RAPPEL tab est l'adresse de la première case
    }
    // calculs :
    int min = tab[0], max = tab[0], somme = tab[0];
    for (int i = 1; i < TAILLE; i++){
        if (tab[i] > max){
            max = tab[i];
        }
        else if (tab[i] < min){
            min = tab[i];
        }
        somme = somme + tab[i];
    }
    float moy = (float)somme / (float)TAILLE;
    printf("le min du tableau est %d, le max du tableau est %d et la moyenne est %f.\n", min, max, moy );
}


int main(){
    // tp0();
    // tp1();
    // tp2();
    tp3();
    return 0;
}