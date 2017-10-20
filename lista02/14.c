#include <stdio.h>
#include <stdlib.h>

int palidromo(int *p,int n)
{
    int i=0;
    int j=n-1;
    int cont=0;
    for(i=0;i<n;i++)
    {
        if(p[i]==p[j])
        {
            
        }
        else if(p[i]!=p[j])
        {
            cont++;
        }
        j--;
    }
    if(cont==0)  //e palidromo
    {
        return 1;
    }
    else return 0;
}

int tamanho(int n)
{
    int cont=0;
    while(n!=0)
    {
        n/=10;
        cont++;
    }
    return cont;
}



int verifica(int p)
{
    if (p==0)
    {
        printf("nao\n");
    }
    else if(p==1)
    {
        printf("sim\n");
    }
}

void copia(int *p, int t,int n)
{
    
    int aux,i;
    aux=0;
    int j=t-1;
    
    
    for(i=0;i<t;i++)
    {
        aux=n%10;
        n/=10;
        p[j]=aux;
        j--;
    }
}


int main()
{
    int n,t,*p;
    scanf("%d",&n);
    t=tamanho(n);
    p=malloc(t*sizeof(int));
    
    copia(p,t,n);
    int i;
    verifica(palidromo(p,t));
    
}