#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int m;
	printf("\ndigite um número de mês:");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("\no mês é janeiro no mês:%2.d",m);
			break;
		case 2:
			printf("\no mês é fevereiro no mês:%2.d",m);
			break;
		case 3:
			printf("\no mês é março no mês:%2.d",m);
			break;
		case 4:
			printf("\no mês é abril no mês:%2.d",m);
			break;
		case 5:
			printf("\no mês é maio no mês:%2.d",m);
			break;
		case 6:
			printf("\no mês é junho no mês:%2.d",m);
			break;
		case 7:
			printf("\no mês é julho no mês:%2.d",m);
			break;
		case 8:
			printf("\no mês é agosto no mês:%2.d",m);
			break;
		case 9:
			printf("\no mês é setembro no mês:%2.d",m);
			break;
		case 10:
			printf("\no mês é outubro no mês:%2.d",m);
			break;
		case 11:
			printf("\no mês é novembro no mês:%2.d",m);
			break;
		case 12:
			printf("\no mês é dezembro no mes:%2.d",m);
			break;
		default:
			printf("erro");
	}
}
