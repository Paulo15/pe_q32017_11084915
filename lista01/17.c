#include <stdio.h>
#include <math.h>


int somaq(int x, int y)	//Soma dos quadrados

{
	int final=0;
	int i;
	
	i=x;

	while(i<=y)
	{
		final=final+pow(i,2);
		i++;
	}
	return final;
}

int quadrado(int x, int y) //Quadrado das somas
{
	int final=0;
	int i=0;
	i=x;

	while(i<=y)
	{
		final=final+i;
		i++;
	}
	final=pow(final,2);
	return final;
}

int diferenca(int somaq, int quadrado)

{
	int dif=quadrado-somaq;
	return dif;
}

int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);

	int soma, quad,dif;
	soma=somaq(x,y);
	quad=quadrado(x,y);
	dif=diferenca(soma,quad);

	printf("soma dos quadrados = %d\n",soma);
	printf("quadrado da soma   = %d\n",quad);
	printf("diferenca	   = %d\n",dif);

}