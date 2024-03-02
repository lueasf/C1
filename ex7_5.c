#include <stdlib.h> 
#include <math.h> // pour les fonctions mathématiques comme sqrt, pow, ...
#include <stdio.h>
#include <unistd.h> // pour sleep (en millisecondes)
#include <string.h> // pour les chaines de char ( strlen, strcpy, strcat, strcmp, ...)
#include <time.h> // pour les fonctions comme time, rand, srand, ...

// Les chaines de char SUITE

// JEU DU PENDU

int main(){
    int vies = 10;

    char mot[] = "flaubert";
    int taille_mot = strlen(mot);
    char saisie[taille_mot + 1];

    char mot_trouve[taille_mot + 1]; // stoque les char trouvé par l'user.
    for (int i=0; i<taille_mot; i++) mot_trouve[i] = '-';
    mot_trouve[taille_mot] = '\0';

    do
    {
        printf("Entrez une lettre ou un mot >> ");
        fflush(stdin);
        fgets(saisie, taille_mot + 1, stdin);  

        int taille_saisie = strlen(saisie);

        if (taille_saisie == 2)
        {
            // on prends en compte le \n

            int lettreici = 0; // pas dans le mot la lettre
            for (int i=0; i<taille_mot; i++){
                if (mot[i] == saisie[0]){
                    lettreici = 1;
                    mot_trouve[i] = saisie[0];
                }
            }

            if (lettreici)
            {
                printf("Cette lettre est bien présente dans le mot %s.\n", mot_trouve);
            }   
            else
            {
                printf("Non la lettre \"%c\" ne fait pas partie du mot secret.\n", saisie[0]);
                printf("vous avez plus que %d vies.\n", vies);
                vies--;
            }
        }

        else if (taille_saisie>2){
            if (strcmp(mot, saisie) == 0){ // on regarde l'égalité lexicographique
                strcpy(mot_trouve, saisie); // on copie dans mot trouve la saisie vu que c'est bon
            }
            else{
                vies--;
                printf("ce mot n'est pas le bon.\n");
            }
        }

// 
        if (strcmp(mot, mot_trouve) == 0) // cad LES DEUX SONT EGALES
        {
            printf("bravo vous avez trouvé le mot : %s et il vous reste %d vies.\n", mot_trouve, vies);
            break;
        }

    }while(vies > 0);
    
    if (vies == 0)
        printf("Dommage vous avez épuisé vos vies. Le mot etait %s.\n", mot);

    return 0;
}