#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep

// Les pointeurs en C
void tp0(){
    int age_utilisateur = 25;
    printf("Age utilisateur: %d\n", age_utilisateur);
    printf("Adresse: %p\n", &age_utilisateur);
}

void tp1(){
    char c = 'A';
    printf("information sur ma varibale\n");
    printf("\ttype: char\n");
    printf("\ttaille:%ld octets\n", sizeof(c)); 
    printf("\tcontenu: %c\n", c);
    printf("\tadresse: %p\n", &c); // l'adresse c'est %p
}

void tp2(){
    int nombre = 0;
    int* p_nombre = &nombre; // pointeur vers nombre
    printf("donnez un nombre entier:");
    scanf("%d", p_nombre);
    printf("le nombre %d est stockée à l'adresse %p\n", nombre, p_nombre); // on peut mettre ", *p_nombre, p_nombre); aussi
}

// inversion de variable en utilisant les pointeurs
void tp3(){
    char prenom ='A', nom = 'Z';
    char* p_prenom = &prenom;
    char* p_nom = &nom;
    printf("vos initiales sont %c.%c\n", prenom, nom);
    char tmp = *p_prenom;
    *p_prenom = *p_nom; // on écrase le contenu
    *p_nom = tmp;
    printf("vos initiales sont %c.%c\n", prenom, nom);
}

void tp4(){
    int age = 20;
    int *p_age = &age;
    printf("age?");
    scanf("%d", p_age);
    printf("vous avez %d ans.\n", age);
}

int main(){
    // tp0();
    // tp1();
    // tp2();
    // tp3();
    tp4();
    return 0;
}