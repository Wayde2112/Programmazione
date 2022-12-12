/*
    Alunno: 22 - Stefano Enanias Saldana Moreno
    Data: 07/03/2022
    Durata: 4 ore
    Testo Esercitazione: 
    
        Si consideri il file Studenti.csv. Si richiede la costruzione di un software che consenta le seguenti operazioni:

            1 - Stampa dell'elenco degli studenti
            2 - Stampa dell'elenco dei soli studenti di una certa classe (data in input)
            3 - Visualizzare l'elenco degli studenti che hanno il cognome che inizia con una certa lettera data in input
            4 - Raggruppare gli studenti per classe e visualizzare il risultato
            5 - Creare un file di testo (studenti-quarta.txt) per stampare un elenco di studenti appartenenti alla classe quarta
*/

#include <stdio.h>
#include <string.h>

#define DIMENSIONE 74

// Struttura per lo Studente
typedef struct {
    int nMatricola;
    char nome[30];
    char cognome[30];
    char email[100];
    char classe[2];
} studente;

// Funzione per stampare uno studente
void stampaStudente (studente s) {

    printf("\n\nMatricola: %d", s.nMatricola);
    printf("\nNome: %s", s.nome);
    printf("\nCognome: %s", s.cognome);
    printf("\nEmail: %s", s.email);
    printf("\nClasse: %s", s.classe);
    printf("\n\n");  

}

// Funzione che stampa l'elenco di tutti gli studenti
void stampaElenco (studente v[], int dimensione) {

    int i;
    for (i = 0; i < dimensione; i++)
        stampaStudente (v[i]);

}

// Funzione che stampa l'elenco di tutti gli studenti di una determinata classe
void stampaClasse (studente v[], int dimensione, char classe[]) {

    int i, c;
    for (i = 0; i < dimensione; i++) {
        c = stricmp(v[i].classe, classe);
        if (c == 0)
            stampaStudente (v[i]);
        
    }
}

// Funzione che stampa l'elenco di tutti gli studenti che hanno il cognome che inizia con una certa lettera
void stampaCognome (studente v[], int dimensione, char iniziale[]) {

    int i, c;
    for (i = 0; i < dimensione; i++){
        if (toupper(v[i].cognome[0]) == toupper(iniziale[0]))
            stampaStudente (v[i]);

    }
}

// Funzione che raggruppa per classe gli studenti
void stampaPerClasse (studente v[], int dimensione) {

    char classi[20][3] = {"1A","1B","1C","1D","2A","2B","2C","2D","3A","3B","3C","3D","4A","4B","4C","4D","5A","5B","5C","5D"};
	int i, j;
	for(i = 0; i < 20; i++){
		printf("\n\nClasse %s\n\n\n", classi[i]);
		for(j = 0; j < dimensione; j++)
			if(v[j].classe[0] == classi[i][0] && v[j].classe[1] == classi[i][1])
				stampaStudente(v[j]);
	}
}  

// Funzione Menu
int menu(){ 
    int scelta = -1;
    system("cls");
    printf("\t\tMenu");
    printf("\n1)Visualizzare l'elenco degli studenti");
    printf("\n2)Visualizzare l'elenco dei soli studenti di una certa classe (data in input)");
    printf("\n3)Visualizzare l'elenco degli studenti che hanno il cognome che inizia con una certa lettera data in input");
    printf("\n4)Raggruppare gli studenti per classe e visualizzare il risultato");
    printf("\n5)Creare un file di testo (studenti-quarta.txt) per stampare un elenco di studenti appartenenti alla classe quarta");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);

    return scelta;
}

// Main
int main() {

    studente elenco[DIMENSIONE] = {

        {11258,	"Piero", 	    "Giuliani",	    "giuliani.piero@studenti.itis.net",	        "1A"},
        {11259,	"Laura",	    "De Stena",	    "destena.laura@studenti.itis.net",	        "2A"},
        {11260,	"Giulia",	    "Caruso",	    "caruso.giulia@studenti.itis.net",	        "3B"},
        {11261,	"Francesco",	"Cocco",	    "cocco.francesco@studenti.itis.net",	    "4C"},
        {11262,	"Giulio",	    "Marchese", 	"marchese.giulio@studenti.itis.net",	    "1B"},
        {11263,	"Mauro",	    "Marchesato",	"marchesato.mauro@studenti.itis.net",	    "4C"},
        {11264,	"Murizio",	    "Conciello",	"conciello.murizio@studenti.itis.net",	    "1A"},
        {11265,	"Andrea",	    "De Blasi",	    "deblasi.andrea@studenti.itis.net",	        "3B"},
        {11266,	"Lorena",	    "Di Stefano",	"di stefano.lorena@studenti.itis.net",	    "4D"},
        {11267,	"Maria",	    "Balocco",  	"balocco.maria@studenti.itis.net",  	    "1B"},
        {11268,	"Francesca",	"Barlocco",	    "barlocco.francesca@studenti.itis.net",	    "5A"},
        {11269,	"Giuliana",	    "Casini",	    "casini.giuliana@studenti.itis.net",	    "5D"},
        {11270,	"Silvia",	    "Sampietro",	"sampietro.silvia@studenti.itis.net",	    "5A"},
        {11271,	"Simone",	    "Cerrina",      "cerrina.simone@studenti.itis.net", 	    "5C"},
        {11272,	"Francesco",	"Cesco",    	"cesco.francesco@studenti.itis.net",    	"3B"},
        {11273,	"Roberto",  	"Alibrando",    "alibrando.roberto@studenti.itis.net",  	"1A"},
        {11274,	"Roberta",  	"Alibrandi",	"alibrandi.roberta@studenti.itis.net",  	"4C"},
        {11275,	"Andrea",	    "Cataldi",      "cataldi.andrea@studenti.itis.net", 	    "5A"},
        {11276,	"Anna",	        "Carli",	    "carli.anna@studenti.itis.net",     	    "3B"},
        {11277,	"Antonio",  	"Carletto",	    "carletto.antonio@studenti.itis.net",	    "5D"},
        {11278,	"Lorena",	    "Carlino",	    "carlino.lorena@studenti.itis.net",         "5A"},
        {11279,	"Loretta",  	"Carlini",  	"carlini.loretta@studenti.itis.net",	    "5C"},
        {11280,	"Roberto",	    "Coluccio", 	"coluccio.roberto@studenti.itis.net",	    "3B"},
        {11281,	"Francesco",	"Gianfri",  	"gianfri.francesco@studenti.itis.net",	    "4C"},
        {11282,	"Alessandro",	"Giacobbe",	    "giacobbe.alessandro@studenti.itis.net",    "5C"},
        {11283,	"Valerio",	    "Cau",  	    "cau.valerio@studenti.itis.net",	        "4C"},
        {11284,	"Andrea",	    "Dattola",  	"dattola.andrea@studenti.itis.net",	        "4D"},
        {11285,	"Roberta",  	"Dattilo",	    "dattilo.roberta@studenti.itis.net",	    "5A"},
        {11286,	"Alessandra",	"Dorianello",	"dorianello.alessandra@studenti.itis.net",	"1B"},
        {11287,	"Alessandro",	"Miglio",   	"miglio.alessandro@studenti.itis.net",      "5B"},
        {11288,	"Andrea",	    "Maglie",   	"maglie.andrea@studenti.itis.net",         	"1A"},
        {11289,	"Maria",	    "Moglie",	    "moglie.maria@studenti.itis.net",	        "5B"},
        {11290,	"Alessandra",	"Sturari",  	"sturari.alessandra@studenti.itis.net",     "5B"},
        {11291,	"Francesco",	"Sturello", 	"sturello.francesco@studenti.itis.net",     "1A"},
        {11292,	"Giuseppe",	    "Zaccone",  	"zaccone.giuseppe@studenti.itis.net",	    "5B"},
        {11293,	"Roberto",  	"Zito",	        "zito.roberto@studenti.itis.net",           "2A"},
        {11294,	"Alessandra",	"Zucco",	    "zucco.alessandra@studenti.itis.net",       "1A"},
        {11295,	"Francesca",	"Zazzera",  	"zazzera.francesca@studenti.itis.net",	    "3B"},
        {11296,	"Andrea",	    "Paolillo", 	"paolillo.andrea@studenti.itis.net",    	"1A"},
        {11297,	"Alessandra",	"Paone",        "paone.alessandra@studenti.itis.net",       "4C"},
        {11298,	"Simone",	    "Paoletti",  	"paoletti.simone@studenti.itis.net",        "1A"},
        {11299,	"Gennaro",  	"Pollo",	    "pollo.gennaro@studenti.itis.net",	        "5B"},
        {11300,	"Anna", 	    "Capra",	    "capra.anna@studenti.itis.net",           	"1B"},
        {11301,	"Antonio",	    "Cipro",	    "cipro.antonio@studenti.itis.net",	        "1A"},
        {11302,	"Simone",	    "Coppola",	    "coppola.simone@studenti.itis.net",	        "3A"},
        {11303,	"Andrea",	    "Chiapello",	"chiapello.andrea@studenti.itis.net",       "2D"},
        {11304,	"Giacomo",  	"Chieppa",  	"chieppa.giacomo@studenti.itis.net",        "3A"},
        {11305,	"Silvia",	    "Cosco",	    "cosco.silvia@studenti.itis.net",           "2D"},
        {11306,	"Michele",  	"Casco",	    "casco.michele@studenti.itis.net",          "3A"},
        {11307,	"Paola",	    "Ceppi",	    "ceppi.paola@studenti.itis.net",            "5B"},
        {11308,	"Mattia",	    "Quazza",	    "quazza.mattia@studenti.itis.net",          "1B"},
        {11309,	"Simone",	    "Querio",	    "querio.simone@studenti.itis.net",          "2D"},
        {11310,	"Andrea",	    "Maiulati",	    "maiulati.andrea@studenti.itis.net",        "2A"},
        {11311,	"Antonella",	"Mastello",  	"mastello.antonella@studenti.itis.net",     "1A"},
        {11312,	"Giacomo",  	"Mostello",	    "mostello.giacomo@studenti.itis.net",	    "5B"},
        {11313,	"Francesca",	"Mirenzi",  	"mirenzi.francesca@studenti.itis.net",	    "5B"},
        {11314,	"Sofia",	    "Morbelli", 	"morbelli.sofia@studenti.itis.net",	        "3A"},
        {11315,	"Paolo",	    "Lo Presti",	"lopresti.paolo@studenti.itis.net",	        "5C"},
        {11316,	"Antonella",	"Nizar",	    "nizar.antonella@studenti.itis.net",	    "5B"},
        {11317,	"Maurizio", 	"Macrì",	    "macrì.maurizio@studenti.itis.net",         "1B"},
        {11318,	"Giacomo",  	"Rania",	    "rania.giacomo@studenti.itis.net",	        "2D"},
        {11319,	"Simone",	    "Valentino",	"valentino.simone@studenti.itis.net",	    "2D"},
        {11320,	"Antonella",	"Giacometti",	"giacometti.antonella@studenti.itis.net",	"5B"},
        {11321,	"Ilaria",	    "Antonelli",	"antonelli.ilaria@studenti.itis.net",	    "1A"},
        {11322,	"Andrea",	    "Occhiello",	"occhiello.andrea@studenti.itis.net",	    "5B"},
        {11323,	"Ilaria",	    "Ombrello",	    "ombrello.ilaria@studenti.itis.net",        "5B"},
        {11324,	"Paolo",	    "Aragona",	    "aragona.paolo@studenti.itis.net",	        "1A"},
        {11325,	"Paola",	    "Ali",      	"ali.paola@studenti.itis.net",	            "2A"},
        {11326,	"Sofia",	    "Maffucci",	    "maffucci.sofia@studenti.itis.net",	        "5B"},
        {11327,	"Vito",	        "Conversano",	"conversano.vito@studenti.itis.net",	    "3A"},
        {11328,	"Francesca",	"Capistrano",	"capistrano.francesca@studenti.itis.net",	"1A"},
        {11329,	"Sofia",	    "Cocci",	    "cocci.sofia@studenti.itis.net",	        "5B"},
        {11330,	"Simone",	    "Porti",	    "porti.simone@studenti.itis.net",	        "2A"},
        {11331,	"Simone",	    "Palermo",	    "palermo.simone@studenti.itis.net",	        "5B"},

    };

    int scelta=-1;
    char classe[2];
    char iniziale[1];
    do{
        // Switch case per le varie opzioni
        switch(menu()){ 
            case 1: {
                printf("\nElenco degli studenti");
                stampaElenco(elenco, DIMENSIONE);
                getch();
                break;
            }
            case 2: {
                
                printf("\nDi che classe desideri visualizzare gli studenti? ");
                scanf("%s", &classe);
                printf("\nElenco degli studenti della %s", classe);
                stampaClasse (elenco, DIMENSIONE, classe);
                getch();
                break;
            }
            case 3: {
                printf("Con che lettera devono iniziare i cognomi? ");
                scanf("%s", &iniziale);
                stampaCognome (elenco, DIMENSIONE, iniziale);
                getch();
                break;
            }
            case 4: {
                stampaPerClasse(elenco, DIMENSIONE);
                getch();
                break;
            }    
            case 5: {
                printf("Nessuna operazione sviluppata!");
            }        
            case 0: {
                scelta = 0;
                break;
            }
        }
    }while(scelta!=0);
}