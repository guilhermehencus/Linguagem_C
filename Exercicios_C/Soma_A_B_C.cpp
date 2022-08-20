#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("digite o valor de A é:");
	scanf("%f",&a);
	printf("digite o valor de B é:");
	scanf("%f",&b);
	c=a+b;
	printf("\no valor de C é:%2.f\n",c);
}
