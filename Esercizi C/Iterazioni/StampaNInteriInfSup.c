/*
Stampare n numeri interi appartenenti all'intervallo[inf,sup]
es [-10,10] =-10,-9,-8,-7,-6,-5... 9,10
*/

#include <stdio.h>

int main(){

    int count=0, inf,sup;

    printf("Estremo inferiore: ");
    scanf("%d", &inf);
    printf("Estremo superiore: ");
    scanf("%d", &sup);

    printf("[%d,%d] => ", inf, sup);

    while(inf<sup){
        printf("%d, ", inf);
        inf++;
    }
    printf("%d", inf);

}