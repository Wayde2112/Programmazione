/*
riempire un array di numeri raelidati da input. Stamparli nella posizione che occupano.
*/

#include <stdio.h>

int main(){

    int n;

    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &n);

    float numeri[n];

    for (int i = 0; i < n; i++)
    {
        printf("Inserisci il numero in posizione %d: ", i);
        scanf("%f", &numeri[i]);
    }

    printf("Stampa array di numeri interi reali inseriti");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nposizione: %d; valore: %.2f",i,numeri[i]);
    }
    
    printf("\n\nStampa indirizzo di memoria delle celle dell'array di numeri interi");
    for (i = 0; i < n; i++)
    {
        printf("\nposizione: %d; indirizzo: %d",i,&numeri[i]);
    }

}