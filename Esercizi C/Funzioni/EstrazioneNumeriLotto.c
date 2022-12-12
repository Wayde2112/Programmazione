/*
Visualizzare la frequenza delle uscite di un dado a 6 facce. (in %) stabilire il lancio di dati
*/

#include <stdio.h>
#include <math.h>
#include <time.h>

int dado(){
    
    int e = rand()%6+1; 
    return e;
}

int main(){

    srand(time(NULL));

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, n;

    printf("Quanti lanci vuoi effettuare?");
    scanf("%d", &n);

    

    for (int i = 0; i < n; i++)
    {
        switch (dado())
        {
            case 1 :
                c1++;
                break;
            
            case 2 :
                c2++;
                break;

            case 3 :
                c3++;
                break;

            case 4 :
                c4++;
                break;

            case 5 :
                c5++;
                break;
                
            case 6 :
                c6++;
                break;
        }
    }

    printf("\nn1: %d", c1);
    printf("\nn2: %d", c2);
    printf("\nn3: %d", c3);
    printf("\nn4: %d", c4);
    printf("\nn5: %d", c5);
    printf("\nn6: %d", c6);

    printf("\n\nFrequenza delle uscite");
    printf("\nn1: %.2f%%", (float)c1/n*100);
    printf("\nn2: %.2f%%", (float)c2/n*100);
    printf("\nn3: %.2f%%", (float)c3/n*100);
    printf("\nn4: %.2f%%", (float)c4/n*100);
    printf("\nn5: %.2f%%", (float)c5/n*100);
    printf("\nn6: %.2f%%", (float)c6/n*100);
    
}