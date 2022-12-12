/*
Dati in input: - ora, minuti e secondi;
Stampare a video l'ora se è sono valori accettati:
*/

#include <stdio.h>
#include <math.h>


int main(){
	int h,m,s;
	
	printf("Digita l'ora: ");
	scanf("%d", &h);
    if(h>=0 && h<=23){
        printf("Digita i minuti: ");
        scanf("%d", &m);
        if(m>=0 && m<=59){
            printf("Digita i secondi: ");
            scanf("%d", &s);
            if(s>=0 && s<=59) printf("Ora digitata %d:%d:%d", h,m,s);
        }
        else printf("ERRORE");
    }
    else printf("ERRORE"); 

	return 0;
}
