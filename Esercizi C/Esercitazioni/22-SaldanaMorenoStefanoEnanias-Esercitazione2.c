/*
    Alunno: 22 - Stefano Enanias Saldana Moreno
    Data: 10/01/2022
    Durata: 2 ore
    Testo Esercitazione: Creare una matrice di numeri interi con dimensione generata casualmente e appartenente all'intervallo [10,50]. 
                         Il riempimento dei contenitori è casuale e tutti i numeri generati appartengono all'intervallo [inf,sup], con inf e sup inseriti da input.

                         Si richiedono le seguenti operazioni:

                         1.   Stampare le somme orizzontali e verticali
                         2.   Stampare le medie verticali e orizzontali

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define INF 10
#define SUP 50

int casuale(int inf, int sup){ //genera numeri casuali
    return rand()%(sup-inf+1)+inf;
}

int main(){
    
    srand(time(NULL));

    int righe=casuale(INF, SUP);
    int colonne=casuale(INF, SUP);
    int matrice[righe][colonne];
    
    int i,j;

    int inf, sup;
    printf("Digitare estremo inferiore: ");
    scanf("%d", &inf);

    printf("Digitare estremo superiore: ");
    scanf("%d", &sup);

    printf("\n\n");  //questo e il prossimo servono per dare un po' più di ordine.

    for (i = 0; i < righe; i++) //riempimento matrice
        for (j = 0; j < colonne; j++)
            matrice[i][j]=casuale(inf, sup);
    
    for (i = 0; i < righe; i++){ //stampa matrice
        for (j = 0; j < colonne; j++)        
            printf("%d  ", matrice[i][j]);
        printf("\n");
    }

    printf("\n\n"); 

    int sommaV=0, sommaO=0;
    float mediaV=0, mediaO=0;

    
    for(j=0; j<colonne; j++){ //somma i numeri verticali
        for(i=0; i<righe; i++)
            sommaV+=matrice[i][j];
        printf("Somma colonna %d: %d\n", j, sommaV);
        sommaV=0;
    }

    printf("\n\n"); 

    for(i=0; i<righe; i++){ //somma i numeri orizzontali
        for(j=0; j<colonne; j++)
            sommaO+=matrice[i][j];
        printf("Somma riga %d: %d\n", i, sommaO);
        sommaO=0;
    }

    printf("\n\n"); 
        
    for(j=0; j<colonne; j++){ //fa la media dei numeri verticali
        for(i=0; i<righe; i++)
            sommaV+=matrice[i][j];
        printf("Media colonna %d: %.2f\n", j, (float)sommaV/righe);
        sommaV=0;
        mediaV=0;
    }

    printf("\n\n");      

    for(i=0; i<righe; i++){ //fa la media dei numeri orizzontali
        for(j=0; j<colonne; j++)
            sommaO+=matrice[i][j];
        printf("Media riga %d: %.2f\n", i, (float)sommaO/righe);
        sommaO=0;
        mediaO=0;
    }

}