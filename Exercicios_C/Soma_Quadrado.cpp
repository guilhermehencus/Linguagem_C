#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,d,a1,b2,c3,d4,som;
	printf("\ndigite o valor de a:");
	scanf ("%f",&a);
	printf("\ndigite o valor de b:");
	scanf("%f",&b);
	printf("\ndigite o valor de c:");
	scanf ("%f",&c);
	printf("\ndigite o valor de d:");
	scanf("%f",&d);
	a1=a*a;
	printf("\no valor do quadrado de a é:%f",a1);
	b2=b*b;
	printf("\no valor do quadrado de b é:%f",b2);
	c3=c*c;
	printf("\no valor do quadrado de c é:%f",c3);
	d4=d*d;
	printf("\no valor do quadrado de d é:%f",d4);
	som=a1+b2+c3+d4;
	printf("\no resultado da soma é:%f\n",som);
}
