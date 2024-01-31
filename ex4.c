#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep

// Les boucles en C

void tp1(){
    int i;
    printf("donnez un nombre de compte à rebours:");
    scanf("%d",&i);
    for (int j = 0; j <= i; j++){
        printf("%d\n", i-j);
        sleep(1);
    }
    printf("BOOM!\n");;
}

// POur savoir si c'est do-while ou juste while
// on se pose la qst , eske on va utiliser au moins une fois n
// notre boucle, si oui : do-while approprié

// CODE PIN
void tp2(){
    const int code = 1234;
    const int max_t = 3;
    int nb = max_t;
    int saisie;

    do
    {printf("donnez votre code pin:");
     scanf("%d", &saisie);
        
        if (saisie == code)
            printf("\t Dévérouillé\n");
        else
            nb--;
            printf("\terreur, plus que %d tentatives.\n", nb);
    }while( (saisie != code) && (nb > 0));
}

// Table ASCII
void tp3(){
    printf("Table ASCII\n");
    printf("HEX\tDEC\tCHAR\n");
    for (int i = 32; i <127; i++)
        printf("Ox%x\t%d\t%c\n", i, i, i );
}

// NOmbres premiers
void tp4(){
    int n ;
    int premier = 1;
    printf("Donnez un nombre entier:");
    scanf("%d", &n);
    if (n == 1 || n == 0)
        premier = 0;
    else{
        for (int i = 2; i < n; i++){
            if (n%i == 0)
                premier = 0;
                break;
    }   
    if ( premier )
            printf("%d est premier\n", n);
    else
        printf("%d n'est pas premier\n", n);
    }
}

void tp5(){
   int saisie;
   int saisie2;
   printf("choisir 2 nombre pour voir la table du premier jusqu'au second:");
   scanf("%d %d", &saisie, &saisie2);
   for (int i = 0; i < saisie2 + 1; i++)
        printf("%d x %d = %d\n", saisie, i, saisie*i); 
}

// triangle des étoiles
void tp6() {
    int nb = 0;
    const int min = 3, max = 10;

    do {
        printf("donnez un nombre compris entre %d et %d:", min, max);
        scanf("%d", &nb);
    } while (nb < min || nb > max);

    for (int i = 1; i <= nb; i++) {
        putchar('\n'); // comme printf() mais avec un seul char et tjrs entre ''

        for (int j = 1; j <= nb - i; j++)
            putchar(' ');

        for (int j = 1; j <= i * 2 -1; j++)
            putchar('*');
    }
}

int main(){
    // tp1();
    // tp2();
    // tp3();
    // tp4();
    // tp5();
    tp6();
    return 0;
}