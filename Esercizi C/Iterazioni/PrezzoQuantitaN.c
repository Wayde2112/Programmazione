/*
Testo: Stampare il totale da pagare, 
il numero di pezzi totali acquistati di un carrello della spesa.
*/

#include <stdio.h>

int main(){
	
	int n;
	printf("inserisci quanti prodotti vuoi inserire: ");
	scanf("%d",&n);
	
	int i, quantita, contaPezzi=0;
	float prezzo, somma=0;
	
	for(i=0;i<n;i++){
		printf("Inserisci il prezzo del prodotto: ");
		scanf("%f",&prezzo);
		
		printf("Inserisci la quantita' di acquisto del prodotto: ");
		scanf("%d",&quantita);
		
		somma += prezzo*quantita;
		contaPezzi += quantita;
	}
	
	printf("\nTotale: %.2f",somma);
	printf("\nPezzi acquistati: %d",contaPezzi);
	
}