/*
Dati in input: - Lato di un quadrato;
Calcolare il perimetro, l'area, la diagonale e visualizzare i risultati.
*/

#include <stdio.h>

#include <math.h> //libreria delle funzioni matematiche


int main(){
	float lato;
	
	printf("Lato: ");
	scanf("%f", &lato);
	
	float p = lato*4;
	printf("\nPerimetro: %.2f.", p);
	float a = lato*lato;
	printf("\nArea: %.2f", a);
	float d = lato*sqrt(2);
	printf("\nDiagonale: %.2f", d);
	
}
