#include <stdio.h>
#include <stdlib.h>

//RECEBE DOIS VETORES E RETORNA A SOMA DOS DOIS

int *escreve(int *v, int n)
{
	
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
		
	}
	
	return v;
}

void *soma(int *v1,int *v2, int n)
{
	
	int i=0;
	
	int v3[n];
	
	while(i<n)
	{
		v3[i]=v1[i]+v2[i];
		printf("%d ",v3[i]);
		
		i++;
	}
	printf("\n");
	

}

int main()
{
	int n=5;
	
	int v1[n],v2[n];

	escreve(v1,n);
	escreve(v2,n);
	soma(v1,v2,n);
	
	
	
	
}

