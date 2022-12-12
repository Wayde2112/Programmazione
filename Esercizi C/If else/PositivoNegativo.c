/*
Dati in input: - un numero intero;
Stabilire se è positivo o negativo Visualizzare il suo codice numerico in ASCII
*/

#include <stdio.h>


int main(){
	int n;
	
	printf("Digita un numero: ");
	scanf("%d", &n);
	
	if(n>0) printf("%d e' Positivo", n);
	else printf("\n%d e' Negativo",n);
	
}
