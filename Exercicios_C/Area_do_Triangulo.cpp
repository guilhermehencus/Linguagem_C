#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float base,altura,�rea;
	printf("digite a altura:");
	scanf("%d",&altura);
	printf("digite a base":");
	scanf("%d",&base);
	�rea=base*altura/2;
	printf("�rea do tri�ngulo �:%d");
}
