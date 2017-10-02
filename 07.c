#include<stdio.h>

int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);


	if(x!=0 && y==0)
	{
		printf("1");
	}
	else if(x==0)
	{
		if(y==0)
		{
			printf("MATH ERROR");
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		int aux=x;
		while(y>1)
	{
			
		
			x=x*aux;
			y--;
	}
	printf("%d\n",x);
	}

}