/*
Dati in input: - giorno, mese, anno;
Stampare a video il giorno se è sono valori accettati:
*/

#include <stdio.h>
#include <math.h>


int main(){
	int g,m,a;

	printf("Digita il giorno: ");
	scanf("%d", &g);
    if(g<1 || g>31 || m<1 || m>12 || a<1582) printf("ERRORE");
    printf("Digita il mese: ");
    scanf("%d", &m);

	printf("Digita l'anno: ");
    scanf("%d", &a);

    
    

	return 0;
}
