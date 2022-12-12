/*
Record e le tabelle

struct

Definire un nuovo tipo di dato editore

di un editore di conosce un codice, la ragione sociale, 
un indirizzo, una email, un sito web e un numero di telefono
*/

#include <stdio.h>
#include <string.h>
#include "C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C\myLibs\myLibrary.h"

typedef struct{
    int codice;
    char ragSociale[50];
    char indirizzo[100];
    char email[30];
    char sitoWeb[50];
    char telefono[20];
}editore;

void stampaE(editore e){
    printf("Codice: %d, ", e.codice);
    printf("Ragione sociale: %s, ", e.ragSociale);
    printf("Indirizzo: %s, ", e.indirizzo);
    printf("Email: %s, ", e.email);
    printf("Sito Web: %s, ", e.sitoWeb);
    printf("Telefono: %s", e.telefono);
}

int main(){

    //metodo di inserimento veloce
    editore elenco[10]={
        {1, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {2, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {3, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {4, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {5, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {6, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {7, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {8, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {9, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
        {10, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"},
    };

    int i;
    printf("Elenco editori: ");
    for (i = 0; i < 10; i++)
    {
        printf("\n");
        stampaE(elenco[i]);
    }
    
    printf("\n\n");

    //metodo di inserimento lento
    editore e1;
    e1.codice=1;
    strcpy(e1.ragSociale, "Hoepli");
    strcpy(e1.indirizzo, "Via dei Mille, 101 - 10100 Torino (TO)");
    strcpy(e1.email, "info@hoepli.it");
    strcpy(e1.sitoWeb, "https://www.hoepli.it");
    strcpy(e1.telefono, "00390112547896");

    stampaE(e1);
    printf("\n\n");

    //metodo di inserimento veloce
    editore e2 = {2, "Atlas", "Via Durandi, 6 - 10143 Torino (TO)", "info@atlas.it", "https://www.atlas.it", "00391258469746"};
    stampaE(e2);
}
