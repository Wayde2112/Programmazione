/*
Una azienda è composta da 15 consulenti

Di ogni consulente si conosce il nominativo, il fatturato lordo e le spese sostenute

Si richiede di stampare il totale lordo, il nominativo del consulente con fatturato massimo,
il nominativo del consulente che ha sostenuto minor spese

Costruire un menu testuale per scegliere quale operazione eseguire
*/

#include <stdio.h>
#include <string.h>
#include "C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C\myLibs\myLibrary.h"

typedef struct{
    int codice;
    char nominativo[50];
    double fatturatoLordo;
    double speseSostenute;
}consulente;


void calcolaFatturatoTot(consulente v[]){
    int i;
    double fattTot;
    for (i = 0; i < 15; i++){
        fattTot += v[i].fatturatoLordo;
    }
    printf("\n%.2lf", fattTot);
}

void calcolaFatturatoMax(consulente v[]){
    int i;
    double fattMax;
    int nConsulente;
    for (i = 0; i < 15; i++){
        if(fattMax<v[i].fatturatoLordo){
            fattMax=v[i].fatturatoLordo;
            nConsulente=i;
        }
    }
    printf("\n%s %.2lf", v[nConsulente].nominativo, fattMax);
}

int cercaFatturatoMax(consulente v[], int dimensione){
    int pos=0;
    int i;
    for(i=1;i<dimensione;i++)
        if(v[pos].fatturatoLordo<v[i].fatturatoLordo)
            pos=i;
    return pos;
}

void spesaMinima(double spesaMin, consulente v[]){
    int i;
    int nConsulente;
    for (i = 1; i < 15; i++){
        if(spesaMin>v[i].speseSostenute){
            spesaMin=v[i].speseSostenute;
            nConsulente=i;
        }        
    }
    printf("\n%s %.2lf", v[nConsulente].nominativo, spesaMin);
} 

int cercaSpesaMin(consulente v[], int dimensione){
    int pos=0;
    int i;
    for(i=1;i<dimensione;i++)
        if(v[pos].speseSostenute>v[i].speseSostenute)
            pos=i;
    return pos;
}

void stampaC(consulente c){
    printf("Nominativo: %s, ", c.nominativo);
    printf("Fatturato Lordo: %.2f, ", c.fatturatoLordo);
    printf("Spese sostenute: %.2f ", c.speseSostenute);
}

void stampaElenco(consulente v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++){
        stampaC(v[i]);
    }
    
}

int menu(){ //funzione menu
    int scelta = -1;
    system("cls");
    printf("\n\t\tMenu");
    printf("\n1)Visualizzare il totale lordo");
    printf("\n2)Visualizzare il nominativo del consulente con fatturato massimo");
    printf("\n3)Visualizzare il nominativo del consulente con la spesa minima");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

int main(){

    //metodo di inserimento veloce
    consulente elenco[15]={
        {1,  "Mario Rossi", 30000.00, 17250},
        {2,  "Luigi Verdi", 25000.00, 12250},
        {3,  "Marco Bianchi", 20000.00, 14250},
        {4,  "Pierluigi Pardo", 50000.00, 15250},
        {5,  "Stefano Nava", 25000.00, 21250},
        {6,  "Riccardo Gentile", 70000.00, 42250},
        {7,  "Luca Mottola", 20000.00, 11250},
        {8,  "Sebastian Vettel", 80000.00, 1250},
        {9,  "Lewis Hamilton", 100000.00, 90250},
        {10,  "Jenson Button", 80000.00, 16250},
        {11, "Kimi Raikkonen", 50000.00, 17650},
        {12, "Zak Brown", 70000.00, 13250},
        {13, "Lando Norris", 35000.00, 11150},
        {14, "Daniel Ricciardo", 75000.00, 13350},
        {15, "Fernando Alonso", 70000.00, 12250},
    };

    int scelta=-1, i;
    double spesaMin=elenco[0].speseSostenute;
    double fatturatoMax=elenco[0].fatturatoLordo;

    do{
        switch(menu()){ //switch case per le varie opzioni
            case 1:{
                calcolaFatturatoTot(elenco);
                getch();
                break;
            }
            case 2:{
                calcolaFatturatoMax(elenco);
                printf("\n\n");
                stampaC(elenco[cercaFatturatoMax(elenco, 15)]); //per cercare la posizione 
                getch();                
                break;
            }
            case 3:{
                spesaMinima(spesaMin, elenco);
                printf("\n\n");
                stampaC(elenco[cercaSpesaMin(elenco, 15)]); //per cercare la posizione 
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
