/*

Visualizzare le tavole delle tabelline pitagoriche

*/

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    int n;

    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            /*if(i*j<10 || i*j<100) printf(" ");*/
            printf("%4.d\t",j*i); 
        }  
        printf("\n");
    }
        

    return 0;   
}