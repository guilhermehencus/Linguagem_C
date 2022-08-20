#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int count,id,countm,countf;
	char nome[16];
	char sexo[30];
	countm=0;
	countf=0;
	for (count=0;count<20;count++)
	{
		fflush(stdin);
		printf("\nescreva seu nome:");
		scanf("%c",&nome);
		fflush(stdin);
		printf("\nescreva seu sexo:");
		gets(sexo);
		fflush(stdin);
		printf("\nescreva sua idade:");
		scanf("%d",&id);
		if (strcmp(sexo,"masculino")==0)
		{
			countm++;
		}
		else
		{
			if (strcmp(sexo,"feminino")==0)
			{
				countf++;
			}
		}
	}
	printf("\nos homens são:%d",countm);
	printf("\nas mulheres são:%d",countf);
}
