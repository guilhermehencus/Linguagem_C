#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float idm,idm2,idf,idf2,so,p;
	printf("\nescreva a idade de um homem:");
	scanf("%f",&idm);
	printf("\nescreva a idade de um outro homem:");
	scanf("%f",&idm2);
	printf("\nescreva a idade de uma mulher:");
	scanf("%f",&idf);
	printf("\nescreva a idade de uma outra mulher:");
	scanf("%f",&idf2);
	if(idm>idm2 and idf>idf2)
	{
		so=idm+idf2;
		p=idm2*idf;
		printf("\na soma das idades do homem mais velho com a mulher mais nova é:%2.f",so);
		printf("\no produto das idades do homem mais novo com a mulher mais velha é:%2.f",p);
	}
	else
	{
		if(idm2>idm and idf2>idf)
		{
			so=idm2+idf;
			p=idf2*idm;
			printf("\na soma das idades do homem mais velho com a mulher mais nova é:%2.f",so);
			printf("\no produto das idades do homem mais novo com a mulher mais velha é:%2.f",p);
		}
		else 
		{
			if(idm>idm2 and idf2>idf)
			{
				so=idm+idf;
				p=idm2*idf2;
				printf("\na soma das idades do homem mais velho com a mulher mais nova é:%2.f",so);
				printf("\no produto das idades do homem mais novo com a mulher mais velha é:%2.f",p);
			}
			else 
			{
				if(idm2>idm and idf>idf2)
				{
					so=idm2+idf2;
					p=idm*idf;
					printf("\na soma das idades do homem mais velho com a mulher mais nova é:%2.f",so);
					printf("\no produto das idades do homem mais novo com a mulher mais velha é:%2.f",p);
				}
				else 
				{
					printf("erro");
				}
			}
		}
	}
}
