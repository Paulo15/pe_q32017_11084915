#include <stdio.h>
#include <math.h>


int dec_bin(int n)
{
    if(n==0)
    {
        return 0;
    }
    int aux;
    aux=n%2;
    n/=2;
    return aux+(10*dec_bin(n));
}


int bin_dec(int b,int p)
{
    int n;
    if(b<10)
    {
        if(b==0)
        {
            return 0;
        }
        if(b==1)
        {
            return 1*pow(2,p);
        }
        
    }
    else
    
    n=b%10;
    b/=10;
    return (n*pow(2,p))+bin_dec(b,p+1);
}

int main()
{
    int n,opcao;
    int p=0;
    scanf("%d %d",&n,&opcao);
    if(opcao==1)
    {
        printf("%d",dec_bin(n));
    }
    if(opcao==2)
    {
        printf("%d",bin_dec(n,p));
    }
    
   
}