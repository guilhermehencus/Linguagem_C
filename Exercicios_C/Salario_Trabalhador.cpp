#include<stdio.h> 
#include<locale.h>
#include<string.h> 
int main(void){ 
	setlocale(LC_ALL,"Portuguese"); 
	float r,qht,st,se,num,num2,num3,num4,num5,num6,num7;
	num=40;
	num2=25;
	num3=600;
	num4=15;
	num5=20;
	num6=400;
	num7=10;
	printf("digite o seu registro:");
	scanf("%f",&r);
	printf("digite a quantidade de horas trabalhadas:");
	scanf("%f",&qht);
	if(r<1000)
	{
		if(qht>40)
		{
			se=(qht-40)*25;
			st=600+se;
			printf("o salário total é:%2.f",st);
		}
		else
		{
			st=qht*15;
			printf("o salário total é:%2.f",st);
		}
	}
	else
	{
		if(qht>40)
		{
			se=(qht-40)*20;
			st=400+se;
			printf("o salário total é:%2.f",st);
		}
		else
		{
			st=qht*10;
			printf("o salário total é:%2.f",st);
		}
	}
}
