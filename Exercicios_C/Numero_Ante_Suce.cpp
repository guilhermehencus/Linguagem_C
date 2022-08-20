#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float a,u,su,an;
	u=1;
	printf("\ndigite um número:");
	scanf("%f",&a);
	su=a+1;
	printf("\no sucessor é:%2.f",su);
	an=a-1;
	printf("\no antecessor é:%2.f",an);
}
