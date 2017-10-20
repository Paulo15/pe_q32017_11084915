#include<stdio.h>
#include<math.h>

unsigned long int fatorial (unsigned long int f)
{
    if (f==0)
    {
        return 1;
    }
    else
    {
        return f*fatorial(f-1);
    }
}

unsigned long int binomial (unsigned long int n,unsigned long int k)
{
     unsigned long int nfat,kfat,cB;
    
    nfat=fatorial(n);
    kfat=fatorial(k);
    
    cB=nfat/(kfat*fatorial(n-k));
    return cB;
}

int main()
{
    unsigned long int n,k;
    scanf("%ld %ld",&n,&k);
    printf("%ld\n",binomial(n,k));
}