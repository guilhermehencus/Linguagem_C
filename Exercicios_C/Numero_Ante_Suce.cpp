#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float a,u,su,an;
	u=1;
	printf("\ndigite um n�mero:");
	scanf("%f",&a);
	su=a+1;
	printf("\no sucessor �:%2.f",su);
	an=a-1;
	printf("\no antecessor �:%2.f",an);
}
