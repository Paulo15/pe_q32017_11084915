#include <stdio.h>
#include <math.h>

int paridade(int n)
{
    if (n%2==0)
    {
        return 0;
    }
    else return 1;
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",paridade(x));
    return 0;
}