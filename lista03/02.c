#include <stdio.h>
#include <stdlib.h>

//RECEBE STRING E INVERTE

int tamanho(char *c)
{
	int t=0;
	while(c[t]!='\0')
	{
		t++;

	}
	return t;

}

char *inverte(char* c, int t)
{
	char s[t];
	
	int i=0;
	int j=t-1;
	
	while(j>=0)
	{
		s[j]=c[i];
		i++;
		j--;
	}
	c=s;
	return c;

}


int main ()
{
	int n=0;
	char entrada[255];
	fgets(entrada, 255, stdin);
	n=tamanho(entrada);
	printf("%s", inverte(entrada,n));
	printf("\n");
	return 0;

}