#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	printf("escreva um n�mero:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nDomingo");
			break;
		case 2:
			printf("\nSegunda");
			break;
		case 3:
			printf("\nTer�a");
			break;
		case 4:
			printf("\nQuarta");
			break;
		case 5:
			printf("\nQuinta");
			break;
		case 6:
			printf("\nSexta");
			break;
		case 7:
			printf("\nS�bado");
			break;
	}
}
