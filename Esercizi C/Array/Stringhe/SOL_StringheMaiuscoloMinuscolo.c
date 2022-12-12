#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH  30
#define MAX  5

void maiuscolo(char parola[],int dimensione){
	int i;
	for(i=0;i<dimensione;i++)
		printf("%c",toupper((int)parola[i]));
}

void minuscolo(char parola[],int dimensione){
	int i;
	for(i=0;i<dimensione;i++)
		printf("%c",tolower((int)parola[i]));
}

int main(){
    char nomi[MAX][LENGTH]={"pinucciO", "lucia","ViOla","CarmEn","FrancEsco"};
    
	printf("\ntoupper: %c, %c",(char)97,toupper(97));
	printf("\ntolower: %c, %c",(char)69,tolower(69));
		
	printf("\n\nMaiuscolo/Minuscolo:");
	int i;
	for(i=0;i<MAX;i++){
		printf("\nNominativo: %s",nomi[i]);
		printf(", Maiuscolo: ");maiuscolo(nomi[i],strlen(nomi[i]));
		printf(", Minuscolo: ");minuscolo(nomi[i],strlen(nomi[i]));
	}    
    	     	
	   
}