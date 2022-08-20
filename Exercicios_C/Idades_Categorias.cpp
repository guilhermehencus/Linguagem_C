#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float i;
	printf("escreva a sua idade:");
	scanf("%f",&i);
	if(i>=18 and i<=25)
	{
		printf("categoria adulto");
	}
	else
	{
		if(i>=14 and i<=17)
		{
			printf("categoria juvenil B");
		}
		else
		{
			if(i>=12 and i<=13)
			{
				printf("categoria juvenil A");
			}
			else
			{
				if(i>=8 and i<=11)
				{
					printf("categoria infantil B");
				}
				else
				{
					if(i>=5 and i<=7)
					{
						printf("categoria infantil A");
					}
					else
					{
						printf("erro");
					}
				}
			}
		}
	}
}
