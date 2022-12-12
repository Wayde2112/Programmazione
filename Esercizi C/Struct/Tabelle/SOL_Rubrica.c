#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[30];
	char cognome[30];
	char cellulare[30];
	char email[30];
}contatto;

void stampaContatto(contatto c){
	printf("%s %s - Tel: %s, Email: %s",c.cognome,c.nome,c.cellulare,c.email);
}

void stampaElenco(contatto elenco[],int dimensione){
	
	int i;
	for(i=0;i<dimensione;i++){
		stampaContatto(elenco[i]);
		printf("\n");
	}
}

void stampaElencoRicerca(contatto elenco[], int dimensione, char iniziale){
	
	int i;
	for(i=0;i<dimensione;i++)
		if(toupper((int)elenco[i].cognome[0])==toupper((int)iniziale)){
			stampaContatto(elenco[i]);
			printf("\n");
		}
}


int main(){
	
	contatto rubrica[10]={
	{"Renato","Robusto","3383945789","rena.to@uniin.com"},
	{"Alberto","Arbusto","339450001","alber.to@uniin.com"},
	{"Antonio","Colistra","3383945789","an.to@uniin.com"},
	{"Riccardo","Cardilli","338123456","ricca.to@uniin.com"},
	{"Davide","Disguido","3383945789","dav.to@uniin.com"},
	{"Giuseppe","Passerotto","3383945789","pino.to@uniin.com"},
	{"Dario","Pierobon","33811144556","pier.to@uniin.com"},
	{"Angela","Giudice","3378945631","angela.to@uniin.com"},
	{"Mariella","Dircarlo","3384455896","maricarlo.to@uniin.com"},
	{"Caterina","Romualdi","3311111456","romu.to@uniin.com"}
	};
	
	printf("Elenco della rubrica\n");
	stampaElenco(rubrica, 10);
	
	char c;
	printf("\n\nInserisci l'iniziale da cercare: ");
	scanf("%c",&c);
	
	printf("\n\nElenco della rubrica per la ricerca eseguita\n");
	stampaElencoRicerca(rubrica,10,c);	
}
