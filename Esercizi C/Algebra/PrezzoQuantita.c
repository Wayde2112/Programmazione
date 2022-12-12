#include <stdio.h>

/*
Dati in input: - Prezzo; - Quantità di acquisto di un prodotto;
Calcolare il totale da pagare e visualizzare il risultato.
*/

int main(){
	float prezzo;
	int quantita;
	
	printf("Prezzo: ");
	scanf("%f", &prezzo);
	printf("Quantita' di acquisto: ");
	scanf("%d", &quantita);
	
	float totale = prezzo*quantita;
	printf("\nTotale: %.2f.", totale);
	
}
