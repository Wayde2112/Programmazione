#include <stdio.h>
#include <string.h>

// Struttura per la data
typedef struct {
	int giorno;
	int mese;
	int anno;
}data;

// Struttura per la valutazione
typedef struct{
	char materia[50];
	int voto;
	data dataEsame;
}valutazione;

// Funzione che carica la valutazione
void caricaValutazione(valutazione *v){
	
	printf("Materia: ");
	scanf("%s",&v->materia);
		
	printf("Voto: ");
	scanf("%d",&v->voto);
		
	printf("Data (gg mm aaaa): ");
	scanf("%d %d %d",&v->dataEsame.giorno,&v->dataEsame.mese,&v->dataEsame.anno);
}

// Funzione che crea la stringa della valutazione
void creaStringa(char *txt, valutazione *v){
		char convert[4];
		strcat(txt,v->materia);
		strcat(txt,";");
		itoa(v->voto,convert,10);
		strcat(txt,convert);
		strcat(txt,";");
		itoa(v->dataEsame.giorno,convert,10);
		strcat(txt,convert);
		strcat(txt,"/");
		itoa(v->dataEsame.mese,convert,10);
		strcat(txt,convert);
		strcat(txt,"/");
		itoa(v->dataEsame.anno,convert,10);
		strcat(txt,convert);
		strcat(txt,"\n");
}

// Funzione che scrive e salva la valutazione
void salva(char *file_name, char *mode, char *txt){
	FILE *file;
		file=fopen(file_name,mode);
		fwrite(txt,strlen(txt),1,file);
		fclose(file);
}

// main
int main(){
	
	int n;
	printf("Quante valutazini vuoi inserire? ");
	scanf("%d",&n);
	
	valutazione v;
	
	// Ciclo per scrivere le valutazioni
	int i;
	for(i=0;i<n;i++)
	{
		caricaValutazione(&v);
		
		char txt[50]="";
		creaStringa(txt,&v);
		salva("valutazioni.txt","a",txt);				
	}	
}