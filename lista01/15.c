#include<stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    if(n>99)
    {
        int i=100;
        while(i<=n)
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
            i++;
        }
    }
    else
    {
        
    }
}