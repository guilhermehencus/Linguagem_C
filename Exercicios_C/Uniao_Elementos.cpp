#include <stdio.h>
#include <conio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	int veta[5];
	int vetab[5];
	int  vetax[10];
	for (a=0; a<5; a++)
	{
		printf ("\nelemento do A:");
		scanf("%i",&veta[a]);
		vetax[a]=veta[a];
	}
	for (b=0;b<5;b++)
	{
		printf("\nelemento do B:");
		scanf("%i",&vetab[b]);
		vetax[a]=vetab[b];
		a++; //desta forma voc� atualizar a posi��o em que est� inserido no vetax
	}
	for (c=0;c<10;c++)
	{
		printf("\nA uni�o do elemento A e B �:%i",vetax[c]);
	}
}
