/*
Dato un array di stringhe, si richiedono le seguenti azioni:

    - stampare l'elenco con le stringhe in maiuscolo
    - stampare l'elenco con le stringhe in minuscolo

Si considerino le funzioni toupper e tolower della libreria ctype.h
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 30
#define MAX 5

int main(){
    char v[MAX][LENGTH];

    int i, j;
    for (i = 0; i < MAX; i++){
        printf("Inserisci la stringa desiderata: ");
        scanf("%s", v[i]);
    }
    int n;
    printf("\n1) Stampare l'elenco con le stringhe in maiuscolo");
    printf("\n2) Stampare l'elenco con le stringhe in minuscolo");
    printf("\nScelta: ");
    scanf("%d", &n);
    
    switch (n)
    {
    case 1:{
        for (i = 0; i < MAX; i++){
            for(j=0; j<strlen(v[i]); j++){
                printf("%c", toupper((int)v[i][j]));
            }
            printf("\n");
        }
        break;
    }
 
    case 2:{
        for (i = 0; i < MAX; i++){
            for(j=0; j<strlen(v[i]); j++){
                printf("%c", tolower((int)v[i][j]));
            }
            printf("\n");
        }
    }

    default:
        break;
    }   
    
}