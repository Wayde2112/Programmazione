/*
    Alunno: 22 - Stefano Enanias Saldana Moreno
    Data: 10/01/2022
    Durata: 2 ore
    Testo Esercitazione: Dati in input n numeri interi, consentire la possibilità di effettuare le seguenti operazioni:

                         1.   Visualizzare il max e il min inserito
                         2.   Contare e visualizzare i numeri che sono multipli di 7 e maggiori di 30
                         3.   Visualizzare la radice quadrata della somma dei soli numeri positivi inseriti

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu(){ //funzione menu
    int scelta = -1;
    
    printf("\n\t\tMenu");
    printf("\n1)Visualizzare il max e il min inserito");
    printf("\n2)Contare e visualizzare i numeri che sono multipli di 7 e maggiori di 30");
    printf("\n3)Visualizzare la radice quadrata della somma dei soli numeri positivi inseriti");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

int contaMultipliN(int v[], int dimensione, int n){ //funzione conta e stampa multipli
    int i, count=0;
    for (i = 0; i < dimensione; i++)
    {
        if (v[i]%n==0 && v[i]>30){
            count++; 
            printf("%d\n", v[i]);
        }
                   
    }
    return count;
}

int ricercaArrayMax(int v[], int dimensione){ //ricerca max
    int i, max=v[0];
    for (i = 1; i < dimensione; i++)
        if(v[i]>max) max=v[i];
        return max;             
}

int ricercaArrayMin(int v[], int dimensione){ //ricerca min
    int i, min=v[0];
    for (i = 1; i < dimensione; i++)
        if(v[i]<min) min=v[i];
        return min; 
}

float radicePositivi(int v[], int dimensione){ //radice positivi
    int i, somma=0;
    for (i = 0; i<dimensione; i++)
        if(v[i]>0) somma+=v[i];
    return sqrt(somma);
}

int main(){

    int n, i, max, min, scelta=-1, nMultiplo=7, cMultipli7;
    float radice;


    printf("Quanti numeri vuoi digitare?" );
    scanf("%d", &n);

    int nDigitati[n];

    for(i=0; i<n; i++){
        printf("Inserisci il numero in posizione %d: ", i);
        scanf("%d", &nDigitati[i]);
    }

    max=ricercaArrayMax(nDigitati, n);
    min=ricercaArrayMin(nDigitati, n);

    radice=radicePositivi(nDigitati, n);

    do{
        switch(menu()){ //switch case per le varie opzioni
            case 1:{
                printf("Valore max: %d - Valore min: %d ", max, min);
                getch();
                break;
            }
            case 2:{
                cMultipli7=contaMultipliN(nDigitati, n, nMultiplo);
                printf("Presenti %d numeri multipli di 7 e maggiori di 30", cMultipli7);
                getch();                
                break;
            }
            case 3:{
                printf("Radice quadrata della somma dei numeri positivi: %.2f", radice);
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