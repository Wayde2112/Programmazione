#include <stdio.h>
#include <math.h>

int main(){
    int n, count=1, r, nd = 1;

    printf("Digita un numero: ");
    scanf("%d", &n);

    printf("%d = ", n*n); //se il risultato lo volessi prima

    while(count<abs(n)){
        r+=nd;
        printf("%d+", nd);
        nd+=2;
        count++;
    }
    printf("%d", nd, r+nd);
    
}