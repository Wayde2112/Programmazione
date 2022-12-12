/*
Dati in input: - un anno;
Stampare a video se l'anno è bisestile e che sia compreso nel calendario gregoriano (1582):
*/

#include <stdio.h>
#include <math.h>


int main(){
	int a;
	
	printf("Digita l'anno: ");
	scanf("%d", &a);

	if (a>=1582){
		if(a%400==0) printf("Anno bisestile");
		else if(a%4==0 && a%100!=0) printf("Anno bisestile");
		
        else printf("Anno non bisestile");    
	}
    else printf("Anno non presente nel calendario gregoriano");

	return 0;
}
