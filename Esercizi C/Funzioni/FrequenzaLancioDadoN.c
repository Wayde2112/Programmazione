/*
Visualizzare la frequenza delle uscite di un dado a 6 facce. (in %) stabilire il lancio di dati
*/

#include <stdio.h>
#include <math.h>
#include <time.h>

int dado(int nF){
    
    if(nF<4 || nF>53)
        return 0;
    
    return rand()%nF+1;
}

int main(){

    srand(time(NULL));

    int nLanci, nFacce, uscite[nFacce], uscita;

    printf("Quanti lanci vuoi effettuare?");
    scanf("%d", &nLanci);

    printf("Quante facce ha il dado?");
    scanf("%d", &nFacce);

    for (int i = 0; i < nFacce; i++)
    {
        uscite[i]=0;
    }
    

    for (int i = 0; i < nLanci; i++)
    {
        uscita = dado(nFacce);
        uscite[uscita-1]++;
        
    }

    printf("\n\nRisultato delle uscite:");

    for (int i = 0; i < nFacce; i++)
    {
        printf("\n%d: %d", i+1, uscite[i]);
    }

    printf("\n\nFrequenza delle uscite:");

    for (int i = 0; i < nFacce; i++)
    {
        printf("\n%d: %.2f", i+1, (float)uscite[i]/nLanci*100);
    }

    
    
}