#include <stdio.h>

void caricaArray(int v[], int dimensione){

    int i;
    for (i = 0; i < dimensione; i++)
        scanf("%d", &v[i]);
}

int sommaD (int v[], int dimensione, int pos){
    int somma = 0;
    int i;
    for (i = pos; i < dimensione; i++)
        somma += v[i];
    return somma;
}

int confrontaSomme (int v[], int dimensione, int dimensioneD, int somma, int somma2, int pos){
    int i;
    for (i = 1; i < dimensione-1; i++){
        somma2 = sommaD(v, dimensioneD+i, i);
        if (somma > somma2){
            somma = somma2;
            pos = i;
        }      
    }
    return pos;
}

int main(){

    int D, N, d = 0;

    scanf("%d", &D);

    scanf("%d", &N);

    if (D > N || D < 0 || D > 10000 || N < 0 || N > 10000)
        printf("impossible");
        
    else {
        int dOps[N];
        int i = 0;

        caricaArray(dOps, N);

        int somma = sommaD(dOps, D, i);
        int somma2 = 0;

        d = confrontaSomme(dOps, N, D, somma, somma2, d);
        printf("%d", d+1);
    }
}