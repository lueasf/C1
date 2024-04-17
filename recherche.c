// trouver un élément dans un tableau
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int taille;
    printf("Entrez la taille du tableau \n");
    scanf("%d", &taille);
    int *tab = (int *)malloc(taille* sizeof(int));
    if (tab == NULL) return 1;

    printf("Entrez tous les éléments du tableau : \n");
    for (int i = 0; i < taille; i++){
        scanf("%d", &tab[i]);
    }
    
    int rec;
    printf("Choisissez un élément à rechercher dans la tableau. \n");
    scanf("%d", &rec);

    int boo = 0; // il n'est pas dedans.
    for (int i = 0; i <taille; i ++){
        if (tab[i] == rec){
            boo = 1;
        }
    }
    
    if (boo == 1){
    printf("Le nombre %d est dans le tableau.\n", rec);
    }
    else{
    printf("Le nombre %d n'est pas dans le tableau.\n", rec);        
    }
    free(tab);
    return 0;
}


/*code assembleur de gdb:
gcc -g recherche.c -o recherche
gdb ./main
break main
run
disassemble
*/
