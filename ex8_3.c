#include <stdlib.h>
#include <stdio.h>

// fonction d'inversion


void inv(int *p_n1, int *p_n2){
    printf("v1 = %d et v2 = %d.\n", *p_n1, *p_n2);
    int tmp = *p_n1; // * devant un pointeur pr récuprer le contenu pointé par celui-ci
    *p_n1 = *p_n2;
    *p_n2 = tmp;
    printf("v1 = %d et v2 = %d.\n", *p_n1, *p_n2);    
}


int main(){
    int var1 = 12, var2 = 9;
    inv(&var1, &var2);
    return 0;
}