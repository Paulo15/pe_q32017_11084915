#include <stdio.h>
#include <math.h>

typedef struct Pontos
{
  float x,y,z;
  float modulo;
  
  
}Pontos;

float direcao(float a, float b)
{
  float d=b-a;
  return d;
}

void tamanho(Pontos *p3)
{
  p3->modulo=pow(p3->x,2)+pow(p3->y,2)+pow(p3->z,2);
  p3->modulo=(sqrt(p3->modulo));
}



int main()
{
  Pontos p1,p2,p3;
  char c;
  scanf("%f %c %f %c %f",&p1.x,&c,&p1.y,&c,&p1.z);
  scanf("%f %c %f %c %f",&p2.x,&c,&p2.y,&c,&p2.z);
  p3.x=direcao(p1.x,p2.x);
  p3.y=direcao(p1.y,p2.y);
  p3.z=direcao(p1.z,p2.z);
  tamanho(&p3);
  printf("%.2f\n",p3.modulo);
  
 
  
}
