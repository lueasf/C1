#include <stdlib.h>
#include <stdio.h>

// JEU DU MORPION

//définitions
void dessinerGrill(char grille[3][3]);
void saisie(char grille[][3], char joueur, int *coorx, int *coory);

int main(){
     
    char grille[3][3] = {
        {'.','.','.'},
        {'.','.','.'},
        {'.','.','.'}
        };
    int fin_partie = 0;
    char joueur = 'X';
    int coorx, coory;

    do{

    }while(fin_partie != 1);

    return 0;
}

//déclarations
void dessinerGrill(char grille[3][3]){
    for (int i = 0; i < 3; i++){
        printf("|%c|%c|%c|\n", grille[i][0], grille[i][1], grille[i][2]);
    }
}

void saisie(char grille[][3], char joueur, int *p_coorx, int *p_coory){
    printf("Joueur %c, où voulez-vous jouer  (x,y) ?\n", joueur);
    fflush(stdin);
    scanf("%d,%d", p_coorx, p_coory);
}