#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h> // pour sleep

// Les boucles en C

void tp1(){
    int i;
    printf("donnez un nombre de compte à rebours:");
    scanf("%d",&i);
    for (int j = 0; j <= i; j++){
        printf("%d\n", i-j);
        sleep(1);
    }
    printf("BOOM!\n");;
}

int main(){
    tp1();
    return 0;
}