/*
Stampare i primi 10 numeri interi positivi
es 0,1,2,...
*/

#include <stdio.h>

int main(){

    int count=0;

    printf("Stampa 100 numeri pari interi positivi\n\n");

    while(count<10000000){
        printf("%d\n", count*2);
        count++;
    }

}