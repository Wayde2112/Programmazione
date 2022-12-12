/*
Si consideri un CD musicale. 

Tramite menu fornire la possibilità di far eseguire una delle seguenti richieste:

Visualizzare i dati del compact disk es. artista, casa discografica, prezzo
Visualizzare un brano scelto tramite la sua posizione
Visualizzare la durata totale del CD  (format in hh:mm:ss)
Visualizzare il numero di brani presenti
*/

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

#define DIMENSIONE 5

typedef struct{
    int h;
    int m;
    int s;
}durata;

typedef struct{
    char titolo[30];
    char artista[30];
    char casaDiscografica[30];
    durata durata; 
}brano;

typedef struct{
    brano brano;
    float prezzo;
    durata durata;
}cd;

void stampaDurata(durata d){
    printf("\nDurata: %d:%d:%d", d.h, d.m, d.s);
}

char stampaDurataStringa(durata d){
    char ora[10];
    char minuti[10];
    char secondi[10];

    itoa(d.h, ora, 10);
    itoa(d.m, minuti, 10);
    itoa(d.s, secondi, 10);

    strcat(ora, ":");
    strcat(ora, minuti);
    strcat(ora, ":");
    strcat(ora, secondi);

    return ora[10];
}

void stampaBrano(brano b){
    char durata[10] = stampaDurataStringa(b.durata);
    printf("\nTitolo: %s", b.titolo);
    printf("\nArtista: %s", b.artista);
    printf("\nCasa Discografica: %s", b.casaDiscografica);
    printf("\nDurata: %s", durata);
    printf("\n\n");
}

void stampaElencoBrano(brano v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++){
        printf("Brano: %d", i+1);
        stampaBrano(v[i]);
    }
        
    
}

void stampaCD(cd c){
    stampaBrano(c.brano);
    printf("Prezzo: %.2f", c.prezzo);
    //stampaDurata(c.durata);
    printf("\n\n");
}

// Funzione menu
int menu(){ 
    int scelta = -1;
    system("cls");
    printf("\n\t\tMenu");
    printf("\n1)Visualizzare l'elenco completo dei brani del CD, comprensivo di posizione, nome del brano e durata (data in secondi e con format in hh:mm:ss)");
    printf("\n2)Visualizzare un brano scelto tramite la sua posizione");
    printf("\n3)Visualizzare la durata totale del CD  (format in hh:mm:ss)");
    printf("\n4)Visualizzare il numero di brani presenti");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

int main(){

    // Caricamento dei dati 
    brano elenco[DIMENSIONE]={
        {"Brividi", "Mahmood e BLANCO", "SoundCloud", 0, 3, 17, 10.99, 1, 10, 0},
        {"Brividi", "Mahmood e BLANCO", "SoundCloud", 0, 3, 17, 10.99, 1, 10, 0},
        {"Brividi", "Mahmood e BLANCO", "SoundCloud", 0, 3, 17, 10.99, 1, 10, 0},
        {"Brividi", "Mahmood e BLANCO", "SoundCloud", 0, 3, 17, 10.99, 1, 10, 0},
        {"Brividi", "Mahmood e BLANCO", "SoundCloud", 0, 3, 17, 10.99, 1, 10, 0},
    };

    int scelta=-1;

    do{
        // Switch case per le varie opzioni
        switch(menu()){ 
            case 1:{
                stampaElencoBrano(elenco, DIMENSIONE);
                getch();
                break;
            }
            case 2:{
                
                getch();
                break;
            }
            case 3:{
                
                getch();
                break;
            }
            case 4:{
                
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
