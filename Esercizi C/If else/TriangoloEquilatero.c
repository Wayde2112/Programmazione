/*
Dati in input: - 3 numeri interi che rappresentano la lunghezza dei lati;
Stampare a video uno dei seguenti messaggi:
Equilatero, isoscele, Scaleno
*/

#include <stdio.h>
#include <math.h>


int main(){
	double l1,l2,l3;
	
	printf("Digita la lunghezza del primo lato: ");
	scanf("%lf", &l1);
	printf("Digita la lunghezza del secondo lato: ");
	scanf("%lf", &l2);
	printf("Digita la lunghezza del terzo lato: ");
	scanf("%lf", &l3);
	
	
	
	
	
	
	
		if(l1==l2 && l2==l3) printf("Triangolo Equilatero");
			else printf("Non e' un triangolo equilatero");
			else printf ("Non e' un triangolo equilatero"); 
	}  
	else printf("\nNon e' un triangolo equilatero");
	return 0;
}
