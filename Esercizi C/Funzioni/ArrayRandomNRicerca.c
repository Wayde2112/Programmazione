#include <stdio.h>
#include <math.h>
#include <time.h>

int casuale(int inf, int sup){
    return rand()%(sup-inf+1)+inf;
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

int main(){
    int n;
    printf("Numeri da generare: ");
    scanf("%d", &n);

    int inf;
    printf("Inf: ");
    scanf("%d", &inf);

    int sup;
    printf("Sup: ");
    scanf("%d", &sup);

    int numeri[n];

    int i;
    for (i = 0; i < n; i++)
    {
        numeri[i]=casuale(inf,sup);
    }

    int nCercare;
    printf("Numero da cercare: ");
    scanf("%d", &nCercare);

    int pos=ricercaArray(numeri, n, nCercare);
    
    if (pos==1)
    {
        printf("\n%d non trovato", nCercare);
    }
    else
    {
        printf("\n%d trovato in posizione: %d", nCercare, pos);
    }

    printf("\n\nStampa dell'array");
    stampaArray(numeri,n);
    
    
    
    
    
}