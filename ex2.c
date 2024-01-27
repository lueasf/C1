#include <stdio.h>
#include <stdlib.h>

//les opérateurs en C

void tp1(){
    float montant_euro, montant_dollar;
    printf("Donnez un montant en euros:");
    scanf("%f", &montant_euro);

    // conversion en dollars
    montant_dollar = montant_euro * 1.18;

    printf("le taux de change entre l'euro et le dollar est de 1.18\n");
    printf("le montant en dollars est de %.2f\n", montant_dollar);
}


int main() {
    tp1();
    return 0;
}
