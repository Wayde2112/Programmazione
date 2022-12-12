/*
Matrici = array bidimensionali

Matrice n*m n=numero di righe, m=numero di colonne

es. m 2*3 2 righe e 3 colonne (MATRICE RETTANGOLARE)

    0   1   2
0: 12   2  -3
1:  0   1   9

M N*M in cui n=m => MATRICE QUADRATA
*/

/*
Stampare la matrice di 2*2 di numeri interi
*/

#include <stdio.h>

int main(){

    int righe = 2;
    int colonne = 2;

    //definizione di una matrice
    int matrice[righe][colonne];

    //caricamento dei dati
    matrice[0][0]=12;
    matrice[0][1]=2;
    matrice[1][0]=1;
    matrice[1][1]=3;

    printf("Stampa di una matrice quadrata (2x2)\n");

    int i,j;
    for (i = 0; i < righe; i++){
        for (j = 0; j < colonne; j++)
        
            printf("%d ", matrice[i][j]);
            
        
        printf("\n");
    }
    
}