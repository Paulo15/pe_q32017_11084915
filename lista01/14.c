#include<stdio.h>

int main()
{
    int soma,x,i;
    double media;
    soma=0;
    
    scanf("%d",&x);
    i=x;
    while(i>=0)
    {
        soma=soma+i;
        
        i--;
    }
    media=(double)soma/x;
    
    printf("Soma:%d\n",soma);
    printf("Media:%.3lf",media);
    
}