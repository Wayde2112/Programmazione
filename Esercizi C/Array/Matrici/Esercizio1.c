/*
Generare 10 numeri casuali da 0 a 100 e memorizzarli su un array. Visualizzare i numeri generati. 
Contare e stampare i multipli di 11 con relativa posizione.
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include "C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C\myLibs\myLibrary.h"

#define LENGTH 10  
#define INF 0
#define SUP 100
#define NCERCARE 11

int main(){

    srand(time(NULL));

    int i, numeri[LENGTH], count=0, n;

    for (i = 0; i < LENGTH; i++)
    {
        numeri[i]=casuale(INF, SUP);
    }

    printf("Numeri generati:");
    stampaArray(numeri, LENGTH);

    contaMultipliN(numeri, NCERCARE);
    stampaMultipliN(numeri, NCERCARE);
   

}