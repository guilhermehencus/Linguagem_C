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
		printf("a sua nota é A");
	}
	else
	{
		if(n>=9 and n <=10)
		{
			printf("sua nota é B");
		}
		else
		{
			if(n>=7 and n <=8)
			{
				printf("sua nota é C");
			}
			else
			{
				if(n>=5 and n<=6)
				{
					printf("sua nota é D");
				}
				else
				{
					if(n>=4 and n<=0)
					{
						printf("sua nota é E");
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
