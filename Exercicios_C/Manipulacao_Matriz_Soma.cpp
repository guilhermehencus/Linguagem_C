#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int v [3][10];
	int a,b;
	for (a=0; a<2; a++)
	{
		for (b=0; b<10; b++)
		{
			printf("\nescreva um numero da %d e coluna%d:", a, b);
			scanf("%d",&v[a][b]);
		}
	}
	for (b=0;b<10;b++)
	{
		v[2][b]=v[1][b]+v[0][b];
	}
	for (a=0; a<3; a++)
	{
		for (b=0; b<10; b++)
		{
			printf("\na linha %d e coluna%d é:%d",a,b, v[a][b]);
		}
	}
}
