/*

Visualizzare le tavole delle tabelline pitagoriche

*/

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    int n;

    printf("Inserisci il numero di cui vuoi visualizzare la tabellina pitagorica: ");
    scanf("%d", &n);

    for(int i=0; i<=10; i++) printf("%d\t",n*i);

    return 0;   
}