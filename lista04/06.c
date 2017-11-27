#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x,ulint y)		//retorna 1 se x maior			retorna 0 se y maior ou igual
{
	if(x>y)
	{
		
		return 1;
	}
	else 
		{
			
			return 0;
		}
}

ulint f2(ulint x, ulint y)		//retorna 1 se x maior			retorna 0 se y maior ou igual
{

	int aux=0;
	
	ulint soma_bitX=0;
	ulint soma_bitY=0;
		while(x>0)	
	{
		
		if(x&1==1)
		{
			soma_bitX+=pow(2,aux);
		}
		aux++;
		x=x>>1;
	}
	aux=0;
		while(y>0)	
	{
		if(y&1==1)
		{
			soma_bitY+=pow(2,aux);
		}
		aux++;
		y=y>>1;
	}

	if(soma_bitX>soma_bitY)
	{
		
		return 1;
	}
	else
	{
		
		return 0;
	}
	

}

int main(void)
{
	srand(time(NULL));
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma=0;
	ulint i,y;
	

	tempo_init=clock();
	for(i=0;i<BIGNUM;i++)
	{
		y=rand()%5*i;
		soma+=f1(i,y);
		
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);

	tempo_init=clock();
	for(i=0;i<BIGNUM;i++)
	{
		y=rand()%5*i;
		soma+=f2(i,y);
		
	}
	tempo_fim=clock();
	tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto versao bitwise: %lf\n", tempo_gasto);

	return 0;
}
