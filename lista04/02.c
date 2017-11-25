#include <stdio.h>
#include <math.h>

int verifica();
int compara();

typedef struct Cronometro
{
	int ms,s,min;
	int total;
}Cronometro;

void diferenca(Cronometro *c1, Cronometro *c2)
{
	int boolean;
	int aux=0;
	
	inicio:

	boolean = compara(&c1->ms,&c2->ms);
	
		if(boolean==1)
		{
			c1->ms-=c2->ms;

			inicio2:

			boolean = compara(&c1->s,&c2->s);

			if(boolean==1)
			{
				c1->s-=c2->s;
				c1->min-=c2->min;
			}
			else 
			{
				if (c1->min>0)
				{
					c1->min--;
					c1->s+=60;
					goto inicio2;
				}
			}
		}
		else 
			{
				segundo:
				if (c1->s>0)
				{
					c1->s--;
					c1->ms+=100;
					goto inicio;
				}
				else if(c1->min>0)
				{
					c1->min--;
					c1->s+=60;
					goto segundo;
				}
				else
				{
					c1->ms-=c2->ms;
					c1->s-=c2->s;
					c1->min-=c2->min;
				}
			}
			
	
	

}

int compara(int *c1, int *c2)		//C1 deve ser maior
{
	if(*c1>=*c2)
	{
		return 1;
	}
	else return 0;
}



int imprime(Cronometro *c)
{
	printf("%dm %ds %d\n",c->min,c->s,c->ms);
}




int main()
{
	Cronometro c1,c2;
	scanf("%dm %ds %d",&c1.min,&c1.s,&c1.ms);
	scanf("%dm %ds %d",&c2.min,&c2.s,&c2.ms);
	diferenca(&c2,&c1);
	imprime(&c2);

}