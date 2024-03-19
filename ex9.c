#include <stdio.h>
#include <stdlib.h>

// 9 : Les types personnalisés

typedef struct PIXEL{ 
    int coorx;
    int coory;
    char color[15];

}Pixel;

void pixelInfo(Pixel pix){
    printf("Pixel :\n");
    printf("\t x: %d\n\t y: %d\n\t color: %s\n",pix.coorx, pix.coory, pix.color);
}

int main(){
    Pixel pix1 = {12,3,"Red"};
    Pixel pix2 = {0,0,"Black"};
    pixelInfo(pix1);
    pixelInfo(pix2);
}