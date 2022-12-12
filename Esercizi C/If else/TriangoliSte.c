/*
Dati in input: - 3 numeri interi che rappresentano la lunghezza dei lati;
Stampare a video uno dei seguenti messaggi:
Equilatero, isoscele, Scaleno 
*/

#include <stdio.h>
#include <math.h>


int main(){
	int l1,l2,l3;
	
	printf("Digita la lunghezza del primo lato: ");
	scanf("%d", &l1);
	printf("Digita la lunghezza del secondo lato: ");
	scanf("%d", &l2);
	printf("Digita la lunghezza del terzo lato: ");
	scanf("%d", &l3);
	
	
	
	
	
	
	
		if(l1==l2 && l2==l3) printf("Triangolo Equilatero");
        else if(l1==l2 || l2==l3 ||l3==l1) printf("triangolo isoscele");
         else printf("Triangolo scaleno");

			
	
	return 0;
}
