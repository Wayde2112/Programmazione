/*

1
12
123
1234
12345
123456
1234567

*/

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){

    int n;
    printf("Numero di righe: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) printf("%d", j);
        printf("\n");
    }

}