/*
Dati in input: - Imponibile;
Calcolare l'iva(22%) e il totale da pagare e visualizzare i risultati.
*/

#include <stdio.h>
#include <math>

#define IVA 22 //direttiva che mi consente di definire le costanti

int main(){
	float imp;
	int iva=22;
	
	printf("Imponibile: ");
	scanf("%f", &imp);
	
	float totIva = imp*IVA/100;
	printf("\nIva: %.2f.", totIva);
	float totale = imp+totIva;
	printf("\nTotale da pagare: %.2f", totale);
	
}
