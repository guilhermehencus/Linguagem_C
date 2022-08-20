#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float s,ab,sn;
	printf("digite o salário:");
	scanf("%f",&s);
	printf("digite o aborno:");
	scanf("%f",&ab);
	sn=s+ab;
	printf("\no salário novo é:%f\n",sn);
}
