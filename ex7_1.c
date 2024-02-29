#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep
#include <string.h> // pour les chaines de char


//Création de mot de passe
int main(){
    const int TAILLE = 100;
    const int MIN = 5;
    const int MAX = 10;
    char mdp[TAILLE + 1];
    int taille_mdp = 0;

    int valide = 0;
    do
    {
        printf("donnez un mdp: \n");
        if (fgets(mdp, 100, stdin) == NULL)
            return -1;

        taille_mdp = strlen(mdp) - 1; // on enlève le \n
        mdp[taille_mdp] = '\0'; // on remplace le \n par \0

        if (taille_mdp < MIN || taille_mdp > MAX){
            printf("le mdp doit [5-10] char.\n");
            continue; // permet de passer à l'itération suivante, contraireent au break qui sort
            //de la boucle 
            }   
        int maj = 0;
        int special = 0;
        int chiffre = 0;

        for (int i = 0; i<taille_mdp; i++){
            if (mdp[i] >= 'A' && mdp[i] <= 'Z')
                maj = 1;
            else if (mdp[i] >= '0' && mdp[i] <= '9')
                chiffre = 1;
            else if (mdp[i] < 'a' || mdp[i] > 'z')
                special = 1; 
        }

        if (maj == 0){
            printf("le mdp doit contenie au moins 1 majuscule.\n");
            continue;
        }

        if (special == 0){
            printf("le mdp doit contenie au moins 1 char spécial.\n");
            continue;
        }

        if (chiffre == 0){
            printf("le mdp doit contenie au moins 1 chiffre.\n");
            continue;
        }

        valide = 1;
    }while(valide == 0); // tant que valide = 0, on continue la boucle while
    return 0;
}