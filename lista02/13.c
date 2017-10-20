#include <stdio.h>
#include <math.h>

int maior(int x, int y)
{
    
    if(x>y)
    {
        maxdivisor(x,y);
    }
    else if(x<=y)
    {
        maxdivisor(y,x);
    }
    
}


int maxdivisor(int a, int b)
{
    int aux;
    aux=a%b;
    
    if(aux==0)
    {
        return b;
    }
    else
    {
     a=b;
     b=aux;
     return maxdivisor(a,b);  
    }
    
    
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",maior(x,y));
}

