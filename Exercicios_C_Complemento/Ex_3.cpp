#include <stdio.h>
#include<locale.h>
/* Exercicio 3 maior n�mero */
int main()
{
setlocale(LC_ALL,"Portuguese");
int maior;
int val;
	do {
		printf ("Escreva um n�mero ou digita zero para sair: \n");
		scanf("%d",&val);
		if(val>maior){
		maior=val;
		}
	}while (val!=0);
	if (maior==0 and val==0){
	printf ("Saiu zero :%d \n", maior);
	}
	else {
	printf ("O maior � :%d \n", maior);	
	}
getchar();
}
