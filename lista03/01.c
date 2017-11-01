#include <stdio.h>

//RECEBE STRING E CONTA NUMERO DE VOGAIS DENTRO DELA
int analisa(char v)
{
	if (v=='a'||v=='e'||v=='i'||v=='o'||v=='u')
	{
		return 1;
	}
	else return 0;
}

int vogais(char *c)		//Conta vogais
{
	int t=0;
	int vogais=0;
	while(c[t]!='\0')
	{
		vogais+=analisa(c[t]);
		t++;
	}
	return vogais;
}

int main ()
{
	char entrada[255];
	fgets(entrada,255,stdin);
	printf("%d\n",vogais(entrada));

 	return 0;
}