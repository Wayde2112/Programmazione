/*
Dati in input n nomi di persona, stamparli a video
*/

#include <stdio.h>

int main(){
    int n;
    printf("Quanti nomi vuoi inserire?: ");
    scanf("%d", &n);

    char nomi[n][30];
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci un nome: ");
        scanf("%s", &nomi[i]);
    }

    for(i=0;i<n;i++)
        printf("%s\n", nomi[i]);
        
}