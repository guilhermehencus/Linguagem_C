#include<stdio.h> 
#include<locale.h>
#include<math.h> 
int main(void){ 
	setlocale(LC_ALL,"Portuguese");
	char nome[30];
	float pr,pr3,qa,pu,d,t,tp,pr2;
	pr=0.2;
	pr3=0.3;
	pr2=0.5;
	printf("\ndigite o  nome do produto:");
	scanf("%s",&nome);
	printf("\ndigite a quantidade adquirida:");
	scanf("%f",&qa);
	printf("\ndigite o pre�o unit�rio:");
	scanf("%f",&pu);
	if(qa<=5)
	{
		d=0.2*pu;
		printf("a diferen�a �:%2.f",d);
		t=qa*pu;
		printf("o total �:%2.f",t);
		tp=t-d;
		printf("\no seu produto %s ao  pagar totalmente �:%2.f",nome,tp);
	}
	else 
	{
		if(qa>5 and qa<=10)
		{
			d=0.3*pu;
			printf("\na diferen�a �:%f",d);
			t=qa*pu;
			printf("\no total �:%2.f",t);
			tp=t-d;
			printf("\no seu produto %s ao pagar totalmente �:%f",nome,tp);
		}
		else 
		{
			if(qa>10)
			{
				d=0.5*pu;
				printf("a diferen�a �:%2.f",d);
				t=qa*pu;
				printf("o total �:%2.f",t);
				tp=t-d;
				printf("\no seu produto %s ao total pagar �:%2.f",nome,tp);
			}
		}
	}
}
