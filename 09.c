#include<stdio.h>
#include<math.h>

int main ()
{
    double temperatura;     //Temperatura Celsius->Fahrenheit->opcao 1
    int opcao;              //Temperatura Fahrenheit->Celsius->opcao 2
    double x;
    scanf("%lf",&temperatura);
    scanf("%d", &opcao);
    
    if(opcao==1)
    {
       x=(9*(temperatura)/5)+32;
        printf("%lf",x);
    }
    if(opcao==2)
    {
         x=(5*(temperatura-32))/9;
        printf("%lf",x);
    }
}