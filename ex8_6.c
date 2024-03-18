#include <stdio.h>
#include <stdlib.h>

// recoder la fonction strcat

int taille(char *);

void concat(char*, char*);

int main(){
    const int TAILLE = 100;
    char ch1[TAILLE];
    char ch2[TAILLE];

    printf("Entrez deux chaîne de char.\n");
    fgets(ch1,TAILLE-1,stdin);
    fgets(ch2,TAILLE-1,stdin);

    ch1[taille(ch1)-1]='\0';
    ch2[taille(ch2)-1]='\0';

    printf("\n concaténation : \"%s\" et \"%s\" : ", ch1, ch2);
    concat(ch1,ch2);
    printf("\"%s\"\n", ch1);
    return 0;
}

//déclarations
int taille(char * tab){
    int i = 0;
    while(tab[i] != '\0'){
        i++;
    }
    return i;
}


void concat(char* left, char* right){
    int i_left = 0, i_right = 0;

    i_left = taille(left);

    while(right[i_right] != '\0'){
        left[i_left + i_right] = right[i_right];
        i_right++;
    }
    left[i_left + i_right + 1] = '\0';
}