/*
Riempire una matrice di numeri interi generati casualmente
Stampare il risultato
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include "C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C\myLibs\myLibrary.h"

#define RIGHE 10
#define COLONNE 7

int main(){

    srand(time(NULL));

    int matrice[RIGHE][COLONNE];

    int i,j;
    int inf=-100, sup=100;
    for (i = 0; i < RIGHE; i++)
        for (j = 0; i < COLONNE; j++)
            matrice[i][j]=casuale(inf,sup);

    for (i = 0; i < RIGHE; i++){
        for (j = 0; i < COLONNE; j++)
            printf("%d\t",matrice[i][j]);
        printf("\n");
    }    
    
    
}
