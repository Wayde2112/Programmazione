/*
Dati in input: - Raggio di un cerchio;
Calcolare la circonferenza, l'area, il diametro e visualizzare i risultati. Pigreco = M_PI
*/

#include <stdio.h>

#include <math.h> //libreria delle funzioni matematiche


int main(){
	double r;
	
	printf("Raggio: ");
	scanf("%lf", &r);
	
	double c = 2*M_PI*r;
	printf("\nCirconferenza: %.2lf.", c);
	double a = r*r*M_PI;
	printf("\nArea: %.2lf", a);
	double d = r*2;
	printf("\nDiametro: %.2lf", d);
	
}
