/*
10 random [interval in input] 

uscita: 5
trovato 3 volte e il primo è nella posizione "2"
Trovato o non trovato? e in che posizione

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int generaNumeri(int inf, int sup){
    int n;
    do
    {
        n = rand()%(sup+1);
    } while (inf<sup);
    return n;    
}

int main(){

    

    int nDigitati, nIntervalloInf, nIntervalloSup, i, n, aNumeri[nDigitati];;
    srand(time(NULL));
    printf("Quanti numeri voglio digitare?");
    scanf("%d", &nDigitati);

    printf("In quale intervallo devo generarli? es. [0-10]\n");
    scanf("%d - %d", &nIntervalloInf, &nIntervalloSup);

    for (i = 0; i < nDigitati; i++)
    {
        n = generaNumeri(nIntervalloInf, nIntervalloSup);
        aNumeri[n-1]++;
    }


    

    
    
}