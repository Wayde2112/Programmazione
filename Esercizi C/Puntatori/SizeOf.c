/*
    Utilizzo di sizeof
*/

#include <stdio.h>

int main(){

    short a = 12;
    int n = 123;
    float f = 12.35;
    double d = 12.234567;
    char c = "c";

    // Uso degli array
    int numeri[5] = {12,23,34,45,56};
    char nomi[5][30] = {"Antonella", "Lucia", "Giulio", "Ermenegildo", "PierPiero"};

    printf("SIZEOF");

    printf("\nsizeof(short): %d", sizeof(a));
    printf("\nsizeof(int): %d", sizeof(n));
    printf("\nsizeof(float): %d", sizeof(f));
    printf("\nsizeof(double): %d", sizeof(d));
    printf("\nsizeof(char): %d", sizeof(c));
    printf("\nsizeof(array int): %d", sizeof(numeri)/sizeof(numeri[0]));
    printf("\nsizeof(array char): %d", sizeof(nomi)/sizeof(nomi[0]));
}