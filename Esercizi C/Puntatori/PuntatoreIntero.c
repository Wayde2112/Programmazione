/*
Uso dei puntatori
*/
#include <stdio.h>

void incremento(int *a){
    *a=*a+1;
}

int main(){
    int x=0;

    printf("prima -> x: %d\n\n", x);
    incremento(&x); //f. che usa il puntatore - passaggio di parametri per riferimento
    
    printf("dopo -> x: %d\n\n", x);
}