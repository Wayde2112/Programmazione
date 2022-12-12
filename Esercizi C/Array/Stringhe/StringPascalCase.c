/*
Dato un array di nomi di persone precaricato, si richiede la stampa dell'elenco dei nomi utilizzando la nomenclatura Pascal Case.

Si consideri la libreria string.h e le funzioni toupper, tolower e strcat.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 30
#define MAX 5

int main(){
    char nomi[MAX][LENGTH]={"gIallo", "VERDE", "bLu", "SupeR", "ViOlA"};

    int i, j;
    for (i = 0; i < MAX; i++){
        for (j = 0; j < strlen(nomi[i]); j++){
            if (j==0) 
                printf("%c", toupper((int)nomi[i][j]));
            else 
                printf("%c", tolower((int)nomi[i][j]));
        }    
    }
}