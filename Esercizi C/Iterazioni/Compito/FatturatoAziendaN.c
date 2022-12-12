/*
Calcolare il totale del fatturato e delle spese sostenute da una azienda di consulenti.
Di ogni consulente si conosce il fatturato e le spese sostenute. Si richiede inoltre di 
visualizzare il fatturato max, le spese minime, il guadagno max rilevato (guadagno = fatturato - spese)
*/

#include <stdio.h>
#include <float.h>

int main(){
    float f, totF = 0, s, totS = 0, g, maxG = 0, maxF = FLT_MIN, minS = FLT_MAX, nC;
    
    printf("Inserisci quanti consulenti ha l'azienda: ");
    scanf("%f", &nC);

    for (int i = 0; i < nC; i++)
    {
        printf("\n%d consulente", i+1);

        printf("\n\nFatturato: ");
        scanf("%f", &f);
        totF += f;

        printf("Spese: ");
        scanf("%f", &s);
        totS += s;

        if(f>maxF) maxF = f;

        if(s<minS) minS = s; 

        g = f - s;
        if(g>maxG) maxG = g;
    }
    
    printf("\n\nStampa dei risultati:");
    printf("\nFatturato totale: %.2f euro", totF);
    printf("\nSpese sostenute: %.2f euro", totS);
    printf("\nFatturato Max: %.2f euro", maxF);
    printf("\nSpese minime: %.2f euro", minS);
    printf("\nGuadagno max %.2f euro", maxG);
}