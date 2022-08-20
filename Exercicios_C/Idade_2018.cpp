#include<stdio.h>
#include<locale.h>
int main(void){
	char nome[30];
	setlocale(LC_ALL,"Portuguese");   
	float aatual,an,id;
	aatual=2018;
	printf("digite o seu nome:");
	gets(nome);
	printf("digite o seu ano de nascimento:");
	scanf("%f",&an);
	id=2018-an;
	printf("\n a sua idade é:%f",id);
	printf("\n e o seu nome é:%s\n",nome);
}
