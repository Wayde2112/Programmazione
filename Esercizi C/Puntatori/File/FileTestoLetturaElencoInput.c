/*
   ? Stampare il contenuto del file testo.txt
*/

#include <stdio.h>
#include <string.h>

int main(){

    // Variabile che utilizzerò per salvare il contenuto letto dal file testo.txt
    char frase[30];
    int n;
    printf("Quanti nomi vuoi inserire?\n");
    scanf("%d", &n); 
    
    char *fileName = "elenco.txt";
    char *mode = "w";

    FILE *file;
    file = fopen(fileName, mode);

    int i;
    for (i = 0; i < n; i++){
        printf("Inserisci un nome: ");
        scanf("%s", &frase);

        fwrite(frase, strlen(frase), 1, file);
        fwrite("\n", strlen(frase), 1, file);
    }

    fclose(file);
    
}