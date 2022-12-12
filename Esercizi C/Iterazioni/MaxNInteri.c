/*
Dati in input N numeri interi, stabilire il max.
Visualizzare i risultati
*/

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    int n, nmax = INT_MIN, ni;

    do{ 
        printf("Quanti numeri vuoi digitare? ");
        scanf("%d", &n);
        if(n<=0) printf("Errore, digitare un numero positivo\n\n");
    }while(n<=0);

    for(int i=0; i<n; i++){
        scanf("%d", &ni); 
        if(ni>nmax) nmax=ni;
    }

    printf("Max %d", nmax);

     return 0;   
}