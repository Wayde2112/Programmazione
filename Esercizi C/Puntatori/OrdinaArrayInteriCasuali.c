/*
Riempire un array di numeri casali [1-100]
Stampare in ordine Crescente e decrescente
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include "C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C\myLibs\myLibrary.h"


#define LENGTH 4

int main(){
    
    srand(time(NULL));

    int numeri[LENGTH];

    caricaArray(numeri, LENGTH);

    printf("Stampa array generato: ");
    stampa(numeri, LENGTH);

    printf("Stampa Array Crescente: ");
    ordinaArrayCrescente(numeri,LENGTH);
    printf("\n\n");

    printf("Stampa Array Decrescente: ");
    ordinaArrayDecrescente(numeri, LENGTH);
    printf("\n\n");
}