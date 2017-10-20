#include <stdio.h>
#include <math.h>

float soma(float x,float y)
{
    return x+y;
}

float subtracao (float x, float y)
{
    return x-y;
}

float multplicacao(float x,float y)
{
    return x*y;
}

float divisao(float x, float y)
{
    return x/y;
}

float potencia(float x, float y)
{
    if(y==1)
    {
        return x;
    }
    return x*potencia(x,y-1);
}

int main()
{
    int opcao;
    float x,y;
    scanf("%d %f %f",&opcao,&x,&y);
    
    if (opcao==1)
    {
        printf("%.2f",soma(x,y));
    }
    if (opcao==2)
    {
        printf("%.2f",subtracao(x,y));
    }
    if (opcao==3)
    {
        printf("%.2f",multplicacao(x,y));
    }
    if (opcao==4)
    {
        printf("%.2f",divisao(x,y));
    }
    if (opcao==5)
    {
        printf("%.2f",potencia(x,y));
    }
    
}