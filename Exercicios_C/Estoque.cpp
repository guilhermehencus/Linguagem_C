#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	int  qma,qmi,e,eme,div;
	div=2;
	printf("escreva a quantidade m�nima:");
	scanf("%d",&qmi);
	printf("escreva a quantidade m�xima:");
	scanf ("%d",&qma);
	e=qmi+qma;
	printf("\no estoque �:%d\n",e);
	eme=e/2;
	div=e%2;
	printf("\no estoque m�dio �:%d\n",eme,div);
}
