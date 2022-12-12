/*
Dati in input: - 2 numeri interi;
Stampare il maggiore
*/

#include <stdio.h>


int main()
{
	int n1, n2;
	printf("digita primo numero: ");
	scanf("%d", &n1 );
	printf("digita secondo numero: ");
	scanf("%d", &n2);
	if (n1>n2) 
	printf("%d è maggiore",n1);
	else printf("%d è minore",n1 );
	
}
