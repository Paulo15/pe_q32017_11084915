#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ORDENA VETOR E RETORNA MEDIANA

int cmpfunc(const void *a, const void *b)
{
	return (*(int*)a-*(int*)b);
}

void escreve(int *v, int n)
{	int i=0;
	while(i<n)
	{
		scanf("%d",&v[i]);
		i++;
	}
}

float mediana (int *v, int n)
{
	int i=0;
	i=(ceil)(n/2);
	
	return v[i];
		
}

int main()
{
	int n=0;
	scanf("%d",&n);

	int *v=(int*)malloc(n*sizeof(int));
	escreve(v,n);
	qsort(v, n, sizeof(int),cmpfunc);
	printf("%.2lf",mediana(v,n));
}