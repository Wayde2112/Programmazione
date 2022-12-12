/*
Creare un mazzo di carte napoletane

Stampare una corta.
Ad esempio da input      
*/

#include <stdio.h>
#include <math.h>
#include <strings.h>

int menu(){ //funzione menu
    int scelta = -1;
    
    printf("\n\t\tMenu");
    printf("\n1)Utilizzare il mazzo napoletano");
    printf("\n2)Utilizzare il mazzo genovese");
    printf("\n0)Esci");
    printf("\n\t\tScelta: ");
    scanf("%d",&scelta);
    return scelta;
}

int main(){
    int carta, seme, scelta, nCarte; 
    
    do{
        switch (menu()){
            case 1: {
                nCarte = 40;
                do{
                    printf("Che carta desideri stampare?\n");
                    scanf("%d", &carta); 
                } while (carta<1 || carta>10);

                do{
                    printf("Di che seme? [1 - Coppe] [2 - Spade] [3 - Denari] [4 - Bastoni]\n");
                    scanf("%d", &seme);
                } while (seme<1 || seme>4);
                
                if(carta>7 && carta<11){

                    switch (carta){
                    case 8: printf("Fante di "); break;
                    case 9: printf("Cavallo di "); break;
                    case 10: printf("Re di "); break;
                    }
                }
                else printf("%d di ", carta);

                switch (seme){
                    case 1: printf("Coppe"); break;
                    case 2: printf("Spade"); break;
                    case 3: printf("Denari"); break;
                    case 4: printf("Bastoni"); break;   
                } 
                break;
            }

            case 2: {
                nCarte = 52;
                do{
                    printf("Che carta desideri stampare?\n");
                    scanf("%d", &carta); 
                } while (carta<1 || carta>13);

                do{
                    printf("Di che seme? [1 - Cuori] [2 - Quadri] [3 - Fiori] [4 - Picche]\n");
                    scanf("%d", &seme);
                } while (seme<1 || seme>4);
                
                if(carta>10 && carta<14){

                    switch (carta){
                    case 8: printf("Jack di "); break;
                    case 9: printf("Donna di "); break;
                    case 10: printf("Re di "); break;
                    }
                }
                else printf("%d di ", carta);

                switch (seme){
                    case 1: printf("Cuori"); break;
                    case 2: printf("Quadri"); break;
                    case 3: printf("Fiori"); break;
                    case 4: printf("Picche"); break;   
                } 
            }
        }
    } while (scelta!=0);  



}
    
