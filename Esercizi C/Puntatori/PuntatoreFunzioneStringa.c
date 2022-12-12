#include <stdio.h>

char *stringa(){
    return "Piero Calamandrei";
}

int main(){
    printf("Uso funzione con puntatore => parola: %s", stringa());
}