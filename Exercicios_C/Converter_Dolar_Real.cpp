#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float cotdolar,vd,vr;
	printf("digite a conta��o do dolar:");
	scanf("%f",&cotdolar);
	printf("digite o valor do dolar:");
	scanf("%f",&vd);
	vr=cotdolar*vd;
	printf("\no valor real �:%f\n",vr);
}
