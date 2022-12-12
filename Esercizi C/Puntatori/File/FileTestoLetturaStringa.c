/*
    Stampare il contenuto del file testo.txt
*/

#include <stdio.h>

int main(){

    // Variabile che utilizzerò per salvare il contenuto letto dal file testo.txt
    char frase[30]; 
    
    char *fileName = "testo.txt";
    char *mode = "r";

    FILE *file;
    file = fopen(fileName, mode);

    fread(frase, sizeof(frase), 1, file);

    fclose(file);

    printf("%s", frase);
    
}