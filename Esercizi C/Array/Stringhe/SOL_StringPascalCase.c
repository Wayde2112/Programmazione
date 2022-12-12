#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH  30
#define MAX  5

char *capitalize(char parola[], int dimensione){
    char *p=parola;
    p[0] = toupper((int)p[0]);

    int i;
    for (i = 1; i < dimensione; i++){
        p[i]=tolower((int)p[i]);
    }
    return p;
}

int main(){
    char nomi[MAX][LENGTH]={"pinucciO", "lucia","ViOla","CarmEn","FrancEsco"};

    printf("\nPascal Case:");
    int i;
    for (i = 0; i < MAX; i++){
        printf("\nNominativo: %s", nomi[i]);
        printf(", Pascal Case: %s\n", capitalize(nomi[i], strlen(nomi[i])));
    }
}