#include<stdio.h>
#include<locale.h>
#include <math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float b,c,b2,c2,a2,raiz;
	printf("digite o valor de b:");
	scanf("%f",&b);
	printf("digite o valor de c:");
	scanf("%f",&c);
	b2=b*b;
	c2=c*c;
	printf("\nresutado ao quadrado é:%f\n",b2);
	printf("resultado ao quadrdo é:%f",c2);
	a2=b2+c2;
	printf("\nresultado do a2 é:%f\n",a2);
	scanf("%f",&a2);
	raiz=sqrt(a2);
	printf("\na raiz do numero %f é de:%f\n",a2,raiz);
}
