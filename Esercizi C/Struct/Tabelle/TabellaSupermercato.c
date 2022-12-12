/* Testo Problema:
I prodotti di un supermercato sono suddivisi nei vari reparti. I reparti sono i seguenti: Alimentari, Giocattoli, Edicola, Abbigliamento. 

Di un prodotto si conoscono il codice, il nome, il prezzo, la descrizione, la giacenza, se nuovo, lo sconto.

Creare un menu per scegliere una delle seguenti scelte:

l'elenco dei prodotti per reparto
il dettaglio dei prodotti che soddisfano la ricerca per prezzo (maggiore o uguale)
l'elenco dei prodotti con sconto max per reparto
l'elenco dei prodotti in scorta
l'elenco dei prodotti esauriti di un certo reparto
l'elenco dei nuovi prodotti

enum reparto richiamo nella struttura prodotto
*/

#include <stdio.h>
#include <string.h>
#include "C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C\myLibs\myLibrary.h"

enum reparto {Alimentari=1, Giocattoli, Edicola, Abbigliamento};

typedef struct{
    int reparto;
    char codice[3];
    char nome[1000];
    float prezzo;
    char descrizione[10000];
    int giacenza;
    int nuovo; //variabile booleana 1=Vero | 0=Falso
    int percentualeSconto;
}prodotto;

int menu(){ //funzione menu
    int scelta = -1;
    system("cls");
    printf("\n\t\tMenu");
    printf("\n1)Visualizzare l'elenco dei prodotti per reparto");
    printf("\n2)Visualizzare il dettaglio dei prodotti che soddisfano la ricerca per prezzo (maggiore o uguale)");
    printf("\n3)Visualizzare l'elenco dei prodotti con sconto max per reparto");
    printf("\n4)Visualizzare l'elenco dei prodotti in scorta");
    printf("\n5)Visualizzare l'elenco dei prodotti esauriti di un certo reparto");
    printf("\n6)Visualizzare l'elenco dei nuovi prodotti");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

void stampaProdottoByReparto(prodotto v[], int dimensione, int reparto){
    int i;
    for(i = 0; i < dimensione; i++){
        if(reparto == v[i].reparto)
            stampaProdotto(v[i]);
    }        
}

void stampaProdotto(prodotto p){
        printf("\nReparto: %d", p.reparto);
            printf("\nCodice: %s", p.codice);
            printf("\nNome: %s", p.nome);
            printf("\nPrezzo: %.2f", p.prezzo);
            printf("\nDescrizione: %s", p.descrizione);
            printf("\nGiacenza: %d", p.giacenza);
            printf("\nNuovo: %d", p.nuovo);
            printf("\nSconto: %d", p.percentualeSconto);
            printf("\n");
        
}

void stampaElencoProdotto(prodotto v[], int dimensione){
    int i;
    for(i = 0; i < dimensione; i++)
        stampaProdotto(v[i]);
}

void filtraByPrezzo(prodotto v[], int dimensione, float prezzo){
    int i;
    for (i = 0; i < 12; i++){
        if (prezzo>=v[i].prezzo){
            printf("Nome: %s", v[i].nome);
            printf("Prezzo: %.2f", v[i].prezzo);
            printf("\n\n");
        } 
    }   
}

void scontoMaxReparto(prodotto v[], int dimensione, int reparto){
    int i;
    int sconto = v[0].percentualeSconto;
    char nome[1000];
    strcpy(nome, v[0].nome);
    for (i = 0; i < dimensione; i++){
            if(sconto<v[i].percentualeSconto && reparto==v[i].reparto){
                sconto=v[i].percentualeSconto;
                strcpy(nome, v[i].nome);
            }
        } 
        printf("Nome: %s", nome);
        printf(" | Sconto: %d", sconto);
}

void stampaProdottiinScorta(prodotto v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++)
        if (v[i].giacenza!=0)
            stampaProdotto(v[i]);   
}

void stampaProdottiEsauritiByReparto(prodotto v[], int dimensione, int reparto){
    int i;
    for (i = 0; i < dimensione; i++){
        if(reparto == v[i].reparto){
            if(v[i].giacenza == 0)
                stampaProdotto(v[i]);
        }   
    }
    
}

void stampaProdottiNuovi(prodotto v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++)
        if(v[i].nuovo == 1)
            stampaProdotto(v[i]);    
}

int main(){

    prodotto elenco[12]={
        {1, "01", "Filetto di suino fresco", 9.90, "Il Filetto è un taglio di carne che, tanto nel suino come nel bovino e altri tipi di animali, proviene dalla zona lombare ed è un taglio particolarmente magro. Questo taglio di carne risulta particolarmente morbido perché ottenuto da un muscolo che non viene quasi mai allenato durante la vita dell’animale e, di conseguenza, rimane estremamente tenero." , 25, 1, 0},
        {1, "02", "Banane", 1.10, "Banana Chiquita classe extra ti offre una carica di energia della natura: è una frutta ricca di potassio ideale per chi vuole un’alimentazione sana e per chi cerca spuntini vegani senza rinunciare al gusto e al divertimento.", 150, 0, 0},
        {1, "03", "Pane", 3.00, "Il pane è un prodotto alimentare ottenuto dalla fermentazione, dalla formatura a cui segue una lievitazione, e successiva cottura in forno di un impasto a base di farina (normale o integrale) di cereali, acqua.", 200, 0, 15},
        {2, "04", "LEGO Speed Champions (76898). Formula EFormula E Panasonic Jaguar Racing GEN2 car & Jaguar I-PACE eTROPHY", 43.00, "Queste 2 straordinarie repliche LEGO® Speed Champions incredibilmente dettagliate delle auto da corsa Formula E e I-PACE eTROPHY permettono ai bambini di organizzare gare sempre nuove.. Organizza una gara ricca di azione tra queste 2 straordinarie LEGO® Speed Champions! Quale sarà al più veloce in pista, la Formula E Panasonic Jaguar Racing Gen2 o la Jaguar I-PACE eTROPHY? Pronte, partenza, via! Scatta dalla linea di partenza usando tutte le tue capacità di pilota e affronta con decisione ogni curva e ogni rettilineo per scoprire chi vincerà questa gara tutta “elettrica” !. LEGO Formula E Panasonic Jaguar Racing GEN2 car & Jaguar I-PACE eTROPHY - 76898, Speed Champions. Tipo di prodotto: Set da costruzione, Colore del prodotto: Multicolore, Genere consigliato: Ragazzo/Ragazza. Larghezza imballo: 191 mm, Profondità imballo: 354 mm, Altezza imballo: 91 mm. Numero di minifigurine giocattolo: 2 pezzo(i). Quantità per livello: 48 pezzo(i), Larghezza scatola principale: 19,9 cm, Lunghezza del cartone principale: 39,8 cm", 20, 1, 30},
        {2, "05", "LEGO Harry Potter (75948). La Torre dell'orologio di Hogwarts", 105.99, "LEGO La Torre dell'orologio di Hogwarts - 75948, Harry Potter. Tipo di prodotto: Set da costruzione, Colore del prodotto: Multicolore, Età consigliata (min): 9 anno/i. Larghezza imballo: 354 mm, Profondità imballo: 94 mm, Altezza imballo: 378 mm. Numero di minifigurine giocattolo: 8 pezzo(i). Quantità per livello: 24 pezzo(i), Larghezza scatola principale: 2,99 cm, Lunghezza del cartone principale: 3,94 cm Entra nelle iconiche ambientazioni dei film di Harry Potter™ con il set di gioco La Torre dell’orologio di Hogwarts™! Unisciti a Harry, Hermione Granger™ e agli amici in visita all’ufficio di Silente, partecipa a una lezione di Difesa Contro le Arti Oscure, dai un'occhiata all'Ospedale e al Bagno dei Prefetti. Cambia l'ora sull'orologio e parti per un'avventura con la GiraTempo, ma assicurati di tornare per ammirare le decorazioni ghiacciate del Ballo del Ceppo e la funzione di danza mobile. Con tutti i personaggi e le ambientazioni di Harry Potter e il Prigioniero di Azkaban e di Harry Potter e il Calice di Fuoco... una volta entrato nella torre, non vorrai piu uscirne!", 15, 0, 15},
        {2, "06", "Bang! Gioco da tavolo", 18.90, "Quando l’uomo col Winchester incontra l’uomo con la pistola, l’uomo con la pistola è un uomo morto... a meno che non abbia una Volcanic! I Fuorilegge danno la caccia allo Sceriffo. Lo Sceriffo dà la caccia ai Fuorilegge. Il Rinnegato trama nell’ombra, pronto a schierarsi da una parte o dall’altra. Le pallottole volano. Chi fra i pistoleri sarà un aiutante dello Sceriffo, pronto a sacrificarsi per lui? E chi invece uno spietato Fuorilegge, che non aspetta altro che farlo fuori? Il gioco western più venduto del mondo in una versione ancora più ricca e facile da imparare! Il gioco già approvato da oltre 2 milioni di cowboy nel mondo!", 50, 1, 5},
        {3, "07", "Marvel Integrale - Gli incredibili X-Men - n.37 -La caccia 2 mensile - 13 gennaio 2022", 4.90, "Editore: Panini S.p.a. Publishing | Periodicità:	Mensile | Data rilascio: 14/gen/2022", 1, 1, 0},
        {3, "08", "Dragon Ball Super - n. 15 - mensile - gennaio 2022 - edizione italiana", 4.50, "- Dopo aver perfezionato la Quintessenza dellIstinto, Goku ha messo Molo con le spalle al muro, ma ecco che il nemico acquisisce l'ambito potere attraverso quello di Merus, conservato nella mano sinistra che gli era stata recisa. Come farà Goku a fronteggiare la potenza di un dio?!", 2, 1, 0},
        {3, "09", "I miti dello sport - Pietro Mennea - di Fausto Narducci - n. 10 - settimanale - 133 pagine", 4.99, "Pietro Mennea è stato uno dei più grandi sportivi italiani di tutti i tempi, il più celebrato insieme a Fausto Coppi. L'unico a essere ricordato con una giornata speciale, il Mennea Day, che si svolge ogni anno il 12 settembre, nell'anniversario dello straordinario 19''72 con cui, nel 1979, ottenne in Messico il record mondiale dei 200 metri. .....", 100, 0, 0},
        {4, "10", "Puma 251021001803043, Calzini Sportivi Unisex, (pacco da 6)", 13.99, "QUESTO É PUMA - Lo sport ha il potere di trasformarci e darci forza. Essendo uno dei più prestigiosi global sports brand, PUMA ha l'obiettivo di eccellere. Per raggiungerlo, adotta gli stessi valori che permettono agli atleti di arrivare al successo.", 300, 1, 40},
        {4, "11", "adidas Core 18 H. Felpa con Cappuccio Uomo", 39.99, "Questa felpa da calcio leggera protegge dal freddo grazie al cappuccio e alla struttura in morbido misto cotone. Le tre strisce lungo le maniche raglan completano il look, mentre la tasca a marsupio mantiene calde le mani. Il capo è realizzato in collaborazione con la Better Cotton Initiative per migliorare le condizioni dei produttori di cotone.", 50, 1, 15},
        {4, "12", "Tommy Hilfiger Cintura Uomo", 45.99, "Tommy Hilfiger celebra il Tommy Hilfiger per un design classico ma innovativo. Scopri gli ultimi stili per abbigliamento da donna e da uomo, scarpe, borse e accessori. Che si tratti di un evento glamour o di una serata casual – con Tommy Hilfiger per uomini e donne troverai sempre qualcosa per voi.", 0, 0, 0},
    };

    int scelta=-1, reparti;

    do{
        switch(menu()){ //switch case per le varie opzioni
            case 1:{
                printf("Di quale reparto desidera vedere i prodotti? ");
                scanf("%d", &reparti);
                stampaProdottoByReparto(elenco, 12, reparti); 
                getch();
                break;
            }
            case 2:{
                float prezzo;
                printf("Digitare il prezzo per il quale vogliamo filtrare i prodotti: ");
                scanf("%f", &prezzo);
                filtraByPrezzo(elenco, 12, prezzo);
                getch();
                break;
            }
            case 3:{
                printf("Di quale reparto desidera vedere lo sconto piu' alto? ");
                scanf("%d", &reparti);
                scontoMaxReparto(elenco, 12, reparti);
                getch();
                break;
            }
            case 4:{
                stampaProdottiinScorta(elenco, 12);
                getch();
                break;
            }
            case 5:{
                printf("Di quale reparto desidera vedere i prodotti esauriti? ");
                scanf("%d", &reparti);
                stampaProdottiEsauritiByReparto(elenco, 12, reparti);
                getch();
                break;
            }
            case 6:{
                stampaProdottiNuovi(elenco, 12);
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