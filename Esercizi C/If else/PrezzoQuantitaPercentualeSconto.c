/*
Dati in input il prezzo e la quantità di un certo prodotto, determinare la fascia di sconto da applicare e stampare i dati inseriti, la percentuale di sconto applicata, lo sconto effettuato e il totale da pagare.

Fasce di sconto

Quantita < 3  --- percentuale di sconto 0%
3<= Quantita < 8 --- percentuale di sconto 4%
8<= Quantita < 12 --- percentuale di sconto 9%
12<= Quantita < 20 --- percentuale di sconto 13%
Quantita >= 20 --- percentuale di sconto 21%
*/

#include <stdio.h>
#include <math.h>

int main(){

    int qp, ps=0;
    float prezzo;

    printf("Prezzo: ");
    scanf("%f", &prezzo);

    printf("Quantità del prodotto: ");
    scanf("%d", &qp);

    if(qp>=3 && qp<8) ps=4;
    else if (qp>=8 && qp<12) ps=9;
    else if (qp>=12 && qp<20) ps=13;
    else if (qp>=20) ps=21;

    float totale = prezzo*qp;
    printf("Totale: %.2f\n", totale);

    printf("Percentuale sconto applicata: %.2f\n", ps);

    float sconto = totale*ps/100;
    printf("Sconto effettuato: %.2f\n", sconto);

    float totaleScontato = totale-sconto;
    printf("Totale Scontato: %.2f", totaleScontato);

}