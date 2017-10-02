#include<stdio.h>
#include<math.h>

int main()
{
    int x,i;
    scanf("%d",&x);
    
    while(x>0)
    {
        i=i+x;
        x--;
    }
    printf("%d",i);
}