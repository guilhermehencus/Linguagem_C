#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("digite o valor de A �:");
	scanf("%f",&a);
	printf("digite o valor de B �:");
	scanf("%f",&b);
	c=a+b;
	printf("\no valor de C �:%2.f\n",c);
}
