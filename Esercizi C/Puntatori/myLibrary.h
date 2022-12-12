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

int contaMultipliN(int v[], int n){
    int i, count;
    for (i = 0; i < n; i++)
    {
        if (v[i]%n==0)
            count++;
        printf("\n\nMultipli di %d: %d", n, count);
        
    }
    
}

int stampaMultipliN(int v[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        if (v[i]%n==0)
            printf("\n%d: %d", i, v);
        
    }
}

void scambio(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int dado(int nF){
    
    if(nF<4 || nF>53)
        return 0;
    
    return rand()%nF+1;
}

void stampaRigheColonne(int n1, int n2, char c){
    int i,j;
    if(n2==0) 
        n2==1;
    for(i=0; i<n2; i++){
        for(j=0; j<n1; j++)
            printf("%c", c);
        printf("\n");
    }
}