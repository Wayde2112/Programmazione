/*
Dati in input: - numero giorno;
Stampare a video il nome giorno a cui si riferisce
*/

#include <stdio.h>
#include <math.h>


int main(){
	int n;

	printf("Scegli tra le seguenti operazioni:\n");
    printf("1: stampa la data di oggi\n");
    printf("2: stampa il nome del giorno di oggi\n");
    printf("3: esci dal programma\n");
	scanf("%d", &n);

    switch (n){
        case 1: printf("Data di oggi: 25/11/2021"); break;
        case 2: printf("Oggi è Giovedi'"); break;
        case 3: printf("Grazie e arrivederci"); break;
        default: printf("ERRORE");
    }

    
}
