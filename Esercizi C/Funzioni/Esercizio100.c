/*

    Problema: Creare una funzione che se riceve un numero n1 stampa una riga di n1 “+”, se riceve
    anche un numero n2, stampa n2 righe di n1 “+”, se riceve anche un carattere c stampa
    stampa n2 righe di n1 caratteri c.

    n1 = 3
    n2 = -1
    c = '+'
    
    +++
    
    n1 = 3
    n2 = 4
    c = '+'
    
    +++
    +++
    +++
    +++
    
    n1 = 2
    n2 = 2
    c = 'a'
    
    aa
    aa

*/

#include <stdio.h>
#include <stdlib.h>

void stampaRigheColonne(int n1, int n2, char c){
    int i,j;
    if(n2==0) 
        n2==1;
    for(i=0; i<n2; i++){
        for(j=0; j<n1; j++)
            printf("%c", c);
        printf("\n");
    }
}

int menu(){
    int scelta = -1;
    system("cls");
    printf("\t\tMenu");
    printf("\n1)Inserimento grandezza righe");
    printf("\n2)Inseirmento grandezza colonne");
    printf("\n3)Inserimento carattere");
    printf("\n4)Stampa");
    printf("\n5)Azzeramento valori");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    system("cls");
    return scelta;
}

int main(){
    
    int n1 = 0,n2 = 0, scelta = -1;
    char c = '+';
    
    do{
        switch(menu()){
            case 1:{
                printf("Inserire la dimensione delle righe: ");
                scanf("%d",&n1);
                getch();
                break;
            }
            case 2:{
                printf("Inserire la dimensione delle colonne: ");
                scanf("%d",&n2);
                getch();
                break;
            }
            case 3:{
                printf("Inserire il carattere: ");
                scanf(" %c",&c); //mettere lo spazio prima del %c in caso di loop
                getch();
                break;
            }
            case 4:{
                if(n1>0)
                    stampaRigheColonne(n1,n2,c);
                else
                    printf("Inserire almeno la dimensione delle righe");
                getch();
                break;
            }
            case 5:{
                n1 = 0;
                n2 = 0;
                c = '+';
                printf("Azzeramento completato!");
                getch();
                break;
            }
            case 0:{
                scelta = 0;
                break;
            }
        }
    }while(scelta!=0);
}