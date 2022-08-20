#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	char cargo[20];
	char nome[15]; 
	printf("escreva o seu nome:");
	gets(nome);
	printf("digite o seu cargo:");
	scanf("%s",&cargo);
	if(strcmp(cargo,"escrivao")==0)
	{
		printf("\nfuncionário do bloco A");
	}
	if(strcmp(cargo,"contabilista")==0)
	{
		printf("\nfuncionario do bloco A");
	}
	else
	{
		printf("\nnão do bloco A");
	}
}

