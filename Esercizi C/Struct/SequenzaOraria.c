/*
    Dato in input il tempo di una sequenza oraria in secondi
    Restituire la sequenza oraria con il seguente format: 
        hh:mm:ss

    N.B. usare le funzioni con i puntatori

    Passaggio di parametri by reference
*/

#include <stdio.h>

// Prototype
void calcolaSequenzaOraria(int tempoInSecondi, int *ore, int *minuti, int *secondi);

int main(){

    int tempo;
    printf("Digitare il tempo della sequenza oraria, in secondi: ");
    scanf("%d", &tempo);

    int h, m, s;

    calcolaSequenzaOraria(tempo, &h, &m, &s);

    printf("%d:%d:%d", h, m, s);

}

void calcolaSequenzaOraria(int tempoInSecondi, int *ore, int *minuti, int *secondi){

    // 3606/3600 
    *ore = tempoInSecondi/3600; // Colcolo delle ore
    *minuti = tempoInSecondi%3600/60; // Calcolo i minuti
    *secondi = tempoInSecondi%60; // Calcolo i secondi

}