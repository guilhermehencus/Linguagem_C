#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float d,tht,vh,sl,sb;
	vh=20;
	printf("\ndigite o total de horas trabalhadas:");
	scanf("%f",&tht);
	printf("\ndigite o desconto:");
	scanf("%f",&d);
	sl=d*tht;
	sb=20*tht;
	printf("\o sal�rio liquido �%2.f\n",sl);
	printf("\o sal�rio bruto �:%2.f\n",sb);
}
