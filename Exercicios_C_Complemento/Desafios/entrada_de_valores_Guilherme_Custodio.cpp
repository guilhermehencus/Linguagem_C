#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int ent_v;
	int count;
	int quant_1;
	int quant_2;
	int quant_3;
	int quant_4, quant_5;
	float soma;
	count=0;
	quant_1=0;
	quant_5=0;
	soma=0;
	double media;
	printf("\nGuilherme Henrique Guimarães Custódio");
	do {
		printf("\nDigite um número:");
		scanf("%d",&ent_v);
		if(ent_v<0) {
			printf("Atenção!!! Você digitou um valor inválido.");
		} 
		else if(ent_v>=1 and ent_v<=9) {
			quant_1++;
			count++;
			soma=soma+ent_v;	
		}
		else if(ent_v>=10 and ent_v<=99){
			quant_2++;
			count++;
			soma=soma+ent_v;
		}
		else if(ent_v>=100 and ent_v<=999){
			quant_3++;
			count++;
			soma=soma+ent_v;
		}
		else if(ent_v>=1000 and ent_v<=10000){
			quant_4++;
			count++;
			soma=soma+ent_v;
		} 
		else if(ent_v>10000) {
			quant_5=quant_5+1;
			count++;
			soma=soma+ent_v;
		}
	}	while (ent_v!=0);
	if (ent_v=='\0' and soma==0)
	{
		printf("Atenção !!!! Você não digitou nenhum número.");
	}
	else {
		media=soma/count;
		printf("Você digitou %d número(s), sendo que:\n", count);
		printf(" Você digitou %d números entre 1 e 9.\n", quant_1);
		printf(" Você digitou %d números entre 10 e 99.\n", quant_2);
		printf(" Você digitou %d números entre 100 e 999.\n", quant_3);
		printf(" Você digitou %d números entre 1.000 e 10.000.\n", quant_4);
		printf(" Você digitou %d números com outros valores.\n", quant_5);
		printf(" A média é: %.2f", media);
	}
}


