/*
Dati in input n prodotti di cui si conosce il nome, il prezzo e la giacenza
Stampare i prodotti in scorta, quelli esauriti e il prodosso con prezzo max

NOTA: si faccia uso degli array paralleli (stessa dimensione)
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include "C:\Users\ICTS21-23.096\Desktop\Esercizi C\myLibs\myLibrary.h"

#define LENGTH 30   


int main(){

    int n,i;

    printf("Quanti prodotti vuoi caricare? ");
    scanf("%d", &n);

    char prodotti[n][LENGTH];
    float prezzi[n];
    int giacenze[n];

    for (i = 0; i < n; i++)
    {
        printf("\n");

        printf("Prodotto: ");
        scanf("%s",&prodotti[i]);

        printf("Prezzo: ");
        scanf("%f",&prezzi[i]);

        printf("Giacenza: ");
        scanf("%d",&giacenze[i]);

    }

    printf("\n\nProdotti in scorta");
    for (i = 0; i < n; i++) //prodotto in scorta
        if (giacenze[i]>=1 && giacenze[i]<=9)
            printf("\nProdotto: %s, Prezzo: %.2f, Giacenza: %d", prodotti[i], prezzi[i], giacenze[i]);

    printf("\n\nProdotti esauriti");
    for (i = 0; i < n; i++) //prodotto esaurito
        if (giacenze[i]==0)
            printf("\nProdotto: %s, Prezzo: %.2f, Giacenza: %d", prodotti[i], prezzi[i], giacenze[i]);   

    printf("\n\nProdotto con prezzo max: ");
    float max = prezzi[0];
    int posMax = 0;
    for (i = 1; i < n; i++)
        if(prezzi[i]>max){
            max = prezzi[i];
            posMax = i;
        }
        
    printf("\nProdotto: %s, Prezzo: %.2f, Giacenza: %d", prodotti[posMax], prezzi[posMax], giacenze[posMax]);

}