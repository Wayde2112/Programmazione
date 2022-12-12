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
	
	double ls12 = l1+l2; double ld12 = abs(l1-l2);
	double ls23 = l2+l3; double ld23 = abs(l2-l3);
	double ls13 = l1+l3; double ld13 = abs(l1-l3);
	
	
	
	
	if(l1<ls23 && l1>abs(l2-l3)){
		printf("\nE' un ");
		if(l1==l2 && l2==l3) printf("Triangolo Equilatero");
			else if (l1==l2 || l2==l3 || l1==l3) printf("Triangolo Isoscele");
			else printf ("Triangolo Scaleno"); 
	}  
	else printf("\nNon e' un triangolo");
	return 0;
}
