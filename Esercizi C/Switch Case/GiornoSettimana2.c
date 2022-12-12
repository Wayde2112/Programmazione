/*
Dati in input: - numero giorno;
Stampare a video il nome giorno a cui si riferisce
*/

#include <stdio.h>
#include <math.h>


int main(){
	int g;

	printf("Digita il giorno: ");
	scanf("%d", &g);

    switch (g){
        case 1: printf("Lunedi'"); break;
        case 2: printf("Martedi'"); break;
        case 3: printf("Mercoledi'"); break;
        case 4: printf("Giovedi'"); break;
        case 5: printf("Venerdi'"); break;
        case 6: printf("Sabato"); break;
        case 7: printf("Domenica"); break;
        default: printf("ERRORE");
    }

    
}
