/*
Tipo di dato: Studente(matricola, nome, cognome, età)
Creare un software per stampare i dati di 3 studenti
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int matricola;
    char nome[30], cognome[30];
    int eta;
}studente;

void stampaStudente(studente s){
    printf("\nMatricola: %d", s.matricola);
    printf("\nNome: %s", s.nome);
    printf("\nCognome: %s", s.cognome);
    printf("\nEta': %d", s.eta);
    printf("\n\n");  
}

int main(){
    studente s1, s2, s3;

    printf("Prima Matricola: ");
    scanf("%d", &s1.matricola);
    printf("Nome: ");
    scanf("%s", &s1.nome);
    printf("Cognome: ");
    scanf("%s", &s1.cognome);
    printf("Eta': ");
    scanf("%d", &s1.eta);

    printf("\n\nSeconda Matricola: ");
    scanf("%d", &s2.matricola);
    printf("Nome: ");
    scanf("%s", &s2.nome);
    printf("Cognome: ");
    scanf("%s", &s2.cognome);
    printf("Eta': ");
    scanf("%d", &s2.eta);    

    printf("\n\nSeconda Matricola: ");
    scanf("%d", &s3.matricola);
    printf("Nome: ");
    scanf("%s", &s3.nome);
    printf("Cognome: ");
    scanf("%s", &s3.cognome);
    printf("Eta': ");
    scanf("%d", &s3.eta);

    printf("\nStudente 1");
    stampaStudente(s1);

    printf("Studente 2");
    stampaStudente(s2);

    printf("Studente 3");
    stampaStudente(s3);

}
