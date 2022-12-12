/*
    Input
        The input consists of two lines. The first line contains two integer numbers, D and N, with 0 < D ≤
        10000 and 0 < N ≤ 100000. D is the number of days needed to complete the programming task. N is the
        length of the given schedule. The second line contains N non-negative integers, A1, A2,..., AN , where 
        Ai indicates the number of other activities scheduled on day i.

    Output
        If the task can be scheduled in the given period, then output a single number d, with 1 ≤ d ≤ N, indicating the day in which Antonio should start programming. 
        Otherwise, if the task can not be scheduled in the given period, then output the message “impossible”.
    
    Sample input 1                      Sample output 1
    2 10                                6
    4 3 7 1 12 2 3 5 8 4
    
    Sample input 2                      Sample output 2
    4 3                                 impossible
    10 2 1
    
    Sample input 3                      Sample output 3
    3 15                                2
    9 1 3 2 5 10 8 2 3 3 1 3 4 0 0
*/

#include <stdio.h>

// Funzione per caricare l'array
void caricaArray(int v[], int dimensione){

    printf("Caricare l'array\n");
    int i;
    for (i = 0; i < dimensione; i++) {
        printf("Giorno %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

// Funzione che somma "D" numeri in sequenza
int sommaD (int v[], int dimensione, int pos){

    int somma = 0;
    int i;
    for (i = pos; i < dimensione; i++)
        somma += v[i];

    return somma;
}

// Funzione che confronta le somme
int confrontaSomme (int v[], int dimensione, int dimensioneD, int somma, int somma2, int pos){

    int i;
    for (i = 1; i < dimensione-1; i++){
        somma2 = sommaD(v, dimensioneD+i, i);
        //printf("Somma 1: %d - Somma 2: %d\n", somma, somma2);
        if (somma > somma2){
            somma = somma2;
            pos = i;
            //break;
        }      
    }
    return pos;
}

int main(){

    int D, N, d = 0;
    
    printf("Digitare quanti giorni dura l'operazione: ");
    scanf("%d", &D);
    printf("Digitare quanti giorni si hanno per completare l'operazione: ");
    scanf("%d", &N);
    
    if (D<N){

        int dOps[N];
        int i = 0;

        caricaArray(dOps, N);
        
        int somma = sommaD(dOps, D, i);
        int somma2 = 0;

        d = confrontaSomme(dOps, N, D, somma, somma2, d);

        printf("\nL'operazione va iniziata il giorno %d\n\n", d+1);
    }

    else printf("impossible");
}