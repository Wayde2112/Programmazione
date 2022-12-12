#include <stdlib.h>
#include <math.h>
#include <time.h>

int casuale(int inf, int sup){
    return rand()%(sup-inf+1)+inf;
}

int generaPin(){
    return rand()%10;
}

void stampaArray(int v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++)
    {
        printf("\n%d: %d", i, v[i]);
    }
}

int ricercaArray(int v[], int dimensione, int elemento){
    int i;
    for (i = 0; i < dimensione; i++)
        if(v[i]==elemento)
            return i; //trovato
    return -1; //non trovato
            
}

int ricercaMultipliN(){
    
}

int dado(int nF){
    
    if(nF<4 || nF>53)
        return 0;
    
    return rand()%nF+1;
}