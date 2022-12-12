/*
Dati in input: - un numero intero;
Stabilire se è pari o dispari 
*/

#include <stdio.h>


int main(){
	int n;
	
	printf("Digita un numero: ");
	scanf("%d", &n);
	
	int r = n%2;
	
	if(r==0) printf("%d e' Pari", n);
	else printf("\n%d e' Dispari",n);
	
}
