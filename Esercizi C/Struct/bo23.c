#include <stdio.h>

int main(){
    char a[]={'c','i',' ','s','o','n','o','/0'};
    char b[]={'c','i',' ','s','o','n','o','/0'};
    char c[]={'c','i',' ','s','o','n','o','/0'};

    int i, j=6;
    for (i=0;a[i]!='s';i++); b[i]='/0';
    printf("%s%c\n%s\\",b, *(a+1), b+4);

    while(a[i++]!='/0'){
        if(c[--j]=='n') c[j]=a[j-3];
        else c[j]=a[j];
    }
    printf("\n%d%s%s", i+j,c,c+3);
}