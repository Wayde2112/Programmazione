/*
riempire un array di numeri generati casualmente appertenenti all'intervallo [0-1000]. 
Contare tutti i valori che sono multipli di 10.
Stampare tutti i valori maggiori di 750 (posizione e valore)

Stamparli nela posizione che occupano.
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int casuale(int max){
    
    return rand() % (max + 1);
}

int main(){

    int n, min, max, numeri[n];

    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &n);

    printf("Definisci il massimo dei numeri: ");
    scanf("%d", &max);

    

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        numeri[i]=casuale(max);
    }

    printf("\n\nStampa array di numeri interi reali inseriti");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nposizione: %d; valore: %d",i,numeri[i]);
    }
    
    int cMultipli10;
    for (int i = 0; i < n; i++)
    {
        if(numeri[i]%10==0)
            cMultipli10++;
    }
    
    printf("\n\nValori contenuti nelle celle che sono multipli di 10: %d", cMultipli10);

}