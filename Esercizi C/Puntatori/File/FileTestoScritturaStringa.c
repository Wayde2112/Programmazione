/*
    Salvare su file di testo la frase con la data di oggi
    Usare i puntatori
*/

#include <stdio.h>
#include <string.h>

int main(){

    char *frase = "Oggi e' il 21 Febbraio 2022";

    // Salvare questa frase su file di testo
    char *fileName = "testo.txt";
    char *mode = "w";

    FILE *file;

    file = fopen(fileName, mode);

    fwrite(frase, strlen(frase), 1, file);

    fclose(file);

}