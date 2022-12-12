/*
Uso di una stringa

stringa = array di caratteri

es. stampare la frase "ITS-ICTPiemonte.it"
*/

#include <stdio.h>
int main(){
    char frase[20];
    int i;

    printf("Inserisci una stringa: ");
    scanf("%s", frase);

    printf("La stringa verticale e':");
    for (i = 0; i < 20; i++)
        printf("\n%c", frase[i]);
    
}