/*
Stampare il totale da pagare, 
il numero di pezzi totali acquistati di un carrello della spesa.
*/

#include <stdio.h>
#include <math.h>

int main(){

    int pt=0, n, flag, codice, codiceA;
    float prezzo, totaleP=0;

    printf("Desideri iniziare la spesa?");
    printf("\nDigitare 1 per iniziare");
    printf("\nDigitare 2 per chiudere\n");
    scanf("%d", &n);

    if(n==1){
        printf("Buona spesa!\n");
        do{
            printf("Inserire codice prodotto: ");
            scanf("%d", &codice);

            if(codiceA==codice){
                codiceA = codice;
                pt+=1;
            } 

            

            printf("Inserire il prezzo: ");
            scanf("%f", &prezzo);

            totaleP += prezzo;


            printf("Totale attuale: %.2f", totaleP);

            printf("\n\nDesidera inserire un altro prodotto?");
            printf("\nDigitare 0 per chiudere");
            printf("\nDigitare 1 per continuare\n");
            scanf("%d", &flag);

        }while(flag==1);
        printf("\nTotale Prodotti: %d", pt);
        printf("\nTotale: %.2f", totaleP);
        printf("\nGrazie e arrivederci!");
    }
    else printf("Grazie e arrivederci");

}