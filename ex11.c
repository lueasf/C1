#include <stdio.h>
#include <stdlib.h>

// la gestion des fichiers:

void ex1();
void ex2();
void ex3();
void ex4();

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    return 0;
}

void ex1(){
    FILE * f= fopen("cours.txt","r");
    
    if (f == NULL) printf("erreur");

    printf("conetenu:\n");
    int res = 0;

    while(res != EOF){
        res = fgetc(f);
        printf("%c", (char)res);
    }

    fclose(f);
}

void ex2(){
    FILE * f = fopen("cours.txt","a"); //w ou a pour pas ecraser.
    if (f == NULL) printf("erreur");
    // ajout à la suite de ce qui exsiste déjà:
    fputs("Texte écrit par prog.\n", f);
    fclose(f);
}



#define FICHIER "compteur.txt"
// compteur d'éxécution
void ex3(){
    // utiliser un fichier
    FILE *f = fopen(FICHIER,"r");
    // lecture de la valeur précedente
    long nb = 0;
    if (f != NULL){
        fscanf(f,"%ld", &nb);
        fclose(f);
    }
    nb ++;
    printf("fichier éxécuté %ld fois.\n",nb);

    // on modifie la valeur dans le fichier
    f = fopen(FICHIER,"w");
    if (f == NULL)printf("erreur");
    fprintf(f,"%ld",nb);
    fclose(f);
}

void ex4(){
    FILE * f = fopen("h.txt","r");
    if (f == NULL)printf("erreur");

    int lecture = 0;
    do{
        lecture = fgetc(f);
    }while(lecture != EOF);
}
