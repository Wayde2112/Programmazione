/*
Stampare n numeri interi dispari positivi
es 0,1,2,...
*/

#include <stdio.h>

int main(){

    int count=0,n;

    printf("Quanti numeri interi dispari positivi vuoi stampare?");
    scanf("%d", &n);

    while(count<n){
        printf("%d\n", count*2+1);
        count++;
    }

}