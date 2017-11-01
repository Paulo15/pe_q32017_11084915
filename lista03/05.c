#include <stdio.h>
#include <stdlib.h>
//Vetor dinâmico
//Imprimir repeticoes
int escreve(int *v,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
}

int imprime(int **c,int n,int b)
{
	int i=0;
	int j=0;
	int v=0;
		for(i=0;i<n;i++)	//Colunas
			{
				if(c[i][1]>1)
				{
					printf("%d-%d ",c[i][0],c[i][1]);
				}
			}
		printf("\n");
}

int **analisa(int *v, int n)
{
	int **c=malloc(n*sizeof(int*));
	int i=0;
	for(i=0;i<n;i++)
	{
		c[i]=malloc(2*sizeof(int*));
		c[i][0]=v[i];
	}
	i=0;
	int j=0;
	int cont=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				
				if((c[i][0]==v[j])&&(v[j]!=-1))
				{
					if(i==j)
					{
						v[j]=-1;
						cont++;
					}
					if(i!=j)
					{
						c[i][0]=v[j];
						v[j]=-1;
						cont++;
					}
				}
				c[i][1]=cont;	//c[numero][repeticoes]
			}
			cont=0;
		}
	return c;
}

int main()
{
	int n=0;
	scanf("%d",&n);

	int *v=malloc(n*sizeof(int));
	escreve(v,n);
	imprime(analisa(v,n),n,2);

	free(v);
	v=NULL;
}

