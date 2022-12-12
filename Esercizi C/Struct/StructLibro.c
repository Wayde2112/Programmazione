/*
Libro:
Codice isbn (16 numeri)
Titolo
Nome autore
Prezzo
Editrice
Pagine
Anno pubblicazione

Funzione: Stampa dettaglio
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char isbn[14];
    char titolo[60];
    char nomeAutore[50];
    float prezzo;
    char editrice[30];
    int nPagine;
    int annoPubblicazione;
}libro;

void stampaDettaglio(libro l){
    printf("\nCodice ISBN: %s", l.isbn);
    printf("\nTitolo: %s", l.titolo);
    printf("\nAutore: %s", l.nomeAutore);
    printf("\nPrezzo: %.2f", l.prezzo);
    printf("\nCasa Editrice: %s", l.editrice);
    printf("\nNumero di pagine: %d", l.nPagine);
    printf("\nAnno di pubblicazione: %d", l.annoPubblicazione);
    printf("\n\n");
}

void stampaLineare(libro l){
    printf("\nCodice ISBN: %s", l.isbn);
    printf(", Titolo: %s", l.titolo);
    printf(", Autore: %s", l.nomeAutore);
    printf(", Prezzo: %.2f", l.prezzo);
    printf(", Casa Editrice: %s", l.editrice);
    printf(", Numero di pagine: %d", l.nPagine);
    printf(", Anno di pubblicazione: %d", l.annoPubblicazione);
    printf("\n\n");
}

int main(){
    libro l1, l2;

    printf("Digitare codice ISBN: ");
    scanf("%s", &l1.isbn);
    printf("Digitare il titolo del libro: ");
    scanf("%s", &l1.titolo);
    printf("Digitare l'autore del libro: ");
    scanf("%s", &l1.nomeAutore);
    printf("Digitare il prezzo: ");
    scanf("%f", &l1.prezzo);
    printf("Digitare la Casa Editrice: ");
    scanf("%s", &l1.editrice);
    printf("Digitare il numero di pagine: ");
    scanf("%d", &l1.nPagine);
    printf("Digitare l'anno di pubblicazione: ");
    scanf("%d", &l1.annoPubblicazione);

    printf("\n\n");

    printf("Digitare codice ISBN: ");
    scanf("%s", &l2.isbn);
    printf("Digitare il titolo del libro: ");
    scanf("%s", &l2.titolo);
    printf("Digitare l'autore del libro: ");
    scanf("%s", &l2.nomeAutore);
    printf("Digitare il prezzo: ");
    scanf("%f", &l2.prezzo);
    printf("Digitare la Casa Editrice: ");
    scanf("%s", &l2.editrice);
    printf("Digitare il numero di pagine: ");
    scanf("%d", &l2.nPagine);
    printf("Digitare l'anno di pubblicazione: ");
    scanf("%d", &l2.annoPubblicazione);

    int n;

	printf("\n\nScegli tra le seguenti operazioni:\n");
    printf("1: Stampa in dettaglio i libri\n");
    printf("2: Stampa lineare dei libri\n");
    printf("3: Esci dal programma\n");
	scanf("%d", &n);

    switch (n){
        case 1:{
            stampaDettaglio(l1);
            stampaDettaglio(l2); 
            break;
        } 
        case 2:{
            stampaLineare(l1);
            stampaLineare(l2);
            break;
        } 
        case 3: printf("Grazie e arrivederci"); break;
        default: printf("ERRORE");
    }

}