#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h> // inclure les booléens:

bool isPal(char *str);

int main(){
    bool b = isPal("attytta");
    if (b) printf("Vrai\n");
    else printf("faux\n");
    return 0;
}

bool isPal(char *str){
    int n = strlen(str);
    for (int i = 0; i <n; i++){
        if (*(str+i) != *(str+n-i-1))return false;
    }
    return true;
}