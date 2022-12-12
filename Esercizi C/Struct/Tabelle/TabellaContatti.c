/*
Creare una tabella per gestire un elenco di contatti. 
Di ogni contatto si conosce il nome, il cognome, il numero di cellulare, l'email.

Stampare l'elenco dei contatti.
Stampare l'elenco dei contatti che iniziano con una certa lettera dell'alfabeto.
Stampare l'elenco dei contatti che hanno un certo cognome (si usi la funzione strcmp della libreria string.h)
*/

#include <stdio.h>
#include <string.h>
#include "C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C\myLibs\myLibrary.h"

typedef struct{
    char nome[50];
    char cognome[50];
    char nCellulare[14];
    char email[50];
}contatto;

int menu(){ //funzione menu
    int scelta = -1;
    system("cls");
    printf("\n\t\tMenu");
    printf("\n1)Stampare l'elenco dei contatti");
    printf("\n2)Stampare l'elenco dei contatti che iniziano con una certa lettera dell'alfabeto.");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

void stampaContatti(contatto c){
    printf("\nNome: %s", c.nome);
    printf("\nCognome: %s", c.cognome);
    printf("\nNumero di cellulare: %s", c.nCellulare);
    printf("\nEmail: %s", c.email);
    printf("\n\n");
}

void stampaElencoContatti(contatto v[], int dimensione){
    int i;
    for(i = 0; i < dimensione; i++)
        stampaContatti(v[i]);
}

void stampaElencoRicerca(contatto elenco[], int dimensione, char iniziale){
	
	int i;
	for(i=0;i<dimensione;i++)
		if(elenco[i].cognome[0]==iniziale){
			stampaContatti(elenco[i]);
			printf("\n");
		}
}

void stampaElencoRicercaIgnorCase(contatto elenco[], int dimensione, char iniziale){
	
	int i;
	for(i=0;i<dimensione;i++)
		if(toupper((int)elenco[i].cognome[0])==toupper((int)iniziale)){
			stampaContatti(elenco[i]);
			printf("\n");
		}
}

int main(){

    contatto elenco[5]={
        {"Max", "Verstappen", "+312423563212", "max.verstappen@f1.com"},
        {"Lewis", "Hamilton", "+4423423134532", "lewisilpiuforte@f1.com"},
        {"Sebastian", "Vettel", "+4996840598309", "sebastian.vettel@f1.com"},
        {"Stephen", "Curry", "+2212343423223", "stephen.curry@nba.com"},
        {"Michael", "Schumacher", "+123456789012", "michael.schumacher@hospital.com"},
    };

    int scelta=-1;char lettera;

    do{
        switch(menu()){ //switch case per le varie opzioni
            case 1:{
                printf("\nElenco dei contatti");
                stampaElencoContatti(elenco, 5); 
                getch();
                break;
            }
            case 2:{
                
                int posizione;
                printf("\nPer quale lettera desideri filtrare la ricerca? ");
                scanf("%c", &lettera);
                printf("%c", lettera);
                getch();
                break;
            }
            

            
            case 0:{
                scelta = 0;
                break;
            }
        }
    }while(scelta!=0);

}
