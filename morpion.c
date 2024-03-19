#include <stdlib.h>
#include <stdio.h>

/*
0,0 0,1 0,2
1,0 1,1 1,2
2,0 2,1 2,2

*/

// JEU DU MORPION 1428

//définitions
void dessinerGrill(char grille[3][3]);
void saisie(char grille[][3], char joueur, int *coorx, int *coory);
int saisieValide(char grille[][3], int coorx, int coory); // renvoie true si la saisie est valide
int victoire(char grille[][3], char joueur); // renvoie true si le joueur a gagné
int grillePleine(char grille[][3]); // renvoie true si la grille est pleine

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
        dessinerGrill(grille);
        saisie(grille, joueur, &coorx, &coory);
        if (victoire(grille, joueur)){
            dessinerGrill(grille);
            printf("Le joueur %c a gagné\n", joueur);
            fin_partie = 1;

        }
        else if (grillePleine(grille)){
            dessinerGrill(grille);
            printf("Match nul\n");
            fin_partie = 1;
        }

        else{
            if (joueur == 'X') joueur = 'O';
            else joueur = 'X';
        }

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
    do
    {
        printf("Joueur %c, où voulez-vous jouer  (x,y) ?\n", joueur);
        fflush(stdin);
        scanf("%d,%d", p_coorx, p_coory);
    }while(saisieValide(grille, *p_coorx, *p_coory) == 0);
    grille[*p_coorx][*p_coory] = joueur;
}

int saisieValide(char grille[][3], int coorx, int coory){
    if(coorx < 0 || coorx >=3 || coory <0 || coory >=3){
        printf("Coordonnées invalides\n");
        return 0;   
    }

    if (grille[coorx][coory] != '.'){
        printf("Case déjà occupée\n");
        return 0;
    }
    return 1;
}

int victoire(char grille[][3], char joueur){
    //vérification des lignes
    for (int i = 0; i < 3; i++){
        if (grille[i][0] == joueur && grille[i][1] == joueur && grille[i][2] == joueur)
            return 1;
    }
    for (int i = 0; i < 3; i++){
        if (grille[0][i] == joueur && grille[1][i] == joueur && grille[2][i] == joueur)
            return 1;
    }
    if (grille[0][0] == joueur && grille[1][1] == joueur && grille[2][2] == joueur)
        return 1;
    if (grille[0][2] == joueur && grille[1][1] == joueur && grille[2][0] == joueur)
        return 1;

    return 0;
}

int grillePleine(char grille[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (grille[i][j] == '.')
                return 0;
        }
    }
    return 1;
}