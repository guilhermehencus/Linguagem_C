#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n;
	printf("escreve a quantidade de acertos:");
	scanf("%f",&n);
	if(n>=11 and n<=12)
	{
		printf("a sua nota � A");
	}
	else
	{
		if(n>=9 and n <=10)
		{
			printf("sua nota � B");
		}
		else
		{
			if(n>=7 and n <=8)
			{
				printf("sua nota � C");
			}
			else
			{
				if(n>=5 and n<=6)
				{
					printf("sua nota � D");
				}
				else
				{
					if(n>=4 and n<=0)
					{
						printf("sua nota � E");
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
