#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n,r;
	float resultado;
	r=2;
	do
	{
		printf("\nescreva um n�mero:");
		scanf("%d",&n);
		resultado= pow(r,n);
		printf("\na pontecia��o �:%2.f",resultado);
	}
	while (n>=0);
}
