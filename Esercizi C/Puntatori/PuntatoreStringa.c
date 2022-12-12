#include <stdio.h>

int main(){
    char parola[30]={"Piero Calamandrei"};
    printf("parola: %s", parola);

    printf("\n\n");

    char *p="Piero Calamandrei";
    printf("Uso puntatore => parola: %s", p);

}