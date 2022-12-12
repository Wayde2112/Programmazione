/*
    Esercizio n. 

Realizzare un programma che consenta la gestione di email. Ogni email deve contenere i seguenti dati: 

    A (obbligatorio) 
    DA (obbligatorio) 
    CC (facoltativo) 
    CCN (facoltativo)
    Soggetto (obbligatorio) 
    Messaggio (obbligatorio) 
    Priorità (Bassa, Normale, Alta) 
    Le operazioni possibili sono: 

    nuova email 
    visualizza email 
    elimina email
*/

#include <stdio.h>
#include <string.h>

enum priorita {BASSA=1, NORMALE=2, ALTA=3};

// Struttura Email
typedef struct{
    char a[50];
    char da[50];
    char cc[50];
    char ccn[50];
    char oggetto[50];
    char messaggio[500];
    // char priorita[10];
}email;

email nuovaEmail(email e){
    printf("Creazione nuova mail in corso... \n");
    printf("A: "); scanf("%s", &e.a);
    printf("DA: "); scanf("%s", &e.da);
    printf("CC: "); scanf("%s", &e.cc);
    printf("CCN: "); scanf("%s", &e.ccn);
    printf("Oggetto: "); scanf("%s", e.oggetto);
    printf("Messaggio: "); gets(e.messaggio); 
    // printf("Priorita': [1(Bassa) - 2(Normale) - 3(Alta)]"); scanf("%s", &e.priorita);

    return e;
}

void visualzzaEmail(email e){
    printf("\nVisualizzazione dell'email appena creata: \n");
    printf("\nA: %s", e.a); 
    printf("\nDA: %s", e.da);
    printf("\nCC: %s", e.cc);
    printf("\nCCN: %s", e.ccn); 
    printf("\nOggetto: %s", e.oggetto);
    printf("\nMessaggio: %s", e.messaggio); 
    /*
    printf("\nPriorita': ");
    if (e.priorita=="BASSA") printf("%d", BASSA);
    else if (e.priorita=="NORMALE") printf("%d", NORMALE);
    else printf("%d", ALTA);
    */
}

email eliminaEmail(){
    printf("\nEliminazione email in corso...");
    email e = {" "," "," "," "," "," "};
    
    
    return e;
}

/*
// Funzione Menu
int menu(){ 
    int scelta = -1;
    system("cls");
    printf("\t\tMenu");
    printf("\n1)Nuova email");
    printf("\n2)Visualizza email");
    printf("\n3)Elimina email");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}
*/

int main(){
    email e;
    
    e = nuovaEmail(e);

    visualzzaEmail(e);

    e = eliminaEmail(e);

    printf("\nVerifica che l'email sia stata cancellata correttamente...");
    visualzzaEmail(e);
    printf("\nEliminazione avvenuta con successo!");
    
}


