/*

1234567
 123456
  12345
   1234
    123
     12
      1

1234567
123456
12345
1234
123
12
1
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

    for(int i=0; i<n; i++){
        for(int k=1; k<=i; k++) printf(" ");
        for(int j=1; j<=n-i; j++){
            printf("%d", j);
            
        } printf("\n");           
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) printf("%d", j);
        printf("\n");
    }

    printf("\n");

    for(int i=0; i<=n; i++){
        for(int j=1; j<=n-i; j++) printf("%d", j);
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int k=1; k<=n-i-1; k++) printf(" ");
        for(int j=1; j<=i+1; j++){
            printf("%d", j);
            
        } printf("\n");           
    }

    

}