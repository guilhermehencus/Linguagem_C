#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float n,n2,n3,ma,div,num,num2;
	div=7;
	num=2;
	num2=3;
	printf("\nescreva um número:");
	scanf("%f",&n);
	printf("\nescreva o segundo número:");
	scanf("%f",&n2);
	printf("\nescreva o terceiro número:");
	scanf("%f",&n3);
	ma=(n+(n2*2)+(n3*3)+n+n2+n3)/7;
	printf("\nmédia dos aproveitamento é:%2.f",ma);
	if(ma>9)
	{
		printf("\nA");
	}
	else 
	{
		if(ma>=7.5 and ma<9)
		{
			printf("\nB");
		}
		else
		{
			if(ma>=6 and ma<=7.5)
			{
				printf("\nC");
			}
			else
			{
				if(ma<6)
				{
					printf("\nD");
				}
				else 
				{
					printf("\nerro");
				}
			}
		}
	}
}
