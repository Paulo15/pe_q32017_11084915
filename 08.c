#include<stdio.h>

int main()
{
	int x,n1,n2,aux;
	scanf("%d",&x);
	n1=0;
	n2=1;

	if(x==0)
	{
		printf("%d",0);
	}
	else if(x==1)
	{
		printf("%d",1);
	}
	else if(x>1)
	{
		while(x>1)
		{
			aux=n2;
			n2=n2+n1;
			n1=aux;
			x--;
		}
		printf("%d",n2);
	}

	


}