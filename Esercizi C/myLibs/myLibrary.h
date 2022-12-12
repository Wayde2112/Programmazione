#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int casuale(int inf, int sup){
    return rand()%(sup-inf+1)+inf;
}

int generaPin(){
    return rand()%10;
}

void stampaArray(int v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++)
    {
        printf("\n%d: %d", i, v[i]);
    }
}

int ricercaArray(int v[], int dimensione, int elemento){
    int i;
    for (i = 0; i < dimensione; i++)
        if(v[i]==elemento)
            return i; //trovato
    return -1; //non trovato
            
}

float radicePositivi(int v[], int dimensione){ //radice positivi
    int i, somma=0;
    for (i = 0; i<dimensione; i++)
        if(v[i]>0) somma+=v[i];
    return sqrt(somma);
}

void stampa(int v[], int dimensione){
    int i;
    for (i = 0; i < dimensione; i++)
        printf("%d ", v[i]);
}

void ordinaArrayCrescente(int v[], int dimensione){
    int i,j;
    for(i=0;i<dimensione;i++){
        for(j=i+1;j<dimensione;j++)
            if(v[i]>v[j])
                scambio(&v[i],&v[j]);
        printf("\n%d: ", i);
        stampa(v,dimensione);    
    }
}

void ordinaArrayDecrescente(int v[], int dimensione){
    int i,j;
    for(i=0;i<dimensione-1;i++){
        for(j=i+1;j<dimensione;j++)
            if(v[i]<v[j])
                scambio(&v[i],&v[j]);
        printf("\n%d: ", i);
        stampa(v,dimensione);    
    }
}

void caricaArray(int v[], int dimensione){
    int i;
    for(i=0;i<dimensione;i++)
        v[i]=casuale(1,100);
}

int contaMultipliN(int v[], int n){
    int i, count;
    for (i = 0; i < n; i++)
    {
        if (v[i]%n==0)
            count++;
        printf("\n\nMultipli di %d: %d", n, count);
        
    }
    
}

int ricercaArrayMax(int v[], int dimensione){ //ricerca max
    int i, max=v[0];
    for (i = 1; i < dimensione; i++)
        if(v[i]>max) max=v[i];
        return max;             
}

int ricercaArrayMin(int v[], int dimensione){ //ricerca min
    int i, min=v[0];
    for (i = 1; i < dimensione; i++)
        if(v[i]<min) min=v[i];
        return min; 
}

int stampaMultipliN(int v[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        if (v[i]%n==0)
            printf("\n%d: %d", i, v);
        
    }
}

void scambio(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int dado(int nF){
    
    if(nF<4 || nF>53)
        return 0;
    
    return rand()%nF+1;
}

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

void kmHtoMinKm(double speed){
    int min, s;
    double sf;
    min = (int)60/speed;
    sf = (60/speed-min)*60;
    
    printf("\nVelocita': %.1f -> Passo: %d:%.0lf/km", speed, min, sf);
}

void minKmtoKmH(int min, double s){
    float speed = (float)1/(min*60+s)*3600;
    printf("\nPasso: %d:%d/km -> Velocita': %.1f km/h", min, s, speed);
}

void calcolaSplitbyDistanceTime(double distance, int h, int m, double s){
    int n; double split;
    m = m + (h*60);
    s = s + (m*60);
    printf("\n\nSplit: "); scanf("%lf", &split);
    double r = (int)distance/split;
    s = (double)s/r;
    m = (int)s/60;
    while(s>=60){
        s-=60;
    }
    h = (int)h/60;
    printf("%d:%d:%.2lf ogni %.0lfm per %.0lf volte", h, m, s, split, floor(r));   
}

void calcolaPaceFromDistanceTime(double distance, int h, int m, double s){
    
}

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
