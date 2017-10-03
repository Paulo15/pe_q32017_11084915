#include <stdio.h>
#include <string.h>

#define max 10

int main()
{
	int opcao,faltas,extra;

	scanf("%d",&opcao);
	scanf("%d",&faltas);
	scanf("%d",&extra);

	double salario,desconto,acrescimo;


	switch(opcao)
	{
		case 1:
			
			salario=10000.00;
			desconto=(salario/20);
			desconto=desconto*faltas;
			acrescimo=((salario/20)/8)+40;
			acrescimo=acrescimo*extra;
			salario=salario+acrescimo-desconto;
			printf("cargo 				:	Diretor\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",desconto);
			printf("acrescimos			:	%.2lf\n",acrescimo);
			printf("salario				:	%.2lf\n",salario);
			break;


		case 2:

			salario=8000.00;
			desconto=(salario/20);
			desconto=desconto*faltas;
			acrescimo=((salario/20)/8)+40;
			acrescimo=acrescimo*extra;
			salario=salario+acrescimo-desconto;
			printf("cargo 				:	Gerente\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",desconto);
			printf("acrescimos			:	%.2lf\n",acrescimo);
			printf("salario				:	%.2lf\n",salario);
			break;

		case 3:
		
			salario=5000.00;
			desconto=(salario/20);
			desconto=desconto*faltas;
			acrescimo=((salario/20)/8)+40;
			acrescimo=acrescimo*extra;
			salario=salario+acrescimo-desconto;
			printf("cargo 				:	Engenheiro\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",desconto);
			printf("acrescimos			:	%.2lf\n",acrescimo);
			printf("salario				:	%.2lf\n",salario);
			break;

		case 4:
		
			salario=3000.00;
			desconto=(salario/20);
			desconto=desconto*faltas;
			acrescimo=((salario/20)/8)+40;
			acrescimo=acrescimo*extra;
			salario=salario+acrescimo-desconto;
			printf("cargo 				:	Técnico\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",desconto);
			printf("acrescimos			:	%.2lf\n",acrescimo);
			printf("salario				:	%.2lf\n",salario);
			break;

		case 5:
		
			salario=2000.00;
			desconto=(salario/20);
			desconto=desconto*faltas;
			acrescimo=((salario/20)/8)+40;
			acrescimo=acrescimo*extra;
			salario=salario+acrescimo-desconto;
			printf("cargo 				:	Operador\n");
			printf("número de faltas		:	%d\n",faltas);
			printf("horas-extra			:	%d\n",extra);
			printf("descontos			:	%.2lf\n",desconto);
			printf("acrescimos			:	%.2lf\n",acrescimo);
			printf("salario				:	%.2lf\n",salario);
			break;					

	}
}