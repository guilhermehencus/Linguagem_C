#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
{ 	
	setlocale(LC_ALL,"Portuguese");
	float nc,s,de,cr,sa;
	printf("\nescreva o seu número de conta:");
	scanf("%f",&nc);
	printf("\nescreva o seu saldo:");
	scanf("%f",&s);
	printf("\ninforme o débito:");
	scanf("%f",&de);
	printf("\ninforme o crédito:");
	scanf("%f",&cr);
	sa=(s-de)+c;
	printf("\nosaldo atual é:%2.f",sa);
	if (sa>=0)
	{
		printf("\nsaldo positivo");
	}
	else
	{
		printf("\nsaldo negativo");
	}
}
