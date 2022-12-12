/*
Ordinamento di un array di numeri interi
Crescente o Decrescente

Algoritmo; Selection sort

Array: 12 3 4 1
Array (crescente): 1 3 4 12
Array (decrescen): 12 4 3 1
*/

#include <stdio.h>

#define LENGTH 4

void stampa(int v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++)
        printf("%d ", v[i]);
}

void scambio(int *x, int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

void ordinaArrayCrescente(int v[], int dimensione){
    int i,j;
    for(i=0;i<dimensione;i++){
        for(j=i+1;j<dimensione;j++)
            if(v[i]>v[j])
                scambio(&v[i],&v[j]);
        printf("\n%d: ", i);
        stampa(v,dimensione);    
    }
}

void ordinaArrayDecrescente(int v[], int dimensione){
    int i,j;
    for(i=0;i<dimensione-1;i++){
        for(j=i+1;j<dimensione;j++)
            if(v[i]<v[j])
                scambio(&v[i],&v[j]);
        printf("\n%d: ", i);
        stampa(v,dimensione);    
    }
}

int main(){
    int numeri[LENGTH] = {12,3,4,1};

    stampa(numeri, LENGTH);
    ordinaArrayCrescente(numeri,LENGTH);
    printf("\n\nArray dopo l'ordinamento\n");
    stampa(numeri, LENGTH);

    ordinaArrayDecrescente(numeri,LENGTH);
    printf("\n\nArray dopo l'ordinamento decrescente\n");
    stampa(numeri,LENGTH);
}