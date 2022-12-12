/*
    Scrivere un numero su file di testo
*/

#include <stdio.h>

int main(){

    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    FILE *file; // Dichiaro una variabile puntatore per puntare al file di testo

    // File di testo: testo.txt

    // Operazioni da eseguire sui file
    // fopen => Serve per aprire il file, in modalità scrittura
    // w => Scrittura - r => Lettura - a = Append

    
    file = fopen("testo.txt", "w"); // Mi connetto al file in modalita' scrittura

    fwrite(&n, sizeof(n), 1, file); // Scrivo nel file il contenuto della variabile n

    fclose(file);

    printf("\n\nHo salvato il valore inserito nel file");
}