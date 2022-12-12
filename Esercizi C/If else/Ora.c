/*
Dati in input: - un numero intero che rappresenta l'ora;
Stampare a video uno dei seguenti messaggi:
Buongiorno 6-14, buon pomeriggio 14-18, buona sera 18-22, buonanotte 22-00/0-6
*/

#include <stdio.h>


int main(){
	int h;
	
	printf("Digita l'ora: ");
	scanf("%d", &h);
	if(h<0) printf("Errore");
	else if(h>23) printf("Errore");
	else if(h<6) printf("Buonanotte");
	else if(h<14) printf("Buongiorno");
	else if(h<18) printf("Buon Pomeriggio");
	else if(h<22) printf("Buona Sera");
	else if(h<24) printf("Buonanotte");
	
	
}
