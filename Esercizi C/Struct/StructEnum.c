/*
Deifinizione di un nuovo tipo di dato

tipo enum
esempio 
elencare i nomi dei giorni della settimana
Lunedi', Martedi' ecc, domenica
*/

#include <stdio.h>

enum giornoSettimana {LUN, MAR, MER, GIO, VER, SAB, DOM};

int main(){
    int i;
    for(i=LUN; i<DOM; i++)
        printf("%d\n", i);
}