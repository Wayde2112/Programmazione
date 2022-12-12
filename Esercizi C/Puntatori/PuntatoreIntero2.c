#include <stdio.h>

int main(){
    int numeri[5] = {12,2,3,4,5};

    int *p;

    p=numeri;

    int i;
    for (i = 0; i < 5; i++){
        printf("\nUso puntatore => valore: %d, indirizzo di memoria: %d", *p, p);
        p++;
    }
    
}