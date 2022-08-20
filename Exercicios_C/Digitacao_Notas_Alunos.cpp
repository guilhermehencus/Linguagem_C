#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int aprovado,reprovado,resposta;
	float media,div, n1,n2;
	div=2;
	reprovado=0;
	aprovado=0;
	do
	{
		printf("\nescreva a primeira nota:");
		scanf("%f",&n1);
		printf("\nescreva a segunda nota:");
		scanf("%f",&n2);
		media=(n1+n2)/div;
		printf("\n a média do aluno é%2.f",media,div);
		if (media>5)
		{
			printf("\naprovado");
			aprovado++;
		}
		else
		{
			printf("\nreprovado");
			reprovado++;
		}
		printf("\ndigite 1 para continiar");
		printf("\ndigite 2 para sair\n");
		printf("digite a opção desejada:");
		scanf("%d",&resposta);
	}
	while (resposta !=2);
	printf("\na quantidade de alunos aprovado é:%2.d",aprovado);
	printf("\na quantidade de alunos reprovado é:%2.d",reprovado);
}
