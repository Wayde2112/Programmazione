/*
Dati in input: - 2 numeri interi;
Stamparli in ordine crescente
*/

#include <stdio.h>


int main(){
	int n1,n2;
	
	printf("Digita il primo numero: ");
	scanf("%d", &n1);
	printf("Digita il secondo numero: ");
	scanf("%d", &n2);
	
	
	
	if(n1>n2) printf("%d %d", n2,n1);
	else printf("\n%d %d",n1, n2);
	
}
