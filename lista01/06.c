#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int z;
	z=x;

	if(x==0||x==1)
	{
		printf("1");
	}
	else if(x>1)
	{
		while(x>1)
		{
			x=x-1;
			z=z*x;
		}
		printf("%d",z);
	}
	
}


