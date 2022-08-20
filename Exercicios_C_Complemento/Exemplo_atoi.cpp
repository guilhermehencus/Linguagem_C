/* Exemplo de atoi */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include<locale.h>	
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	char numero[7];
	printf("Entre com uma string decimal: ",numero);
	fgets(numero, 7, stdin);
	i=atoi(numero);
	printf("Valor da string \n",numero);
	printf("%d \n",i);
}
