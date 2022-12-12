/*
Programma che converte i Km/h in min/Km
es. 12.5 km/H = 4:48/km
*/

#include <stdio.h>
#include <math.h>
#include "C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C\myLibs\myLibrary.h"

int menu(){ //funzione menu
    int scelta = -1;

    system("cls");
    printf("\n\t\tMenu");
    printf("\n1)Calcolare da Km/h a min/Km");
    printf("\n2)Calcolare da min/Km a Km/h");
    printf("\n3)Calcolare i parziali di una prova");
    printf("\n4)Calcolare i min/km e i km/h dal tempo di una prova");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

int main(){
    int ore=0, minuti=0, scelta=-1;
    double velocita, distanza, secondi=0;


    do{
        switch(menu()){ //switch case per le varie opzioni
            case 1:{
                printf("Inserire la velocita' in Km/h:\n");
                scanf("%lf", &velocita);
                kmHtoMinKm(velocita);
                getch();
                break;
            }
            case 2:{
                printf("Inserire il passo in min:s/km: [es. 4:30]\n");
                scanf("%d:%lf", &minuti, &secondi);
                minKmtoKmH(minuti, secondi);
                getch();                
                break;
            }         
            case 3:{
                printf("Inserire la distanza percorsa [m]: ");
                scanf("%lf", &distanza);
                printf("Inserire il tempo previsto\n");
                printf("Ore: "); scanf("%d", &ore);
                printf("Minuti: "); scanf("%d", &minuti);
                printf("Secondi: " ); scanf("%lf", &secondi);
                printf("Distanza: %.0lf - Tempo impiegato: %d:%d:%.2lf", distanza, ore, minuti, secondi);
                calcolaSplitbyDistanceTime(distanza, ore, minuti, secondi);
                getch();
                break;
            }   
            case 4:{
                printf("Inserire la distanza percorsa [m]: ");
                scanf("%lf", &distanza);
                printf("Inserire il tempo previsto\n");
                printf("Ore: "); scanf("%d", &ore);
                printf("Minuti: "); scanf("%d", &minuti);
                printf("Secondi: " ); scanf("%lf", &secondi);
                printf("Distanza: %.0lf - Tempo impiegato: %d:%d:%.2lf", distanza, ore, minuti, secondi);
                
            }
            case 0:{
                scelta = 0;
                break;
            }
        }
    }while(scelta!=0);   
}