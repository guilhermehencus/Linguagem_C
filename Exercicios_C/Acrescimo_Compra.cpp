#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float vc,acr,vc10;
	acr=10;
	printf("digite o valor de compra:");
	scanf("%f",&vc);
	vc10=vc+10;
	printf("o valor acrescentado é:%2.f",vc10);
}

