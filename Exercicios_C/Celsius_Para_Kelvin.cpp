#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	int c,k;
	printf("digite um valor de celsius:");
	scanf("%d",&c);
	k=273+c;
	printf("a soma resulta em kevin:%d",k);
}
