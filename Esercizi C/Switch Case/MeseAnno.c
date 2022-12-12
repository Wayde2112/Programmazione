/*
Dati in input: - numero giorno;
Stampare a video il nome giorno a cui si riferisce
*/

#include <stdio.h>
#include <math.h>


int main(){
	int g;

	printf("Digita il mese: ");
	scanf("%d", &m);

    switch (m){
        case 1: printf("Gennaio"); break;
        case 2: printf("Febbraio"); break;
        case 3: printf("Marzo"); break;
        case 4: printf("Aprile"); break;
        case 5: printf("Maggio"); break;
        case 6: printf("Giugno"); break;
        case 7: printf("Luglio"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Settembre"); break;
        case 10: printf("Ottobre"); break;
        case 11: printf("Novembre"); break;
        case 12: printf("Dicembre"); break;
        default: printf("ERRORE");
    }

    
}
