#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float base,altura,área;
	printf("digite a altura:");
	scanf("%d",&altura);
	printf("digite a base":");
	scanf("%d",&base);
	área=base*altura/2;
	printf("área do triângulo é:%d");
}
