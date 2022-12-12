/*
Dato un array di nomi di persone, si richiede di stampare la lunghezza dei nomi. 

Si consideri la funzione strlen della libreria string.h
*/

#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("Quanti nomi vuoi inserire?: ");
    scanf("%d", &n);

    char nomi[n][30];
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci un nome: ");
        scanf("%s", &nomi[i]);
    }

    for(i=0;i<n;i++)
        printf("%s ha %d lettere\n", nomi[i], strlen(nomi[i]));
}