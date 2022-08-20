#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
int main(void){ 
	setlocale(LC_ALL,"Portuguese");
	float tds;
	char cargo[20];
	char escolaridade[26];
	printf("digite o seu tempo de serviço:");
	scanf("%f",&tds);
	printf("digite o seu cargo:");
	scanf("%s",&cargo);
	printf("digite a sua escolaridade:");
	scanf("%s",&escolaridade);
	if(tds>5 and strcmp(cargo,"analista")==0)
	{
		if(strcmp (escolaridade,"superior")==0)
		{
			printf("funcionário promovido");
		}
		else 
		{
			printf("funcionário reprovado");
		}
	}
}
