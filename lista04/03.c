#include <stdio.h>

#define MAXLEN 100
#define q_alunos 50

typedef struct escola
{
	char nome[q_alunos];
	int ra;
	float p1,p2,p3;
	float media;

}escola;

int main()
{
	escola alunos[q_alunos];
	FILE *fp,*fp1;
	fp = fopen("lista_alunos.txt","r+");
	fp1 = fopen("media_alunos.txt","w");
	for(int i=0;i<q_alunos;i++)
	{
		fscanf(fp,"%s %d %f %f %f",alunos[i].nome,&alunos[i].ra,&alunos[i].p1,&alunos[i].p2,&alunos[i].p3);
		alunos[i].media = (alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;

	}

	for(int i=0;i<q_alunos;i++)
	{
		fprintf(fp1,"%s %d %.2f %.2f %.2f %.2f\n",alunos[i].nome,alunos[i].ra,alunos[i].p1,alunos[i].p2,alunos[i].p3,alunos[i].media);
	}
	
	fclose(fp);
	fclose(fp1);
}
