/*
Creare il tipo di dato prodotto
di un prodotto di conosce
un codice di tipo numerico
un nome di lunghezza max 50 caratteri
un prezzo
una giacenza, ossia la scorta a magazzino

si chiede di configurare una variabile di tipo prodotto 
stampare il risultato ottenuto
*/

#include <stdio.h>

typedef struct{
    int codice;
    char nome[50];
    float prezzo;
    int giacenza;
}prodotto;


int main(){
    
    //dichiarazione della variabile di tipo prodotto
    prodotto p;

    printf("Codice: ");
    scanf("%d", &p.codice);

    printf("Nome: ");
    scanf("%s", &p.nome);

    printf("Prezzo: ");
    scanf("%f", &p.prezzo);

    printf("Giacenza: ");
    scanf("%d", &p.giacenza);

    printf("\nCodice: %d", p.codice);
    printf("\nNome: %s", p.nome);
    printf("\nPrezzo: %.2f", p.prezzo);
    printf("\nGiacenza: %d", p.giacenza);
    

}