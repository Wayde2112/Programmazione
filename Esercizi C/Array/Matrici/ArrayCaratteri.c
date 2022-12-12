/*
Creare un array di caratteri. Stampare il risultato
*/

#include <stdio.h>

#define dimensione 10

int main(){
    char frase[dimensione]={'C','i','a','o',' ','m','o','n','d','o'};

    int i;
    for (i = 0; i < dimensione; i++)
    {
        printf("%c", frase[i]);
    }
    
}