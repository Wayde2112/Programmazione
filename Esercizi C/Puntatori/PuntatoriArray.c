/*
    Dato un array di numeri interi, precaricato in memoria,
    creare una funzione di stampaArray con uso dei puntatori
    per stampare i valori memorizzati nell'array
*/

#include <stdio.h>

void stampaArray(int *array, int dimensione){
    int i = 0;
    for (i = 0; i < dimensione; i++){
        printf("%d, ", *array);
        array++;
    }
    
}

int main(){

    int numeri[5] = {12,23,34,45,56};

    // Passo la locazione di memoria del primo elemento dell'array numeri
    stampaArray(&numeri[0], 5);
    
}