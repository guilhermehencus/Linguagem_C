#include <stdio.h>
#include <conio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	int numero[10];
	for (a=0;a<10;a++)
	{
		printf ("\ndigite um número:");
		scanf ("%d",&numero[a]);
		fflush(stdin);
	}
	for (b=9;b>=0;b--)
	{
		printf("%d\n",numero[b]);
	}
}
