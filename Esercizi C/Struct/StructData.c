/* 
Costruzione di nuovo tipo di dato

Costruzione del tipo data

Una data è composta da un giorno, un mese e un anno

utilizzare il nuovo tipo di dato

stabilire se la data è corretta
stampare la data in forma lineare es 13/01/2022
stampare una data in forma lettereale es 13 Gennaio 2022

*/

#include <stdio.h>

//struct => struttura di dati

typedef struct {
    int giorno;
    int mese;
    int anno;
}data;


void formatDataLineare(data unaData){
    printf("%d/%d/%d", unaData.giorno, unaData.mese, unaData.anno);    
}


void formatDataLetterale(data unaData){

    char mesi[12][9]={"Gennaio","Febbraio","Marzo","Aprile","Maggio","Giugno","Luglio","Agosto","Settembre","Ottobre","Novembre","Dicembre"};
    printf("%d %s %d", unaData.giorno, mesi[unaData.mese-1], unaData.anno);
}


int isDataValida(data unaData){
    //restituisce 0 se ci sono errori
    //restituisce 1 se non ci sono errori

    if(unaData.giorno<1 || unaData.giorno>31 || unaData.mese<1 || unaData.mese>12 || unaData.anno<1582) 
        return 0;
    else if((unaData.mese==4 || unaData.mese==6 || unaData.mese==9 || unaData.mese==11) && unaData.giorno==31) 
        return 0;
    else if(unaData.mese==2 && unaData.giorno>29) 
        return 0;
    else if (unaData.mese==2 && unaData.anno%100!=0 && unaData.anno%4!=0 && unaData.giorno==29) 
        return 0;
    else if (unaData.mese==2 && unaData.anno%100==0 && unaData.anno%400!=0 && unaData.giorno==29)
        return 0;

    return 1;
}

int main(){

    data oggi;

    int giorno;
    printf("Inserisci il giorno: ");
    scanf("%d", &oggi.giorno);

    int mese;
    printf("Inserisci il mese: ");
    scanf("%d", &oggi.mese);

    int anno;
    printf("Inserisci l'anno: ");
    scanf("%d", &oggi.anno);     

    if(isDataValida(oggi)==0)
        printf("Errore");
    else{
        printf("\n");
        formatDataLineare(oggi);
        printf("\n");
        formatDataLetterale(oggi);
    }
}