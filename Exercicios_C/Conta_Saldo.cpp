#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
{ 	
	setlocale(LC_ALL,"Portuguese");
	float nc,s,de,cr,sa;
	printf("\nescreva o seu n�mero de conta:");
	scanf("%f",&nc);
	printf("\nescreva o seu saldo:");
	scanf("%f",&s);
	printf("\ninforme o d�bito:");
	scanf("%f",&de);
	printf("\ninforme o cr�dito:");
	scanf("%f",&cr);
	sa=(s-de)+c;
	printf("\nosaldo atual �:%2.f",sa);
	if (sa>=0)
	{
		printf("\nsaldo positivo");
	}
	else
	{
		printf("\nsaldo negativo");
	}
}
