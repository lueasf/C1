#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAILLE 15
// en utilisant sqrt, il faut compiler avec -lm à la fin pour (lib math)

// 9 : Les types personnalisés


// EX1
typedef struct PIXEL{ 
    int coorx;
    int coory;
    char color[15];

}Pixel;

void pixelInfo(Pixel pix){
    printf("Pixel de taille %d:\n", TAILLE);
    printf("\t x: %d\n\t y: %d\n\t color: %s\n",pix.coorx, pix.coory, pix.color);
}

// EX2

typedef struct POINT{
    float coorx;
    float coory;
}Point;

void distance(Point p1, Point p2){
    float d = sqrt(pow(p1.coorx - p2.coorx, 2) + pow(p1.coory - p2.coory, 2));
    printf("distance entre les deux points : %f\n", d);
}


// EX3

typedef enum COULEUR{
    PIQUE, // 0
    CARREAU,
    COEUR,
    TREFLE // Quand on precise as les entiers, ca commence à 0 et ca s'incrémente tout seul.
}Couleur;

typedef enum FIGURE{
    AS=1, // dc ca renvoie un nombre
    DEUX,
    TROIS,
    QUATRE,
    CINQ,
    SIX,
    SEPT,
    HUIT,
    NEUF,
    DIX,
    VALET,
    DAME,
    ROI
}Figure;

typedef struct CARTE{
    Couleur couleur;
    Figure fig;
}Carte;

void infoCarte(Carte c){
    printf("Info sur la carte : \n");
    printf("couleur : %d\n", c.couleur);
    printf("figure : %d\n", c.fig);
}


void carteAléatoire(Carte *p_carte){
    if (p_carte == NULL){
        return;
    }
    p_carte-> fig = (rand() % (ROI-AS+1) + AS); // permet de générer un nombre entre 1 et 13
    // la notation p_carte -> fig est équivalente à (*p_carte).fig 
    p_carte-> couleur = (rand() % (TREFLE - PIQUE + 1) + PIQUE);

}

int main(){
    // EX1
    Pixel pix1 = {12,3,"Red"};
    pixelInfo(pix1);
    putchar('\n');

    // EX2
    Point p1 = {3,4}, p2 = {1,9};
    distance(p1,p2);

    putchar('\n');
    // EX3
    Carte c = {COEUR,AS};
    infoCarte(c);
    srand(time(NULL));

    Carte macarte;
    carteAléatoire(&macarte); // on donne en param le pointeur vers ma carte
    infoCarte(macarte);

    return 0;
}
