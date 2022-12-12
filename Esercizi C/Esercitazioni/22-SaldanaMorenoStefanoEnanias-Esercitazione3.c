/*
    Alunno: 22 - Stefano Enanias Saldana Moreno
    Data: 07/02/2022
    Durata: 2 ore
    Testo Esercitazione: 
    
        Alla fine di un concorso vengono pubblicati i risultati delle prove dei concorrenti: 
        vengono memorizzati, per ogni partecipante, 
            il nominativo, il numero della pettorina, la data di nascita, il punteggio della prima prova, il punteggio della seconda prova. 
            
            Si vuole ottenere:

            l'elenco dei concorrenti partecipanti con nominativo, numero pettorina, data di nascita ed età
            la graduatoria parziale rispetto alla prima prova
            la graduatoria parziale rispetto alla seconda prova
            la graduatoria finale rispetto al punteggio del totale conseguito
            Si utilizzi un menu che consenta la scelta dell'operazione da eseguire. 

            Si consideri una tabella pre-caricata con almeno 15 concorrenti.

*/

#include <stdio.h>
#include <string.h>

#define DIMENSIONE 15

// Struttura per la data di nascita
typedef struct { 
    int giorno;
    int mese;
    int anno;
}data;

// Struttura per il concorrente
typedef struct{
    char nome[50];
    char cognome[50];
    char nPettorina[5];
    data data;
    int punteggio1aProva;
    int punteggio2aProva;
}concorrente;

// Funzione per stampare la Data in modo lineare
void formatDataLineare(data unaData){
    printf("\nData di nascita: %d/%d/%d", unaData.giorno, unaData.mese, unaData.anno);    
}

// Funzione per stampare un concorrente
void stampaConcorrente(concorrente c){
    printf("\nNome: %s", c.nome);
    printf("\nCognome: %s", c.cognome);
    printf("\nNumero di pettorina: %s", c.nPettorina);
    formatDataLineare(c.data);
    printf("\nPunteggio prima prova: %d", c.punteggio1aProva);
    printf("\nPunteggio seconda prova: %d", c.punteggio2aProva);
    printf("\n\n");
}

// Funzione che stampa l'elenco di tutti i concorrenti
void stampaElenco(concorrente v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++)
        stampaConcorrente(v[i]);
}

// Funzione per stampare un concorrente con l'eta'
void stampaConcorrenteConEta(concorrente c){
    printf("\nNome: %s", c.nome);
    printf("\nCognome: %s", c.cognome);
    printf("\nNumero di pettorina: %s", c.nPettorina);
    formatDataLineare(c.data);
    printf("\nEta': %d", calcolaEta(c.data));
    printf("\n\n");
}

// Funzione che stampa l'elenco di tutti i concorrenti con l'eta'
void stampaElencoConEta(concorrente v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++)
        stampaConcorrenteConEta(v[i]);
}

// Funzione che calcola l'età (Consideriamo come data di oggi la data 7/2/2022 inserita da input)
int calcolaEta(data d){
    data oggi;
    oggi.anno=2022;
    oggi.mese=2;
    oggi.giorno=7;

    int eta = oggi.anno - d.anno;

    // Se non ho ancora compiuto gli anni
    if(d.mese>oggi.mese || (d.mese==oggi.mese && d.giorno>oggi.giorno))
        eta--;

    return eta;
}

// Funzione che cerca il risultato più alto della 1a prova
int cercaRisMax1aProva(concorrente v[], int dimensione){
    int i, pos = 0;
    for (i = 0; i < dimensione; i++)
        if (v[pos].punteggio1aProva < v[i].punteggio1aProva)
            pos = i;
    return pos;
}

// Funzione che stampa in ordine di grandezza dal secondo valore più alto (1a Prova)
int cercaRisMax1aProva2(concorrente v[], int dimensione, int max){
    int i, pos = 0;
    for (i = 0; i < dimensione; i++)
        if (v[pos].punteggio1aProva < v[i].punteggio1aProva)
            if (v[max].punteggio1aProva > v[i].punteggio1aProva)
                pos = i;
    return pos;
}

// Funzione che cerca il risultato più alto della 2a prova
int cercaRisMax2aProva(concorrente v[], int dimensione){
    int i, pos = 0;
    for (i = 0; i < dimensione; i++)
        if (v[pos].punteggio2aProva < v[i].punteggio2aProva)
            pos = i;
    return pos;
}

// Funzione che stampa in ordine di grandezza dal secondo valore più alto (2a Prova)
int cercaRisMax2aProva2(concorrente v[], int dimensione, int max){
    int i, pos = 0;
    for (i = 0; i < dimensione; i++)
        if (v[pos].punteggio2aProva < v[i].punteggio2aProva)
            if (v[max].punteggio2aProva > v[i].punteggio2aProva)
                pos = i;
    return pos;
}

// Funzione che cerca il risultato più alto overall
int cercaRisMaxOverall(concorrente v[], int dimensione){
    int i, pos = 0;
    for (i = 0; i < dimensione; i++)
        if (v[pos].punteggio1aProva + v[pos].punteggio2aProva < v[i].punteggio1aProva + v[i].punteggio2aProva)
            pos=i;
    return pos;
}

// Funzione che stampa in ordine di grandezza dal secondo valore più alto (Overall)
int cercaRisMaxOverall2(concorrente v[], int dimensione, int max){
    int i, pos = 0;
    for (i = 0; i < dimensione; i++)
        if (v[pos].punteggio1aProva + v[pos].punteggio2aProva < v[i].punteggio1aProva + v[i].punteggio2aProva)
            if (v[max].punteggio1aProva + v[max].punteggio2aProva > v[i].punteggio1aProva + v[i].punteggio2aProva)
                pos = i;
    return pos;
}

// Funzione che ordina per la 1a Prova
void ordinaBy1aProva(concorrente v[], int dimensione){
    int i;
    int posMax = cercaRisMax1aProva(v, dimensione);
    int pos;
    stampaConcorrente(v[posMax]);   
    
    for (i = 1; i < dimensione; i++){
        pos = cercaRisMax1aProva2(v, dimensione, posMax);
        stampaConcorrente(v[pos]);
        posMax = pos;
    }   
}

// Funzione che ordina per la 1a Prova
void ordinaBy2aProva(concorrente v[], int dimensione){
    int i;
    int posMax = cercaRisMax2aProva(v, dimensione);
    int pos;
    stampaConcorrente(v[posMax]);   
    
    for (i = 1; i < dimensione; i++){
        pos = cercaRisMax2aProva2(v, dimensione, posMax);
        stampaConcorrente(v[pos]);
        posMax = pos;
    }   
}

// Funzione che ordina complessivamente
void ordinaByOverall(concorrente v[], int dimensione){
    int i;
    int posMax = cercaRisMaxOverall(v, dimensione);
    int pos;
    stampaConcorrente(v[posMax]);   
    
    for (i = 1; i < dimensione; i++){
        pos = cercaRisMaxOverall2(v, dimensione, posMax);
        stampaConcorrente(v[pos]);
        posMax = pos;
    } 
}

// Funzione Menu
int menu(){ 
    int scelta = -1;
    system("cls");
    printf("\t\tMenu");
    printf("\n1)Visualizzare l'elenco dei concorrenti");
    printf("\n2)Visualizzare la graduatoria parziale rispetto alla prima prova");
    printf("\n3)Visualizzare la graduatoria parziale rispetto alla seconda prova");
    printf("\n4)Visualizzare la graduatoria finale rispetto al punteggio del totale conseguito");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

int main(){

    // Caricamento dei dati 
    concorrente elenco[DIMENSIONE]={
        {"Mario",     "Rossi",     "1045", 5,   2, 1985, 67,  113},
        {"Luigi",     "Verdi",     "1945", 6,   3, 1995, 667, 513},
        {"Marco",     "Bianchi",   "2045", 6,   4, 1975, 553, 683},
        {"Pierluigi", "Pardo",     "1945", 3,   5, 1988, 467, 523},
        {"Stefano",   "Nava",      "1032", 1,   2, 1991, 257, 313},
        {"Riccardo",  "Gentile",   "1243", 5,   2, 1988, 557, 403},
        {"Luca",      "Mottola",   "9321", 2,   3, 1995, 577, 613},
        {"Sebastian", "Vettel",    "2125", 5,   2, 1975, 564, 533},
        {"Lewis",     "Hamilton",  "7343", 7,   9, 1965, 267, 203},
        {"Jenson",    "Button",    "1215", 10,  1, 1985, 566, 604},
        {"Kimi",      "Raikkonen", "0045", 12,  7, 1987, 562, 606},
        {"Zak",       "Brown",     "1999", 22,  3, 1989, 563, 443},
        {"Lando",     "Norris",    "2233", 25, 12, 1996, 767, 803},
        {"Daniel",    "Ricciardo", "1995", 18,  3, 2002, 867, 903},
        {"Fernando",  "Alonso",    "1031", 12, 11, 1985, 265, 303},
    };
        
    int scelta=-1;

    do{
        // Switch case per le varie opzioni
        switch(menu()){ 
            case 1:{
                printf("\nElenco dei concorrenti");
                stampaElencoConEta(elenco, DIMENSIONE);
                getch();
                break;
            }
            case 2:{
                printf("\nGraduatoria della 1a manche");
                ordinaBy1aProva(elenco, DIMENSIONE);
                getch();
                break;
            }
            case 3:{
                printf("\nGraduatoria della 2a manche");
                ordinaBy2aProva(elenco, DIMENSIONE);
                getch();
                break;
            }
            case 4:{
                printf("\nGraduatoria complessiva");
                ordinaByOverall(elenco, DIMENSIONE);
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