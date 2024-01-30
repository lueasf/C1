#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//les conditions en C

// int resultat = (2*6 == 32);
// printf(“%d”, resultat);
// ce programme renvoie 0 car 12 != 32
// rappel : 0 est faux et tous les autres sont vrai

void tp1(){
    int age;
    const int maj = 18;

    printf("age:");
    scanf("%d", &age);

    if   (age >= maj)
        printf("vous etes majeurs\n");
    else 
        printf("vous etes mineurs\n");
}

// comparaison de nombre
void tp2(){
    int nb1, nb2;
    printf("donnez deux nombres:");
    scanf("%d %d", &nb1, &nb2);
    if (nb1  == nb2){
        printf("les nombres sont égaux\n");
    }
}

void tp3(){
    int nb;
    printf("donnez un nombre:");
    scanf("%d", &nb);
    printf("\t Ce numéro correspond a:");
    switch (nb){
    case 1:
        printf("lundi\n");
    break;
    case 2:
        printf("mardi\n");
    break;
    case 3:
        printf("mercredi\n");
    break;
    default:
        printf("un autre jour\n");
    }
}

void tp4(){
    int choix;
    printf(" que voulez vous boire ? \n");
    printf("\t0. rien\n\t1. café\n\t2. thé\n\t3. eau\n\t4. bière\n");
    scanf("%d", &choix);

    switch(choix){
    case 1:
        printf("vous avez choisi un café\n");
    break;
    case 2:
        printf("vous avez choisi un thé\n");
    break;
    case 3:
        printf("vous avez choisi une eau\n");
    break;
    case 4:
    {
        int age;
        printf("votre age ? \n");
        scanf("%d", &age);

        if (age < 18)
            printf("vous etes mineurs, pas de bière\n");
        else
            printf("vous avez choisi un bière\n"); 
    }   
    break;
    default:
        printf("a bientot\n");
    break;
    }

}

void tp5(){
    int nb;
    printf("donnez un nombre:");
    scanf("%d", &nb);
    if (nb % 2 == 0)
        printf("pair\n");
    else
        printf("impair\n");
}

void tp6(){
    float a;
    printf("donnez un nombre flottant:");
    scanf("%f", &a);
    if (a = round(a))
        printf("entier\n");
    else
        printf("flottant\n");
}

void tp7(){
    int nb;
    float racine;
    printf("donnez un nombre pour savoir si c'est un carré parfait:");
    scanf("%d", &nb);

    if (sqrt(nb) == round(sqrt(nb)))
        printf("c'est un carré parfait\n");
    else
        printf("ce n'est pas un carré parfait\n");
}

// conversion de date
void tp8(){
    int jour, mois, année;
    printf("donnez une date au format jj/mm/aaaa:");
    scanf("%d/%d/%d", &jour, &mois, &année);
    printf("\t%d ", jour);
    switch(mois){
    case 1:
        printf("janvier\n");
    break;
    case 2:
        printf("février\n");
    break;
    case 3:
        printf("mars\n"); 
    break;
    case 4:
        printf("avril\n");    
    break;
    default:
        printf("autre mois\n");
    break;}
}

void tp9(){
    char asciii;
    printf("donnez un caractère:");
    scanf("%c", &asciii);
    if (asciii >= 65 && asciii <= 90)
        printf("c'est une majuscule\n");
    else if (asciii >= 97 && asciii <= 122)
        printf("c'est une minuscule\n");
    else if (asciii >= 48 && asciii <= 57)
        printf("c'est un chiffre\n");
    else
        printf("c'est un caractère spécial\n");
}

void tp10(){
    int nb1, nb2;
    char op;
    printf("donnez une opération:");
    scanf("%d%c%d", &nb1, &op, &nb2);
    printf("\t%d %c %d = " , nb1, op, nb2);
    switch(op){
        case '+':
            printf("%d\n", nb1 + nb2);
        break;
        case '-':
            printf("%d\n", nb1 - nb2);  
        break;
        case '*':
            printf("%d\n", nb1 * nb2);
        break;
        case '/':
        if (nb2 != 0)
            printf("%d\n", nb1 / nb2);
        else
            printf("division par zéro impossible\n");
        break;
        default:
            printf("opérateur invalide.\n");
        break;
    }
}

int main(){
    tp1();
    tp2();
    tp3();
    tp4();
    tp5();
    tp6();
    tp7();
    tp8();
    tp9();
    tp10();
    return 0;
}