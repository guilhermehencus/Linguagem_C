#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float s,ab,sn;
	printf("digite o sal�rio:");
	scanf("%f",&s);
	printf("digite o aborno:");
	scanf("%f",&ab);
	sn=s+ab;
	printf("\no sal�rio novo �:%f\n",sn);
}
