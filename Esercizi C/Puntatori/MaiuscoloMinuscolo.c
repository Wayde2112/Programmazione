/*
Maiuscolo minuscolo
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *toLower(char testo[]){

    char *p=testo;
    int i;
    for (i = 0; i < strlen(testo); i++)
        p[i]=tolower((int)p[i]);
    return p;    
}

char *toUpper(char testo[]){

    char *p=testo;
    int i;
    for (i = 0; i < strlen(testo); i++)
        p[i]=toupper((int)p[i]);
    return p;    
}

int main(){

    char nome[30];
    printf("Inserisci un nome: ");
    scanf("%s", &nome);

    printf("Trasformazione");
    printf("\nMaiuscolo: %s", toUpper(nome));
    printf("\nMinuscolo: %s", toLower(nome));
}