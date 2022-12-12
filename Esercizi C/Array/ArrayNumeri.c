/*
riempire un array di numeri interi. Stamparli nela posizione che occupano.
*/

#include <stdio.h>

int main(){

    int numeri[8];

    numeri[0] = 50;
    numeri[1] = 56;
    numeri[2] = 53;
    numeri[3] = 52;
    numeri[4] = 51;
    numeri[5] = 54;
    numeri[6] = 57;
    numeri[7] = 59;

    printf("Stampa array di numeri interi");
    int i;
    for (i = 0; i < 8; i++)
    {
        printf("\nposizione: %d; valore: %d",i,numeri[i]);
    }
    
    printf("\n\nStampa indirizzo di memoria delle celle dell'array di numeri interi");
    for (i = 0; i < 8; i++)
    {
        printf("\nposizione: %d; indirizzo: %d",i,&numeri[i]);
    }

}