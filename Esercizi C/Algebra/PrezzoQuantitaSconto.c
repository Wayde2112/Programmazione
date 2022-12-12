#include <stdio.h>

/*
Dati in input: - Prezzo; - Quantità di acquisto di un prodotto; - Percentuale di sconto;
Calcolare il totale da pagare, sconto effettuato, il totale scontato e visualizzare i risultati.
*/

int main(){
	float prezzo;
	int quantita, percentualeSconto;
	
	printf("Prezzo: ");
	scanf("%f", &prezzo);
	printf("Quantita' di acquisto: ");
	scanf("%d", &quantita);
	printf("Percentuale di sconto: ");
	scanf("%d", &percentualeSconto);
	
	
	float totale = prezzo*quantita;
	printf("\nTotale: %.2f.", totale);
	float sconto = totale*percentualeSconto/100;
	printf("\nSconto effettuato: %.2f", sconto);
	float totaleScontato = totale-sconto;
	printf("\nPrezzo scontato: %.2f", totaleScontato);
	
}
