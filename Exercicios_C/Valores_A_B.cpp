#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float a,b,x,y,a_final,b_final;
	printf("\ndigite o valor de a:");
	scanf("%f",&a);
	printf("\ndigite o valor de b:");
	scanf("%f",&b);
	x=a-b;
	y=b-a;
	printf("\no valor de x é:%2.f\n",x);
	printf("\no valor de y é:%2.f\n",y);
	a_final=a-x;
	printf("\no valor do a final é:%2.f\n",a_final);
	a=a_final;
	b_final=b-y;
	printf("\no valor de b final é:%2.f\n",b_final);
	b=b_final;
}
