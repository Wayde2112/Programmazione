/*
Fattoriale di un numero naturale
3!=3*2*1
Eccezioni
1!=1 - 0!=1

n!=n*(n-1)!
*/

#include <stdio.h>

int fattoriale(int n1){
    int fatt=1;
    for(int i=n1; i>1; i--) fatt*=i;
    return fatt;
}

int main(){
    int a, flag, fatt;

    do{
        flag=0;
        printf("Inserisci un numero naturale: "); scanf("%d", &a);
        if(a<0){
            printf("\nNumero inserito non valido!\n");
            flag=1;
        } 
    }while(flag==1);

    for(int i=a; i>1; i--) fatt*=i;
    
    printf("%d!=%d", a, fatt);
    
    return 0;
}
