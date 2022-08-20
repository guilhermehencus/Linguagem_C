#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
	int m;
	setlocale(LC_ALL,"Portuguese");
	printf("*****Menu*****");
	printf("1 - Batata Frita \n");
	printf("2 - Almodegas \n");
	printf("3 - Bife Acebolado \n");
	printf("4 - Prato Feito \n");
	printf("Opção =");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
				printf("Voce escolheu Batata Frita \n");
				break;
		case 2:
				printf("Voce escolheu Almodegas \n");
				break;
		case 3:
				printf("Voce escolheu Bife Acebolado \n");
				break;
		case 4:
				printf("Voce escolheu Prato Feito \n");
				break;
		default:
				printf("Digitou errado");
	}
}
