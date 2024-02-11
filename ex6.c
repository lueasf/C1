#include <stdio.h>
#include <stdlib.h>
// inclure l'aléatoire:
#include <time.h>

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
        printf("*(tab + %d) = %c (%p)\n", i, *(tab + i), (tab + i ));
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


void tp4(){
    const int TAILLE = 1000;
    char lettres[TAILLE];
    char lettre;
    srand(time(NULL));     // srand() initialise le générateur de nombres aléatoires
    for (int i = 0; i < TAILLE; i++){
        lettres[i] = (char)(rand() % 26 + 65);     // rand() renvoie un nombre aléatoire entre 0 et RAND_MAX
    }
    // ici, on veut des lettres majuscules, donc on prend le reste de la division par 26 et on ajoute 65
    printf("demandez une lettre a rechercher : \n");
    scanf("%c", &lettre);

    int occ = 0;
    for (int i = 0; i < TAILLE; i++){
         if (lettres[i] == lettre){
            occ++;
         }   
    }
    printf("la lettre %c est presente %d fois.\n", lettre, occ);
}

void tp5(){
    const int TAILLE = 1000;
    char tab[TAILLE], compteur[26];
    srand(time(NULL));
    for (int i = 0; i < TAILLE; i++){
        tab[i] = (char)(rand() % 26 + 65);
    }
    for (int i = 0; i <26; i++){
        compteur[i] = 0;
    }
    printf("nombre d'occurences de chaque lettre\n");
    for (int i = 0; i < TAILLE; i++){
        if (tab[i] >= 65 && tab[i] <= 90){
            int index = tab[i] - 65;
            compteur[index]++;
        }
    }
    for (int i = 0; i< 26; i++){
        printf("%c : %d\n", i+65, compteur[i]);
    }
}

int main(){
    tp0();
    tp1();
    tp2();
    tp3();
    tp4();
    tp5();
    return 0;
}