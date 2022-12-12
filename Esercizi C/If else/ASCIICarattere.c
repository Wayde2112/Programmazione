/*
Dati in input: - un numero;
Visualizzare il suo carattere
*/

#include <stdio.h>

#include <math.h> //libreria delle funzioni matematiche


int main(){
	int n;
	
	printf("Digita un numero[32-127]: ");
	scanf("%d", &n);
	
	char c = (char)n;
	printf("\nCarattere ASCII: %c", c);
	
}
