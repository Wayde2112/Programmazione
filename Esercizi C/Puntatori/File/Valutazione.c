/*
    Si vogliono salvare su file di testo le valutazioni riportare da uno studente. 
    Di ogni valutazione si conosce la materia, il voto conseguito in trentesimi e la data dell'esame.

    I dati salvati sul file di testo devono avere una forma simile:

    materia;voto;data

    materia;voto;data
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

    int giorno;
    int mese;
    int anno;

}data;

typedef struct{

    char materia[30];
    float voto;
    data data;

}valutazione;

int isDataValida(data unaData){
    //restituisce 0 se ci sono errori
    //restituisce 1 se non ci sono errori

    if(unaData.giorno<1 || unaData.giorno>31 || unaData.mese<1 || unaData.mese>12 || unaData.anno<1582) 
        return 0;
    else if((unaData.mese==4 || unaData.mese==6 || unaData.mese==9 || unaData.mese==11) && unaData.giorno==31) 
        return 0;
    else if(unaData.mese==2 && unaData.giorno>29) 
        return 0;
    else if (unaData.mese==2 && unaData.anno%100!=0 && unaData.anno%4!=0 && unaData.giorno==29) 
        return 0;
    else if (unaData.mese==2 && unaData.anno%100==0 && unaData.anno%400!=0 && unaData.giorno==29)
        return 0;

    return 1;
}

void formatDataLineare(data unaData){
    printf("%d/%d/%d", unaData.giorno, unaData.mese, unaData.anno);    
}


char caricaValutazione(valutazione v, FILE *file){

    char materia[30];
    char valutazione[30];
    char giorno[30];
    char mese[30];
    char anno[30];

    printf("Inserire la materia: ");
    scanf("%s", &v.materia);
    printf("Inserire la valutazione: ");
    scanf("%d", &v.voto);
    printf("Inserire la data: ");
    printf("Giorno: ");
    scanf("%d", &v.data.giorno);
    printf("Mese: ");
    scanf("%d", &v.data.mese);
    printf("Anno: ");
    scanf("%d", &v.data.anno);

    itoa(v.voto, valutazione, 10);
    itoa(v.data.giorno, giorno, 10);
    itoa(v.data.mese, mese, 10);
    itoa(v.data.anno, anno, 10);

    char *frase = materia;

    strcat(frase, ";");
    strcat(frase, valutazione);
    strcat(frase, ";");
    strcat(frase, giorno);
    strcat(frase, "/");
    strcat(frase, mese);
    strcat(frase, "/");
    strcat(frase, anno);

    return frase;

}

void creaStringa(char *txt, valutazione *v){

    char convert[4];
    strcat(txt,v.materia);
		strcat(txt,";");
		itoa(v.voto,convert,10);
		strcat(txt,convert);
		strcat(txt,";");
		itoa(v.data_esame.giorno,convert,10);
		strcat(txt,convert);
		strcat(txt,"/");
		itoa(v.data_esame.mese,convert,10);
		strcat(txt,convert);
		strcat(txt,"/");
		itoa(v.data_esame.anno,convert,10);
		strcat(txt,convert);
		strcat(txt,"\n");
}

void salvaValutazione(char *fileName, char *mode, char *txt){

    FILE *file;
	file=fopen(fileName, mode);
	fwrite(txt,strlen(txt),1,file);
	fclose(file);

}

// Funzione Menu
int menu(){ 
    int scelta = -1;
    system("cls");
    printf("\t\tMenu");
    printf("\n1)Inserire una valutazione");
    printf("\n2)Visualizzare le valutazioni correnti");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}


int main(){

    valutazione v;

    FILE *file;

    int n;

    printf("Quante valutazioni vuoi inserire? ");
    scanf("%d", &n);

    int i;
    for (i = 0; i < n; i++){

        file = fopen("valutazioni.txt", "a");
        char *frase = caricaValutazione(v, file);
        fwrite(frase, strlen(frase), 1, file);
        fclose(file);
        
    }
    

    /*
    char tx

    int i;
	for(i=0;i<n;i++)
	{
		

        creaStringa(&txt, &v);
		
		salvaValutazione("valutazioni.txt", "a", &txt);
		
				
	}
    */

}
