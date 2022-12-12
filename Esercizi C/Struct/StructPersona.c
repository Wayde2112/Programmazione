/*
Definire un nuovo tipo di dato strutturato persona
Una persona ha un nome, un cognome, una data di nascita, un luogo di nascita e un codice fiscale.

Si richiede di creare due variabili di tipo persona e di stampare i dati in dettaglio e lineare in ordine crescente per eta'
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    int giorno;
    int mese;
    int anno;
}data;

typedef struct{
    char nome[30];
    char cognome[30];
    data data;
    char luogoNascita[30];
    char codiceFiscale[17];
}persona;

int calcolaEta(data d){
    data oggi;
    oggi.anno=2022;
    oggi.mese=1;
    oggi.giorno=17;

    int eta=oggi.anno-d.anno;

    //se non ho ancora compiuto gli anni
    if(d.mese>oggi.mese || (d.mese==oggi.mese && d.giorno>oggi.giorno))
        eta--;
}

int menu(){ //funzione menu
    int scelta = -1;
    
    printf("\n\t\tMenu");
    printf("\n1)Visualizzare la stampa lineare");
    printf("\n2)Visualizzare la stampa al dettaglio");
    printf("\n3)Visualizzare la radice quadrata della somma dei soli numeri positivi inseriti");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

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


void formatDataLetterale(data unaData){

    char mesi[12][9]={"Gennaio","Febbraio","Marzo","Aprile","Maggio","Giugno","Luglio","Agosto","Settembre","Ottobre","Novembre","Dicembre"};
    printf("%d %s %d", unaData.giorno, mesi[unaData.mese-1], unaData.anno);
}


void stampaDettaglio(persona p){
    printf("\nNome: %s", p.nome);
    printf("\nCognome: %s", p.cognome);
    if(isDataValida(p.data)==0)
        formatDataLineare(p.data);
    else
        printf("Data inserita non valida");       
    printf("\nData di nascita: %d/%d/%d", p.data);
    printf("\nLuogo di nascita: %s", p.luogoNascita);
    printf("\nCodice Fiscale: %s", p.codiceFiscale);
    printf("\n\n");
}

void stampaLineare(persona p){
    printf("\nNome: %s", p.nome);
    printf(", Cognome: %s", p.cognome);
    printf(", Data di nascita: %d/%d/%d", p.data);
    printf(", Luogo di nascita: %s", p.luogoNascita);
    printf(", Codice Fiscale: %s", p.codiceFiscale);
    printf("\n\n");
}

void caricaPersona(persona p){
    printf("Digitare nome: ");
        scanf("%s", &p.nome);
        printf("Digitare il cognome: ");
        scanf("%s", &p.cognome);
        printf("Digitare la data di nascita: ");
        printf("\tGiorno: ");
        scanf("%d", &p.data.giorno);
        printf("\tMese: ");
        scanf("%d", &p.data.mese);
        printf("\tAnno: ");
        scanf("%d", &p.data.anno);
        printf("Digitare il luogo di nascita: ");
        scanf("%f", &p.luogoNascita);
        printf("Digitare il Codice Fiscale: ");
        scanf("%s", &p.codiceFiscale);
}

int main(){
    int i, np;
    printf("Quante persone vuoi inserire?");
    scanf("%d", &np);
    persona p1, p2;

    caricaPersona(p1);

    caricaPersona(p2);

    

    int n, scelta=-1;

	printf("\n\nScegli tra le seguenti operazioni:\n");
    printf("1: Stampa in dettaglio le persone\n");
    printf("2: Stampa lineare delle persone\n");
    printf("3: Esci dal programma\n");
	scanf("%d", &n);

    do
    {
        switch(menu()){ //switch case per le varie opzioni
            case 1:{
            stampaDettaglio(p1);
            stampaDettaglio(p2); 
            break;
            }
            case 2:{
            stampaLineare(p1);
            stampaLineare(p2);
            break;
            } 
            case 3: printf("Grazie e arrivederci"); break;
            default: printf("ERRORE");
        }
    } while (scelta!=0);
    

}
