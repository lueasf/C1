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

// tri par selection MARCHE PAS
void tp6(){
    int tab[7];
    srand(time(NULL));
    for (int i = 0; i<7; i ++){
        tab[i] = rand() % 10  ;
    }
    printf("[");
    for (int i = 0; i< 7 ; i++)
        printf("%d ", tab[i]);
    printf("]\n");

    for (int i = 0; i<6; i++){
        int index = i;
        int tmp = tab[i];

        for (int j = i+1; j<7; j++){
            if (tab[j] < tab[index])
            index = j;

        if (i != index){
        tab[i] = tab[index];
        tab[index] = tab[tmp];}
        }
    }
    printf("tri par selection : [");
    for (int i = 0; i<7; i++){
        printf("%d", tab[i]);
    printf("]\n");
    }
}

// TRI BULLE 
void tp7(){
    int tab[7];
    int triterminé = 0;
    srand(time(NULL));
    for (int i = 0; i<7; i ++){
        tab[i] = rand() % 10  ;
    }
    printf("[");
    for (int i = 0; i< 7 ; i++)
        printf("%d ", tab[i]);
    printf("]\n");

    // tri bulle : 
    while (!triterminé){
        triterminé = 1;

        for (int i = 0; i< 6; i++){
            if (tab[i] > tab[i+1]){
                triterminé = 0;
                int tmp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = tmp;
            }
        }
    }

    printf("tri bulle : [");
    for (int i = 0; i<7; i++)
        printf("%d ", tab[i]);
    printf("]\n");
}

// matrice unitaire
void tp8(){
    const int TAILLE = 4;
    int matrice[TAILLE][TAILLE];

    for (int i = 0; i<TAILLE; i++){
        for (int j = 0; j<TAILLE; j++){
            if (j==i)
                matrice[i][j] = 1;
            else
                matrice[i][j] = 0;
        }
    }
    printf("matrice: \n");
    for (int i = 0; i<TAILLE; i++){
        for (int j = 0; j< TAILLE; j++){
            printf("%d ", matrice[i][j]);
        }
        putchar('\n'); // RAPPEL PUTCHAR AVEC LES GUILLEMETS SIMPLES PTN DE MERDE
    }
}

// addition matricielle
void tp9(){
    int mata[3][2] = { 
        {1, 3},
        {1, 0},
        {1, 2}
    };

    int matb[3][2] = { 
        {0, 0},
        {7, 5},
        {2, 1}
    };
    for (int i = 0; i<3; i++){
        for (int j = 0; j<2; j++){
            printf("%d ", mata[i][j] + matb[i][j]);
        }
        putchar('\n');
    }
}

// produit matricielle
void tp10(){
    int mata[2][3] = {
        {1, 2, 0},
        {4, 3, -1}
    };
    int matb[3][2] = {
        {5, 1},
        {2, 3},
        {3, 4}
    };
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            int res = 0;
            for (int k = 0; k<3; k++)
            {
                res += mata[i][k]*matb[k][j];
            }
            printf("%d ", res);
        }
        putchar('\n');
}
}


int main(){
    // tp0();
    // tp1();
    // tp2();
    // tp3();
    // tp4();
    // tp5();
    // tp6();
    // tp7();
    // tp8();
    // tp9();
    tp10();
    return 0;
}