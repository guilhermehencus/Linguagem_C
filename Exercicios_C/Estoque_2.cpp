#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
{ 
	setlocale(LC_ALL,"Portuguese");
	float qe,qmi,qma,qm,div;
	div=2;
	printf ("\nescreva a quantidade atual de estoque:");
	scanf ("%f",&qe);
	printf ("\nescreva a quantidade m�xima de estoque:");
	scanf ("%f",&qma);
	printf ( " \ nescreva a quantidade m�nima de estoque: ");
	scanf ("%f",&qmi);
	qm=qma+qmi/2;
	printf ( "\na quantidade m�dia de estoque �:%2.f",qm);
	if (qe>=qm)
	{
		printf ( "efetuar compra");
	}
	else
	{
		printf ( "n�o efetuar compra");
	}
}
