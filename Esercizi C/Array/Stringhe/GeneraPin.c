/*
Generare un pin(4 numeri). Stampare il risultato
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include "C:\Users\ICTS21-23.096\Desktop\Esercizi C\myLibs\myLibrary.h"

#define lunghezzaPIN 4

int main(){
    srand(time(NULL));

    int i;
    printf("PIN generato: ");
    for (i = 0; i < lunghezzaPIN; i++)
    {
        printf("%d", generaPin());
    }
    
}