/*
Generare una password casuale alfabetica (Maiuscole e minuscole) a lunghezza predefinita
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include "C:\Users\ICTS21-23.096\Desktop\Esercizi C\myLibs\myLibrary2.h"


int main(){

    srand(time(NULL));

    char pattern[69]={"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789$&@#!+-"};

    int n;
    printf("Lunghezza della password: ");
    scanf("%d", &n);

    printf("Password: ");
    int i;
    for(i=0;i<n;i++)
        printf("%c", pattern[casuale(0,68)]);
}