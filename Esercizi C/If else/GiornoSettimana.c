/*
Dati in input: - numero giorno;
Stampare a video il nome giorno a cui si riferisce
*/

#include <stdio.h>
#include <math.h>


int main(){
	int g;

	printf("Digita il giorno: ");
	scanf("%d", &g);

    if(g<0 || g>6) printf("ERRORE");
    else if (g==0) printf("Lunedì");
    else if (g==1) printf("Martedì");
    else if (g==2) printf("Mercoledì");
    else if (g==3) printf("Giovedì");
    else if (g==4) printf("Venerdì");
    else if (g==5) printf("Sabato");
    else printf("Domenica");
	return 0;
}
