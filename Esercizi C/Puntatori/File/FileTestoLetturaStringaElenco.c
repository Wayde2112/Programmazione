/*
    Stampare il contenuto del file testo.txt
*/

#include <stdio.h>
#include <string.h>

int main(){

    // Variabile che utilizzerò per salvare il contenuto letto dal file testo.txt
    char *frase; 
    
    char *fileName = "elenco.txt";
    char *mode = "r";

    FILE *file;
    file = fopen(fileName, mode);

    fread(frase, sizeof(frase), 1, file);

    while (!feof(file)){
        printf("%s\n", frase);

        fread(frase, strlen(frase), 1, file);
    }

    fclose(file);

    
    
}