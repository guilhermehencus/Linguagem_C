#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float sal,d,n,n2,n3,n4,salnov;
	n=0.1;
	n2=0.2;
	n3=0.3;
	n4=0.4;
	char cargo[20];
	printf("\nInforme o cargo:");
	scanf("%s",&cargo);            
	printf("\ninforme o salario"); 
	scanf("%f",&sal);               
	if (strcmp(cargo,"gerente")==0)
	{                             
		salnov = sal + (sal*0.1);            
		printf("\no salário novo é:%2.f",salnov);
		d=salnov-sal;
		printf("\na diferença de salário é:%2.f",d);
	}
	else
	{
		if (strcmp(cargo,"técnico")==0)
		{
			salnov = sal + (sal*0.2);            
			printf("\no salário novo é:%2.f",salnov);
			d=salnov-sal;
			printf("\na diferença de salário é:%2.f",d);
		}
		else
		{
			if (strcmp(cargo,"engenheiro")==0)
			{
				salnov = sal + (sal*0.3);            
				printf("\no salário novo é:%2.f",salnov);
				d=salnov-sal;
				printf("\na diferença de salário é:%2.f",d);
			}
			else
			{
				salnov = sal + (sal*0.4);            
				printf("\no salário novo é:%2.f",salnov);
				d=salnov-sal;
				printf("\na diferença de salário é:%2.f",d);
			}
		}
	}
}
