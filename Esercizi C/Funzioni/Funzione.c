/*
Dati in input: 2 n interi
utilizzare la funzione somma per calcolare la somma dei due numeri e stampare il risultato
*/

#include <stdio.h>

int somma(int n1, int n2){
    int ris=n1+n2;
    return ris;
}

int main(){
    int a, b;

    printf("Inserisci un numero intero: "); scanf("%d", &a);
    printf("Inserisci un numero intero: "); scanf("%d", &b);
    printf("Risultato: %d", somma(a,b));

}
