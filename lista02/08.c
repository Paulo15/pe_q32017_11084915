#include <stdio.h>


#define max 10

double acrescimo(double salario, int extra)
{
    double a;
    if(extra>40)
    {
        extra=40;
    }
    else
    a=salario/20;
    a/=8;
    a+=40;
	a=a*extra;
	
	return a;
}

double desconto(double salario, int faltas)
{  
    double d;
    d=salario/20;
    d*=faltas;
    	printf("desconto %f",d);
    return d;
    
}

int main()
{
	int opcao,faltas,extra;

	scanf("%d",&opcao);
	scanf("%d",&faltas);
	scanf("%d",&extra);

    double salario,a,d;


	switch(opcao)
	{
		case 1:
			
			salario=10000.00;
			a=acrescimo(salario,extra);
			d=desconto(salario,faltas);
			salario=salario+a-d;
			printf("cargo 				:	Diretor\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",d);
			printf("acrescimos			:	%.2lf\n",a);
			printf("salario				:	%.2lf\n",salario);
			break;


		case 2:

			salario=8000.00;
			a=acrescimo(salario,extra);
			d=desconto(salario,faltas);
			salario=salario+a-d;
			printf("cargo 				:	Diretor\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",d);
			printf("acrescimos			:	%.2lf\n",a);
			printf("salario				:	%.2lf\n",salario);
			break;

		case 3:
		
			salario=5000.00;
		    a=acrescimo(salario,extra);
			d=desconto(salario,faltas);
			salario=salario+a-d;
			printf("cargo 				:	Diretor\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",d);
			printf("acrescimos			:	%.2lf\n",a);
			printf("salario				:	%.2lf\n",salario);
			break;

		case 4:
		
			salario=3000.00;
			a=acrescimo(salario,extra);
			d=desconto(salario,faltas);
			salario=salario+a-d;
			printf("cargo 				:	Diretor\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",d);
			printf("acrescimos			:	%.2lf\n",a);
			printf("salario				:	%.2lf\n",salario);
			break;

		case 5:
		
			salario=2000.00;
			a=acrescimo(salario,extra);
			d=desconto(salario,faltas);
			salario=salario+a-d;
			printf("cargo 				:	Diretor\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",d);
			printf("acrescimos			:	%.2lf\n",a);
			printf("salario				:	%.2lf\n",salario);
			break;				

	}
}