/*
Dati in input: - giorno, mese, anno;
Stampare a video il giorno se è sono valori accettati:
*/

#include <stdio.h>
#include <math.h>


int main(){
	int g;

	printf("Digita il giorno: ");
	scanf("%d", &g);

    printf("Digita il mese: ");
    scanf("%d", &m);

	printf("Digita l'anno: ");
    scanf("%d", &a);

    if(g<1 || g>31 || m<1 || m>12 || a<1582) printf("ERRORE");
    else if((m==4 || m==6 || m==9 || m==11) && g==31) printf("ERRORE");
    else if(m==2 && g>29) printf("ERRORE");
    else if (m==2 && a%100!=0 && a%4!=0 && g==29) printf("ERRORE");
    else if (m==2 && a%100==0 && a%400!=0 && g==29) printf("ERRORE");

    else printf("Data digitata %d/%d/%d", g,m,a);

	return 0;
}
