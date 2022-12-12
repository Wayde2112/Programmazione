#include <stdio.h>

/*
Testo del problema: 
- Dati in input: due numeri interi
- Calcolare il quoziente intero, il resto e il quoziente reale
- Visualizzare tutti i risultati
*/

int main(){
	int a, b, sqi, sr;
	float sqr;
	
	printf("Dividendo: ");
	scanf("%d", &a);
	printf("Divisore: ");
	scanf("%d", &b);
	
	sqi=a/b;
	printf("\nQuoziente intero: %d/%d=%d",a,b,sqi);
	sr=a%b;
	printf("\nResto: %d/%d=%d",a,b,sr);
	sqr=(float)a/b;
	printf("\nQuoziente reale: %d/%d=%f",a,b,sqr);
}
