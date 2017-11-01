#include <stdio.h>
#include <stdlib.h>

//ENTRA MATRIZ E RETORNA A TRANSPOSTA

int escreveM(int m[3][3])
{
	int l=3;
	int *c=&l;
	int i=0;
	int j=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<*c;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
}

int imprime(int m[3][3])
{
	int l=3;
	int *c=&l;
	int i=0;
	int j=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<*c;j++)
		{
			printf("%d ",m[j][i]);
		}
		printf("\n");
	}
}


int main()
{
	int matriz[3][3];
	int n=3;
	escreveM(matriz);
	imprime(matriz);
	
}
