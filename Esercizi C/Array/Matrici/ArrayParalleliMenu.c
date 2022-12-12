/*
Sono precaricati 10 prodotti di cui si conosce il nome, il prezzo e la giacenza.
Creare un menu  per scegliere tra le seguenti opzioni:
1 - visualizza i prodotti in scorta
2 - visualizza i prodotti esauriti
3 - visualizza il prodotto con prezzo max
4 - visualizza il prodotto con giacenza > 100 pezzi
0 - esci

NOTA: si faccia uso degli array paralleli (stessa dimensione)
*/
#include <stdio.h>

#define LENGTH 30
#define NO_PRODOTTI 10

int main(){
		
	//array paralleli precaricati
	char prodotti[NO_PRODOTTI][LENGTH]={"Mouse1","Tastiera1","Monitor1","Scheda Madre1","Scheda video1","Mouse2","Tastiera2","Monitor2","Scheda Madre2","Scheda video2"} ;
	float prezzi[NO_PRODOTTI]={12.75,15.25,125.25,110.15,75.75,11.75,12.25,115.25,100.15,55.75};
	int giacenze[NO_PRODOTTI]={1,2,8,15,96,0,0,6,103,11};
			
	int n;
	
	do{
	
	printf("\n\nScegli tra le seguenti opzioni:");
	printf("\n1 - visualizza i prodotti in scorta");
	printf("\n2 - visualizza i prodotti esauriti");
	printf("\n3 - visualizza il prodotto con prezzo max");
	printf("\n4 - visualizza il prodotto con giacenza > 100 pezzi");
	printf("\n0 - esci");
		
	printf("\n\nScelta: ");
	scanf("%d",&n);
	
	int i;
	
	switch(n){
		case 0: break;
		case 1: {
			//prodotti in scorta
			//prodotto in scorta quando la giacenza � [1,9]
			printf("\n\nProdotti in scorta");
			for(i=0;i<NO_PRODOTTI;i++)
				if(giacenze[i]>=1 && giacenze[i]<=9)		
					printf("\nProdotto: %s, Prezzo: %.2f, Giacenza: %d",prodotti[i],prezzi[i],giacenze[i]);
			break;
		}
		case 2: {
			//prodotto esaurito quando la giacenza � zero
			printf("\n\nProdotti esauriti");
			for(i=0;i<NO_PRODOTTI;i++)
				if(giacenze[i]==0)		
					printf("\nProdotto: %s, Prezzo: %.2f, Giacenza: %d",prodotti[i],prezzi[i],giacenze[i]);
			break;
		}
		case 3: {
			//prodotto con prezzo max
			printf("\n\nProdotto con prezzo max");
			float max=prezzi[0];
			int posMax=0;
			for(i=1;i<NO_PRODOTTI;i++)
				if(prezzi[i]>max){
					posMax=i;
					max=prezzi[i];			
				}	
			printf("\nProdotto: %s, Prezzo: %.2f, Giacenza: %d",prodotti[posMax],prezzi[posMax],giacenze[posMax]);
			break;
		}
		case 4: {
			printf("\n\nProdotti con giacenza > 100 pezzi");
			for(i=0;i<NO_PRODOTTI;i++)
				if(giacenze[i]>100)		
					printf("\nProdotto: %s, Prezzo: %.2f, Giacenza: %d",prodotti[i],prezzi[i],giacenze[i]);
			break;
		}
		default: printf("\n\nErrore! Dati inseriti non validi!");
		}		
	}while(n!=0);
	
	printf("\n\nProgramma terminato!");
}