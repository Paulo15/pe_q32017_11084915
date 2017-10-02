#include<stdio.h>
#include<math.h>

int main ()
{
    double temperatura;     //Temperatura Celsius->Kelvin->opcao 1
    int opcao;              //Temperatura Kelvin->Celsius->opcao 2
    double x;
    scanf("%lf",&temperatura);
    scanf("%d", &opcao);
    
    if(opcao==1)
    {
       x=temperatura+273.15;
        printf("%.2lf",x);
    }
    if(opcao==2)
    {
         x=temperatura-273.15;
        printf("%.2lf",x);
    }
}