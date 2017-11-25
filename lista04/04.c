#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

#define BIGNUM ULONG_MAX

#define aux 1000000

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	int a;
	while(x>=2)
	{
		

		if(x%2!=0)
		{
			 return 0;		//NAO e potencia
		}
		else if(x==2) 
			{
				return 1;	//E potencia
			}

		x/=2;
	}
}

ulint f2(ulint x)
{
	while(x>0)
	{
		if(x&1!=0)		
		{
			return 0;		//NAO e potencia
		}
		else if(x==2)
			{
				return 1;		//E potencia
			}
		x=x>>1;
	}
	
}

int main(void)
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma=0;

	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++)
	{

		soma+=f1(i);
		
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);

	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++)
	{
		soma+=f2(i);
		
	}
	tempo_fim=clock();
	tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto versao bitwise: %lf\n", tempo_gasto);

	return 0;
}