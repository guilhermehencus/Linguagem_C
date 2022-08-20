#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	int  qma,qmi,e,eme,div;
	div=2;
	printf("escreva a quantidade mínima:");
	scanf("%d",&qmi);
	printf("escreva a quantidade máxima:");
	scanf ("%d",&qma);
	e=qmi+qma;
	printf("\no estoque é:%d\n",e);
	eme=e/2;
	div=e%2;
	printf("\no estoque médio é:%d\n",eme,div);
}
