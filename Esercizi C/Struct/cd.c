/*
Si consideri un CD musicale. 

Tramite menu fornire la possibilità di far eseguire una delle seguenti richieste:

Visualizzare l'elenco completo dei brani del CD, comprensivo di posizione, nome del brano e durata (data in secondi e con format in hh:mm:ss)
Visualizzare i dati del compact disk es. artista, casa discografica, prezzo
Visualizzare un brano scelto tramite la sua posizione
Visualizzare la durata totale del CD  (format in hh:mm:ss)
Visualizzare il numero di brani presenti
*/


#include <stdio.h>
#include <string.h>
#define NUMEROBRANI 10

typedef struct{
	char artista[20];
	char album[20];
	char casaDiscografica[20];
	float prezzo;
}cd;

typedef struct{
	int posizione;
	char nomeBrano[20];
	int durataSecondi;
}brano;

int menu(){
	int scelta;
	system("cls");
	printf ("Menu\n");
	printf ("1)Visualizza elenco completo brani\n");
	printf ("2)Visualizza dati del cd\n");
	printf ("3)Visualizza brano scelto\n");
	printf ("4)Visualizza durata totale cd\n");
	printf ("5)Visualizza il numero di brani presenti\n");
	printf ("0)Fine\n");
	printf ("Effettua 'na scelta: ");
	scanf ("%d",&scelta);
	system("cls");
	return scelta;
}

char durataBrano(brano br){
	int h=br.durataSecondi/3600;
	int m=(br.durataSecondi%3600)/60;
	int s=(br.durataSecondi%3600)%60;
	char ora[10], minuti[10],secondi[10];
	itoa(h,ora,10);
	itoa(m,minuti,10);	
	itoa(s,secondi,10);
	strcat((ora,minuti),secondi);
	printf ("%s",ora);
    char durata[15];
    durata[1] = strcat(ora,":");
    durata[1] = strcat(minuti,":");
    durata[1] = strcat(ora,":");
    return durata;
}

void stampaBrano(brano br){
	printf ("%d: %s, durata: %s\n",br.posizione,br.nomeBrano,br.durataSecondi);
}

void stampaElencoBrano(brano br[]){
	int i;
	for (i=0; i<NUMEROBRANI; i++)
		stampaBrano(br[i]);
}

int main (){
	
	cd compactDisk[1]={"Artista","Album","Discografica",12.99};
	
	brano canzone[NUMEROBRANI]={
	{1,"Brano1",500},
	{2,"Brano2",560},
	{3,"Brano3",600},
	{4,"Brano4",752},
	{5,"Brano5",874},
	{6,"Brano6",466},
	{7,"Brano7",588},
	{8,"Brano8",599},
	{9,"Brano9",785},
	{10,"Brano10",698}
	};
	
	
	
	


	int uscitaMenu=-1;
	
	do{
		switch(menu()){
			default: printf ("Riprova"); getch(); break;
			case 0: printf ("Fine"); uscitaMenu=0; break;
			case 1: stampaElencoBrano(canzone); getch(); break;
			
		}
	}while(uscitaMenu!=0);


	
	
}