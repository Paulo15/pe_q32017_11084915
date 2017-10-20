#include <stdio.h>
#include <math.h>


int decimal_binario(int dec)
{   int bin;
    int aux;
    int pot=1;
        while(dec>0)
        {
            aux=dec%2;
            dec=dec/2;
            bin=bin+(aux*pot);
            pot=pot*10;
        }
    return bin;
}

int binario_decimal(int bin)
{
   int pot=1;
    int dec;
    int aux;
        
          if(bin==0)
        {
            dec=0;
            
        }
       int cont=0;
        while(bin>0)
        {
           if(cont==0)
           {
               pot=0;
           }
           else if(cont==1)
           {
               pot=1;
           }
            aux=bin%10;
            bin=bin/10;
            dec=dec+(pow(2,pot)*aux);
            pot++;
            cont++;
        }
        return dec;
}

float celsius_kelvin(float c)
{
    float k=c+273.15;
    return k;
}

float celsius_fahrenheit(float c)
{
    float f=(1.8*c)+32;
    return f;
}

float kelvin_celsius(float k)
{
    float c=k-273.15;
    return c;
}
float fahrenheit_celsius(float f)
{
    float c=(f-32);
    c/=1.8;
    return c;
}


float seleciona(int n1,int n2,int n3, float valor)
{
    if (n1==2)  //Base numérica
    {
        if(n2==1)   //Entrada->Decimal
        {
            if(n3==2)       //Saida->Binario
            {
                return decimal_binario(valor);
            }
        }
        
        if(n2==2)   //Entrada->Binario
        {
            if(n3==1)       //Saida->Decimal
            {
                return binario_decimal(valor);
            }
        }
    }
    
    
      if (n1==1)  //Temperatura
    {
        float aux;
        if(n2==1)   //Entrada->Celsius
        {
            if(n3==1)       //Saida->Celsius
            {
                return valor;
            }
            if(n3==2)       //Saida->Fahrenheit
            {
                
                return celsius_fahrenheit(valor);
            }
            if(n3==3)       //Saida->Kelvin
            {
                return celsius_kelvin(valor);
            }
        }
        
        if(n2==2)   //Entrada->Fahrenheit
        {
            
            if(n3==1)       //Saida->Celsius
            {
                aux=fahrenheit_celsius(valor);
                return aux;
            }
            if(n3==2)       //Saida->Fahrenheit
            {
                return valor;
            }
            if(n3==3)       //Saida->Kelvin
            {
                aux=fahrenheit_celsius(valor);
                aux=celsius_kelvin(aux);
            }
        }
        if(n2==3)   //Entrada->Kelvin
        {
            if(n3==1)       //Saida->Celsius
            {
                return kelvin_celsius(valor);
            }
            if(n3==2)       //Saida->Fahrenheit
            {
                aux=kelvin_celsius(valor);
                aux=celsius_fahrenheit(aux);
                return aux;
            }
            if(n3==3)       //Saida->Kelvin
            {
                return valor;
            }
        }
    }
}

void imprime(int n1,int n2,int n3, int valor)
{
    if (n1==1)
    {
        printf("\n%.2f",seleciona(n1,n2,n3,valor));
        {
            if(n3==1)
            {
                printf(" C");
            }
            if(n3==2)
            {
                printf(" F");
            }
            if(n3==3)
            {
                printf(" K");
            }
        }
    }
    else if(n1==2)
    {
        int aux;
        aux = (int)(seleciona(n1,n2,n3,valor));
        printf("%d",aux);
    }
}

int main()
{
    int n1,n2,n3;
    float valor;
    
    scanf("%d %d %d %f",&n1,&n2,&n3,&valor);
    imprime(n1,n2,n3,valor);
    
    
}