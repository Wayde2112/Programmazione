/*
Dati in input: - un carattere;
Visualizzare il suo codice numerico in ASCII
*/

#include <stdio.h>

#include <math.h> //libreria delle funzioni matematiche


int main(){
	char c;
	
	printf("Digita un carattere: ");
	scanf("%c", &c);
	
	int n = (int)c;
	printf("\nCodice numerico ASCII: %d", n);
	
}
