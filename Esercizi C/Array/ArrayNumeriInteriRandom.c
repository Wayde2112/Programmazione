/*
riempire un array di numeri generati casualmente. Stamparli nela posizione che occupano.
*/

#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){

    int n;

    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &n);

    int numeri[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        numeri[i]=rand();
    }

    printf("Stampa array di numeri interi reali inseriti");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nposizione: %d; valore: %d",i,numeri[i]);
    }

}