#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float ve,td,vd;
	td=0.1;
	printf("\ndigite o valor do seu equipamento:");
	scanf("%f",&ve);
	vd=ve*0.1;
	printf("\no valor de depreciação é:%2.f",vd);
}
