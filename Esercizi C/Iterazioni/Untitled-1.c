/*
Dati in input N numeri interi, stabilire il max.
Visualizzare i risultati
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, nmax = 0, ni;

    do{ 
        printf("Quanti numeri vuoi digitare? ");
        scanf("%d", &n);
        if(n<=0) printf("Errore, digitare un numero positivo");
    }while(n<=0);

    for(int i, i<=n, i++){
         scanf("%d", ni); if(ni>nmax) nmax=n;
    }
       
}