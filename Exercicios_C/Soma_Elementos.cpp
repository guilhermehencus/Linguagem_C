#include <stdio.h>
#include <conio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	int veta[5];
	int vetab[5];
	int  vetac[5];
	for (a=0; a<5; a++)
	{
		printf ("\nelemento do A:",a+1);
		scanf("%i",&veta[a]);
		printf("\nelemento do B:",a+1);
		scanf("%i",&vetab[a]);
	}
	for (b=0; b<5; b++)
	{
		vetac[b]=veta[b]+vetab[b];
		printf("\na soma para elemento%i foi:%i",b+1,vetac[b]);
	}
	scanf("%i",&b);
}
