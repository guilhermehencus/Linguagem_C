#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float num,num2,num3,num4,num5,som;
	printf("escreva um n�mero:");
	scanf("%f",&num);
	printf("escreva um n�mero:");
	scanf("%f",&num2);
	printf("escreva um n�mero:");
	scanf("%f",&num3);
	printf("escreva um n�mero:");
	scanf("%f",&num4);
	printf("escreva um n�mero:");
	scanf("%f",&num5);
	som=num+num2+num3+num4+num5;
	printf("a soma deste n�meros �:%2.f",som);
}
