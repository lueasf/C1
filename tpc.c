#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int tab[3];

    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;

    printf("tab = %p\n", tab);
    printf("&tab = %p\n", &tab);
    printf("tab[0] = %d\n", tab[0]);
    printf("&tab[0] = %p\n", &tab[0]);

    int t2[3];
    *tab = &t2;
}