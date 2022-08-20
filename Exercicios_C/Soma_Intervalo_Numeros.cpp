#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,soma;
	printf("\nescreva um número:");
	scanf("%d",&n1);
	printf("\nescreva um número:");
	scanf("%d",&n2);
	for (soma=0;n1<=n2;n1++)
	{
		soma=soma+n1;
	}
	printf("\n a soma é:%d",soma);
}
